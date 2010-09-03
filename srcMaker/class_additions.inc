<?php
$defIni["wxSpinEvent"]	= array(
	"_implements"	=> Array("wxCommandEvent","wxEvent"),
	"GetPosition" => array(
		array("int"),
		array(1)
		),
	);

// 
if (empty($defIni["wxScrollEvent"])) $defIni["wxScrollEvent"]	= $defIni["wxSpinEvent"];

$defIni["wxSpinButton"]	= array(
	"_implements"	=> Array("wxControl","wxWindow","wxEvtHandler"),
	"_const"		=> array("GetValue"),
	"wxSpinButton"		=> array(
		array("void","wxWindow*","int","const wxPoint&","const wxSize&","int"),
		array(
			array(1,1,1),
			array(null,null,null,"wxDefaultPosition","wxDefaultSize","wxSP_VERTICAL")
			)
		),
	"GetValue"	=> array(
		array("int"),
		array(1)
		),
	"SetRange"	=> array(
		array("void","int","int"),
		array(1,1,1)
		),
	"SetValue"		=> array(
		array("void","int"),
		array(1,1)
		)
	);

$defIni["wxTreeCtrl"]["GetItemPHPData"] = 
	array(
		array("int","const wxTreeItemId&"),
		array(1,1)
		);

$defIni["wxTreeCtrl"]["SetItemPHPData"] = 
	array(
		array("void","const wxTreeItemId&","int"),
		array(1,1,1)
		);

$addinFrameCode .= <<<__EOTEXT
class wxTreeItemIdUserValue : public wxTreeItemData {
public:
	int UserValue;
	wxTreeItemIdUserValue(int v) : wxTreeItemData() {UserValue = v;}

	static int GetUserValue(wxTreeCtrl_php *tree,wxTreeItemId &item)
	{
		wxTreeItemIdUserValue *tid = (wxTreeItemIdUserValue *) tree->GetItemData(item);
		return tid ? tid->UserValue : 0;
	}	
	static void SetUserValue(wxTreeCtrl_php *tree,wxTreeItemId &item,int v)
	{
		wxTreeItemIdUserValue *tid = (wxTreeItemIdUserValue *) tree->GetItemData(item);
		if (tid) tid->UserValue = v;
		else tree->SetItemData(item,new wxTreeItemIdUserValue(v));
	}	
};

__EOTEXT;

$replaceData = array(
	'((wxTreeCtrl_php*)_this)->GetItemPHPData(' => 'wxTreeItemIdUserValue::GetUserValue(((wxTreeCtrl_php*)_this),',
	'((wxTreeCtrl_php*)_this)->SetItemPHPData(' => 'wxTreeItemIdUserValue::SetUserValue(((wxTreeCtrl_php*)_this),'
	);
?>