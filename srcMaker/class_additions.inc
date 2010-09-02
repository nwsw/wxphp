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

?>