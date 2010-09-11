#include "common.h"

#ifndef PHP_WXWIDGETS_H
/* Prevent double inclusion */
#define PHP_WXWIDGETS_H

/* Define Extension Properties */
#define PHP_WXWIDGETS_EXTNAME    "wxWidgets"
//#define PHP_WXWIDGETS_EXTVER    "1.0"
#define PHP_WXWIDGETS_VERSION	"1.0"

/* Import configure options
   when building outside of
   the PHP source tree */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Include PHP Standard Header */
#include "php.h"

/* Define the entry point symbol
 * Zend will use when loading this module
 */
extern zend_module_entry wxWidgets_module_entry;
#define phpext_sample_ptr &wxWidgets_module_entry


class wxPhpClientData : public wxClientData
{
public:
        wxPhpClientData(zval* phpObj){
                this->phpObj = phpObj;
        }
        zval* phpObj;
};

PHP_METHOD(php_wxApp, helloWorld);
PHP_METHOD(php_wxApp, __construct);
PHP_METHOD(php_wxApp, SetInstance);
PHP_METHOD(php_wxApp, Yield);

// entries --->
PHP_METHOD(php_wxFrame, __construct);
PHP_METHOD(php_wxFrame, CreateStatusBar);
PHP_METHOD(php_wxFrame, CreateToolBar);
PHP_METHOD(php_wxFrame, GetClientAreaOrigin);
PHP_METHOD(php_wxFrame, SetStatusBar);
PHP_METHOD(php_wxFrame, SetToolBar);
PHP_METHOD(php_wxFrame, Connect);
PHP_METHOD(php_wxEvent, GetId);
PHP_METHOD(php_wxEvent, SetEventType);
PHP_METHOD(php_wxEvent, GetEventType);
PHP_METHOD(php_wxEvent, GetEventObject);
PHP_METHOD(php_wxEvent, SetEventObject);
PHP_METHOD(php_wxEvent, GetTimestamp);
PHP_METHOD(php_wxEvent, SetTimestamp);
PHP_METHOD(php_wxEvent, SetId);
PHP_METHOD(php_wxEvent, Skip);
PHP_METHOD(php_wxEvent, GetSkipped);
PHP_METHOD(php_wxEvent, IsCommandEvent);
PHP_METHOD(php_wxEvent, ShouldPropagate);
PHP_METHOD(php_wxEvent, StopPropagation);
PHP_METHOD(php_wxEvent, ResumePropagation);
PHP_METHOD(php_wxWindow, __construct);
PHP_METHOD(php_wxWindow, Show);
PHP_METHOD(php_wxWindow, Create);
PHP_METHOD(php_wxWindow, Destroy);
PHP_METHOD(php_wxWindow, Raise);
PHP_METHOD(php_wxWindow, Lower);
PHP_METHOD(php_wxWindow, Enable);
PHP_METHOD(php_wxWindow, IsRetained);
PHP_METHOD(php_wxWindow, SetFocus);
PHP_METHOD(php_wxWindow, Reparent);
PHP_METHOD(php_wxWindow, WarpPointer);
PHP_METHOD(php_wxWindow, Update);
PHP_METHOD(php_wxWindow, ClearBackground);
PHP_METHOD(php_wxWindow, SetBackgroundColour);
PHP_METHOD(php_wxWindow, SetForegroundColour);
PHP_METHOD(php_wxWindow, SetCursor);
PHP_METHOD(php_wxWindow, SetFont);
PHP_METHOD(php_wxWindow, GetCharHeight);
PHP_METHOD(php_wxWindow, GetCharWidth);
PHP_METHOD(php_wxWindow, SetScrollbar);
PHP_METHOD(php_wxWindow, SetScrollPos);
PHP_METHOD(php_wxWindow, GetScrollThumb);
PHP_METHOD(php_wxWindow, GetScrollRange);
PHP_METHOD(php_wxWindow, AddChild);
PHP_METHOD(php_wxWindow, RemoveChild);
PHP_METHOD(php_wxWindow, GetHandle);
PHP_METHOD(php_wxWindow, Refresh);
PHP_METHOD(php_wxWindow, IsFrozen);
PHP_METHOD(php_wxWindow, Connect);
PHP_METHOD(php_wxPoint, __construct);
PHP_METHOD(php_wxSize, __construct);
PHP_METHOD(php_wxToolBar, __construct);
PHP_METHOD(php_wxToolBar, Create);
PHP_METHOD(php_wxToolBar, SetMargins);
PHP_METHOD(php_wxToolBar, SetToolSeparation);
PHP_METHOD(php_wxToolBar, FindToolForPosition);
PHP_METHOD(php_wxToolBar, SetToolShortHelp);
PHP_METHOD(php_wxStatusBar, __construct);
PHP_METHOD(php_wxStatusBar, SetStatusText);
PHP_METHOD(php_wxStatusBar, GetStatusText);
PHP_METHOD(php_wxStatusBar, Connect);
PHP_METHOD(php_wxBoxSizer, __construct);
PHP_METHOD(php_wxBoxSizer, RecalcSizes);
PHP_METHOD(php_wxBoxSizer, CalcMin);
PHP_METHOD(php_wxBoxSizer, GetOrientation);
PHP_METHOD(php_wxSizer, Add);
PHP_METHOD(php_wxSizer, AddSpacer);
PHP_METHOD(php_wxSizer, AddStretchSpacer);
PHP_METHOD(php_wxSizer, Insert);
PHP_METHOD(php_wxSizer, InsertSpacer);
PHP_METHOD(php_wxSizer, InsertStretchSpacer);
PHP_METHOD(php_wxSizer, Prepend);
PHP_METHOD(php_wxSizer, PrependSpacer);
PHP_METHOD(php_wxSizer, PrependStretchSpacer);
PHP_METHOD(php_wxSizer, Remove);
PHP_METHOD(php_wxSizer, Detach);
PHP_METHOD(php_wxSizer, Clear);
PHP_METHOD(php_wxSizer, SetMinSize);
PHP_METHOD(php_wxSizer, SetItemMinSize);
PHP_METHOD(php_wxSizer, GetSize);
PHP_METHOD(php_wxSizer, GetPosition);
PHP_METHOD(php_wxSizer, GetMinSize);
PHP_METHOD(php_wxSizer, RecalcSizes);
PHP_METHOD(php_wxSizer, CalcMin);
PHP_METHOD(php_wxSizer, Layout);
PHP_METHOD(php_wxSizer, Fit);
PHP_METHOD(php_wxSizer, FitInside);
PHP_METHOD(php_wxSizer, SetSizeHints);
PHP_METHOD(php_wxSizer, SetVirtualSizeHints);
PHP_METHOD(php_wxSizer, GetChildren);
PHP_METHOD(php_wxSizer, SetDimension);
PHP_METHOD(php_wxSizer, GetItem);
PHP_METHOD(php_wxSizer, Hide);
PHP_METHOD(php_wxSizer, IsShown);
PHP_METHOD(php_wxColour, __construct);
PHP_METHOD(php_wxCursor, __construct);
PHP_METHOD(php_wxFont, __construct);
PHP_METHOD(php_wxWindowBase, SetSizer);
PHP_METHOD(php_wxWindowBase, GetSizer);
PHP_METHOD(php_wxWindowBase, Layout);
PHP_METHOD(php_wxWindowBase, Fit);
PHP_METHOD(php_wxWindowBase, SetWindowStyle);
PHP_METHOD(php_wxWindowBase, PopupMenu);
PHP_METHOD(php_wxWindowBase, IsShown);
PHP_METHOD(php_wxWindowBase, IsEnabled);
PHP_METHOD(php_wxWindowBase, IsShownOnScreen);
PHP_METHOD(php_wxWindowBase, UpdateWindowUI);
PHP_METHOD(php_wxWindowBase, FindWindow);
PHP_METHOD(php_wxSizerFlags, __construct);
PHP_METHOD(php_wxSizerItem, __construct);
PHP_METHOD(php_wxClassInfo, GetSize);
PHP_METHOD(php_wxObject, IsKindOf);
PHP_METHOD(php_wxImage, __construct);
PHP_METHOD(php_wxImage, Scale);
PHP_METHOD(php_wxImage, Rescale);
PHP_METHOD(php_wxImage, Resize);
PHP_METHOD(php_wxImage, Rotate);
PHP_METHOD(php_wxImage, Rotate90);
PHP_METHOD(php_wxImage, Mirror);
PHP_METHOD(php_wxMenuItem, Check);
PHP_METHOD(php_wxMenuItem, Enable);
PHP_METHOD(php_wxMenuItem, IsChecked);
PHP_METHOD(php_wxMenuItem, SetBitmap);
PHP_METHOD(php_wxMenuItemBase, SetMenu);
PHP_METHOD(php_wxMenuItemBase, GetMenu);
PHP_METHOD(php_wxMenuItemBase, GetId);
PHP_METHOD(php_wxMenuItemBase, IsSeparator);
PHP_METHOD(php_wxMenuItemBase, SetText);
PHP_METHOD(php_wxMenuItemBase, GetLabel);
PHP_METHOD(php_wxMenuItemBase, GetLabelFromText);
PHP_METHOD(php_wxMenuItemBase, GetKind);
PHP_METHOD(php_wxMenuItemBase, IsCheckable);
PHP_METHOD(php_wxMenuItemBase, IsSubMenu);
PHP_METHOD(php_wxMenuItemBase, SetSubMenu);
PHP_METHOD(php_wxMenuItemBase, GetSubMenu);
PHP_METHOD(php_wxMenuItemBase, Enable);
PHP_METHOD(php_wxMenuItemBase, IsEnabled);
PHP_METHOD(php_wxMenuItemBase, Check);
PHP_METHOD(php_wxMenuItemBase, IsChecked);
PHP_METHOD(php_wxMenuItemBase, SetHelp);
PHP_METHOD(php_wxMenu, __construct);
PHP_METHOD(php_wxMenu, Connect);
PHP_METHOD(php_wxBitmap, __construct);
PHP_METHOD(php_wxBitmap, GetHeight);
PHP_METHOD(php_wxBitmap, GetWidth);
PHP_METHOD(php_wxBitmap, GetDepth);
PHP_METHOD(php_wxBitmap, CopyFromIcon);
PHP_METHOD(php_wxBitmap, ConvertToImage);
PHP_METHOD(php_wxMenuBase, Append);
PHP_METHOD(php_wxMenuBase, AppendCheckItem);
PHP_METHOD(php_wxMenuBase, AppendRadioItem);
PHP_METHOD(php_wxMenuBase, Break);
PHP_METHOD(php_wxMenuBase, Insert);
PHP_METHOD(php_wxMenuBase, InsertSeparator);
PHP_METHOD(php_wxMenuBase, InsertCheckItem);
PHP_METHOD(php_wxMenuBase, InsertRadioItem);
PHP_METHOD(php_wxMenuBase, Prepend);
PHP_METHOD(php_wxMenuBase, PrependSeparator);
PHP_METHOD(php_wxMenuBase, PrependCheckItem);
PHP_METHOD(php_wxMenuBase, PrependRadioItem);
PHP_METHOD(php_wxMenuBase, Remove);
PHP_METHOD(php_wxMenuBase, Delete);
PHP_METHOD(php_wxMenuBase, Destroy);
PHP_METHOD(php_wxMenuBase, GetMenuItemCount);
PHP_METHOD(php_wxMenuBase, GetTitle);
PHP_METHOD(php_wxMenuBase, FindItem);
PHP_METHOD(php_wxMenuBase, FindItemByPosition);
PHP_METHOD(php_wxMenuBase, Enable);
PHP_METHOD(php_wxMenuBase, IsEnabled);
PHP_METHOD(php_wxMenuBase, Check);
PHP_METHOD(php_wxMenuBase, IsChecked);
PHP_METHOD(php_wxMenuBase, SetLabel);
PHP_METHOD(php_wxMenuBase, GetLabel);
PHP_METHOD(php_wxMenuBase, SetHelpString);
PHP_METHOD(php_wxMenuBase, GetHelpString);
PHP_METHOD(php_wxMenuBase, SetTitle);
PHP_METHOD(php_wxMenuBase, AppendSeparator);
PHP_METHOD(php_wxMenuBar, __construct);
PHP_METHOD(php_wxMenuBar, Append);
PHP_METHOD(php_wxMenuBar, Insert);
PHP_METHOD(php_wxMenuBar, Replace);
PHP_METHOD(php_wxMenuBar, Remove);
PHP_METHOD(php_wxMenuBar, FindMenuItem);
PHP_METHOD(php_wxMenuBar, EnableTop);
PHP_METHOD(php_wxMenuBar, SetLabelTop);
PHP_METHOD(php_wxToolBarBase, AddCheckTool);
PHP_METHOD(php_wxToolBarBase, AddRadioTool);
PHP_METHOD(php_wxToolBarBase, InsertTool);
PHP_METHOD(php_wxToolBarBase, AddControl);
PHP_METHOD(php_wxToolBarBase, InsertControl);
PHP_METHOD(php_wxToolBarBase, FindControl);
PHP_METHOD(php_wxToolBarBase, AddSeparator);
PHP_METHOD(php_wxToolBarBase, InsertSeparator);
PHP_METHOD(php_wxToolBarBase, RemoveTool);
PHP_METHOD(php_wxToolBarBase, DeleteToolByPos);
PHP_METHOD(php_wxToolBarBase, DeleteTool);
PHP_METHOD(php_wxToolBarBase, ClearTools);
PHP_METHOD(php_wxToolBarBase, Realize);
PHP_METHOD(php_wxToolBarBase, EnableTool);
PHP_METHOD(php_wxToolBarBase, ToggleTool);
PHP_METHOD(php_wxToolBarBase, SetToolClientData);
PHP_METHOD(php_wxToolBarBase, GetToolPos);
PHP_METHOD(php_wxToolBarBase, GetToolState);
PHP_METHOD(php_wxToolBarBase, GetToolEnabled);
PHP_METHOD(php_wxToolBarBase, SetToolShortHelp);
PHP_METHOD(php_wxToolBarBase, GetToolShortHelp);
PHP_METHOD(php_wxToolBarBase, SetToolLongHelp);
PHP_METHOD(php_wxToolBarBase, GetToolLongHelp);
PHP_METHOD(php_wxToolBarBase, SetToolPacking);
PHP_METHOD(php_wxToolBarBase, GetToolPacking);
PHP_METHOD(php_wxToolBarBase, GetToolSeparation);
PHP_METHOD(php_wxToolBarBase, SetToolBitmapSize);
PHP_METHOD(php_wxToolBarBase, GetToolBitmapSize);
PHP_METHOD(php_wxToolBarBase, GetToolSize);
PHP_METHOD(php_wxToolBarBase, FindToolForPosition);
PHP_METHOD(php_wxToolBarBase, FindById);
PHP_METHOD(php_wxToolBarBase, GetMargins);
PHP_METHOD(php_wxToolBarBase, GetToolsCount);
PHP_METHOD(php_wxToolBarBase, AddTool);
PHP_METHOD(php_wxToolBarToolBase, GetId);
PHP_METHOD(php_wxControl, SetLabel);
PHP_METHOD(php_wxControl, GetLabel);
PHP_METHOD(php_wxCommandEvent, __construct);
PHP_METHOD(php_wxCommandEvent, GetSelection);
PHP_METHOD(php_wxCommandEvent, SetString);
PHP_METHOD(php_wxCommandEvent, GetString);
PHP_METHOD(php_wxCommandEvent, IsChecked);
PHP_METHOD(php_wxCommandEvent, IsSelection);
PHP_METHOD(php_wxCommandEvent, SetExtraLong);
PHP_METHOD(php_wxCommandEvent, GetExtraLong);
PHP_METHOD(php_wxCommandEvent, SetInt);
PHP_METHOD(php_wxCommandEvent, GetInt);
PHP_METHOD(php_wxPanel, __construct);
PHP_METHOD(php_wxPanel, InitDialog);
PHP_METHOD(php_wxPanel, SetFocus);
PHP_METHOD(php_wxPanel, SetFocusIgnoringChildren);
PHP_METHOD(php_wxPanel, Connect);
PHP_METHOD(php_wxTopLevelWindowBase, SetIcon);
PHP_METHOD(php_wxSplitterWindow, __construct);
PHP_METHOD(php_wxSplitterWindow, SplitVertically);
PHP_METHOD(php_wxSplitterWindow, SplitHorizontally);
PHP_METHOD(php_wxSplitterWindow, SetMinimumPaneSize);
PHP_METHOD(php_wxSplitterWindow, SetSashSize);
PHP_METHOD(php_wxSplitterWindow, SetBorderSize);
PHP_METHOD(php_wxSplitterWindow, GetSashSize);
PHP_METHOD(php_wxSplitterWindow, GetBorderSize);
PHP_METHOD(php_wxSplitterWindow, SetSashPosition);
PHP_METHOD(php_wxSplitterWindow, GetSashPosition);
PHP_METHOD(php_wxSplitterWindow, SetSashGravity);
PHP_METHOD(php_wxSplitterWindow, GetSashGravity);
PHP_METHOD(php_wxSplitterWindow, GetMinimumPaneSize);
PHP_METHOD(php_wxSplitterWindow, Connect);
PHP_METHOD(php_wxTreeCtrl, __construct);
PHP_METHOD(php_wxTreeCtrl, GetItemPHPData);
PHP_METHOD(php_wxTreeCtrl, SetItemPHPData);
PHP_METHOD(php_wxTreeCtrl, AddRoot);
PHP_METHOD(php_wxTreeCtrl, AppendItem);
PHP_METHOD(php_wxTreeCtrl, GetItemText);
PHP_METHOD(php_wxTreeCtrl, Delete);
PHP_METHOD(php_wxTreeCtrl, DeleteChildren);
PHP_METHOD(php_wxTreeCtrl, DeleteAllItems);
PHP_METHOD(php_wxTreeCtrl, Expand);
PHP_METHOD(php_wxTreeCtrl, Collapse);
PHP_METHOD(php_wxTreeCtrl, CollapseAndReset);
PHP_METHOD(php_wxTreeCtrl, Toggle);
PHP_METHOD(php_wxTreeCtrl, Unselect);
PHP_METHOD(php_wxTreeCtrl, UnselectAll);
PHP_METHOD(php_wxTreeCtrl, SelectItem);
PHP_METHOD(php_wxTreeCtrl, EnsureVisible);
PHP_METHOD(php_wxTreeCtrl, ScrollTo);
PHP_METHOD(php_wxTreeCtrl, SetItemTextColour);
PHP_METHOD(php_wxTreeCtrl, SetItemBackgroundColour);
PHP_METHOD(php_wxTreeCtrl, SetItemDropHighlight);
PHP_METHOD(php_wxTreeCtrl, SetItemBold);
PHP_METHOD(php_wxTreeCtrl, SetItemText);
PHP_METHOD(php_wxTreeCtrl, GetItemTextColour);
PHP_METHOD(php_wxTreeCtrl, GetItemBackgroundColour);
PHP_METHOD(php_wxTreeCtrl, SetImageList);
PHP_METHOD(php_wxTreeCtrl, SetStateImageList);
PHP_METHOD(php_wxTreeCtrl, IsExpanded);
PHP_METHOD(php_wxTreeCtrl, IsSelected);
PHP_METHOD(php_wxTreeCtrl, IsBold);
PHP_METHOD(php_wxTreeCtrl, SetIndent);
PHP_METHOD(php_wxTreeCtrl, GetIndent);
PHP_METHOD(php_wxTreeCtrl, GetCount);
PHP_METHOD(php_wxTreeCtrl, SetItemHasChildren);
PHP_METHOD(php_wxTreeCtrl, IsVisible);
PHP_METHOD(php_wxTreeCtrl, ItemHasChildren);
PHP_METHOD(php_wxTreeCtrl, GetChildrenCount);
PHP_METHOD(php_wxTreeCtrl, GetRootItem);
PHP_METHOD(php_wxTreeCtrl, GetSelection);
PHP_METHOD(php_wxTreeCtrl, GetItemParent);
PHP_METHOD(php_wxTreeCtrl, Connect);
PHP_METHOD(php_wxValidator, __construct);
PHP_METHOD(php_wxValidator, Connect);
PHP_METHOD(php_wxCheckListBox, Check);
PHP_METHOD(php_wxCheckListBox, __construct);
PHP_METHOD(php_wxCheckListBox, IsChecked);
PHP_METHOD(php_wxCheckListBox, Connect);
PHP_METHOD(php_wxTreeItemData, __construct);
PHP_METHOD(php_wxTreeItemId, __construct);
PHP_METHOD(php_wxTreeItemId, IsOk);
PHP_METHOD(php_wxFrameBase, SetMenuBar);
PHP_METHOD(php_wxTreeEvent, GetItem);
PHP_METHOD(php_wxArrayString, __construct);
PHP_METHOD(php_wxArrayString, Add);
PHP_METHOD(php_wxArrayString, Empty);
PHP_METHOD(php_wxArrayString, Clear);
PHP_METHOD(php_wxCheckListBoxBase, Check);
PHP_METHOD(php_wxListBoxBase, Set);
PHP_METHOD(php_wxListBoxBase, Deselect);
PHP_METHOD(php_wxListBoxBase, Insert);
PHP_METHOD(php_wxListBoxBase, InsertItems);
PHP_METHOD(php_wxListBoxBase, DeselectAll);
PHP_METHOD(php_wxListBoxBase, SetSelection);
PHP_METHOD(php_wxIcon, __construct);
PHP_METHOD(php_wxIcon, CopyFromBitmap);
PHP_METHOD(php_wxTextCtrl, __construct);
PHP_METHOD(php_wxTextCtrl, GetValue);
PHP_METHOD(php_wxTextCtrl, SetValue);
PHP_METHOD(php_wxTextCtrl, SetMaxLength);
PHP_METHOD(php_wxTextCtrl, Connect);
PHP_METHOD(php_wxNotebook, __construct);
PHP_METHOD(php_wxNotebook, SetPageText);
PHP_METHOD(php_wxNotebook, GetPageText);
PHP_METHOD(php_wxNotebook, GetPageImage);
PHP_METHOD(php_wxNotebook, SetPageImage);
PHP_METHOD(php_wxNotebook, SetPageSize);
PHP_METHOD(php_wxNotebook, SetPadding);
PHP_METHOD(php_wxNotebook, SetTabSize);
PHP_METHOD(php_wxNotebook, DeleteAllPages);
PHP_METHOD(php_wxNotebook, GetSelection);
PHP_METHOD(php_wxNotebook, SetSelection);
PHP_METHOD(php_wxNotebook, InsertPage);
PHP_METHOD(php_wxNotebook, Connect);
PHP_METHOD(php_wxBookCtrlBase, AddPage);
PHP_METHOD(php_wxBookCtrlBase, SetSelection);
PHP_METHOD(php_wxBookCtrlBase, RemovePage);
PHP_METHOD(php_wxBookCtrlBase, DeletePage);
PHP_METHOD(php_wxBookCtrlBase, GetSelection);
PHP_METHOD(php_wxBookCtrlBase, SetPageText);
PHP_METHOD(php_wxBookCtrlBase, GetPageText);
PHP_METHOD(php_wxBookCtrlBase, GetPageCount);
PHP_METHOD(php_wxBookCtrlBase, GetPage);
PHP_METHOD(php_wxBookCtrlBase, GetCurrentPage);
PHP_METHOD(php_wxFlexGridSizer, __construct);
PHP_METHOD(php_wxFlexGridSizer, AddGrowableRow);
PHP_METHOD(php_wxFlexGridSizer, RemoveGrowableRow);
PHP_METHOD(php_wxFlexGridSizer, AddGrowableCol);
PHP_METHOD(php_wxFlexGridSizer, RemoveGrowableCol);
PHP_METHOD(php_wxFlexGridSizer, SetFlexibleDirection);
PHP_METHOD(php_wxFlexGridSizer, GetFlexibleDirection);
PHP_METHOD(php_wxStaticText, __construct);
PHP_METHOD(php_wxStaticText, SetLabel);
PHP_METHOD(php_wxStaticText, GetLabel);
PHP_METHOD(php_wxStaticText, SetFont);
PHP_METHOD(php_wxStaticText, Connect);
PHP_METHOD(php_wxButton, __construct);
PHP_METHOD(php_wxButton, SetLabel);
PHP_METHOD(php_wxButton, Enable);
PHP_METHOD(php_wxButton, SetDefault);
PHP_METHOD(php_wxButton, SetBackgroundColour);
PHP_METHOD(php_wxButton, SetForegroundColour);
PHP_METHOD(php_wxButton, Connect);
PHP_METHOD(php_wxStaticBox, __construct);
PHP_METHOD(php_wxStaticBox, SetLabel);
PHP_METHOD(php_wxStaticBox, Connect);
PHP_METHOD(php_wxStaticBoxSizer, __construct);
PHP_METHOD(php_wxListBox, __construct);
PHP_METHOD(php_wxListBox, GetString);
PHP_METHOD(php_wxListBox, GetSelection);
PHP_METHOD(php_wxListBox, IsSelected);
PHP_METHOD(php_wxListBox, SetString);
PHP_METHOD(php_wxListBox, Clear);
PHP_METHOD(php_wxListBox, Delete);
PHP_METHOD(php_wxListBox, GetCount);
PHP_METHOD(php_wxListBox, Connect);
PHP_METHOD(php_wxFileDialog, __construct);
PHP_METHOD(php_wxFileDialog, GetPath);
PHP_METHOD(php_wxFileDialog, GetDirectory);
PHP_METHOD(php_wxFileDialog, GetFilename);
PHP_METHOD(php_wxFileDialog, GetFilterIndex);
PHP_METHOD(php_wxFileDialog, SetMessage);
PHP_METHOD(php_wxFileDialog, SetPath);
PHP_METHOD(php_wxFileDialog, SetDirectory);
PHP_METHOD(php_wxFileDialog, SetFilename);
PHP_METHOD(php_wxFileDialog, SetWildcard);
PHP_METHOD(php_wxFileDialog, SetFilterIndex);
PHP_METHOD(php_wxFileDialog, ShowModal);
PHP_METHOD(php_wxFileDialog, Show);
PHP_METHOD(php_wxFileDialog, GetPaths);
PHP_METHOD(php_wxFileDialog, GetFilenames);
PHP_METHOD(php_wxFileDialog, Connect);
PHP_METHOD(php_wxDialog, __construct);
PHP_METHOD(php_wxDialog, Show);
PHP_METHOD(php_wxDialog, ShowModal);
PHP_METHOD(php_wxDialog, EndModal);
PHP_METHOD(php_wxDialog, IsModal);
PHP_METHOD(php_wxDialog, Connect);
PHP_METHOD(php_wxMessageDialog, ShowModal);
PHP_METHOD(php_wxMessageDialog, __construct);
PHP_METHOD(php_wxMessageDialog, Show);
PHP_METHOD(php_wxMessageDialog, Connect);
PHP_METHOD(php_wxStatusBarBase, PushStatusText);
PHP_METHOD(php_wxStatusBarBase, SetStatusText);
PHP_METHOD(php_wxStatusBarBase, GetStatusText);
PHP_METHOD(php_wxStatusBarBase, PopStatusText);
PHP_METHOD(php_wxListCtrl, __construct);
PHP_METHOD(php_wxListCtrl, DeleteAllItems);
PHP_METHOD(php_wxListCtrl, SetItemCount);
PHP_METHOD(php_wxListCtrl, OnGetItemText);
PHP_METHOD(php_wxListCtrl, GetColumnWidth);
PHP_METHOD(php_wxListCtrl, SetColumnWidth);
PHP_METHOD(php_wxListCtrl, InsertColumn);
PHP_METHOD(php_wxListCtrl, SetItemImage);
PHP_METHOD(php_wxListCtrl, SetItemText);
PHP_METHOD(php_wxListCtrl, GetItemText);
PHP_METHOD(php_wxListCtrl, GetItemCount);
PHP_METHOD(php_wxListCtrl, GetColumnCount);
PHP_METHOD(php_wxListCtrl, DeleteItem);
PHP_METHOD(php_wxListCtrl, DeleteAllColumns);
PHP_METHOD(php_wxListCtrl, DeleteColumn);
PHP_METHOD(php_wxListCtrl, InsertItem);
PHP_METHOD(php_wxListCtrl, GetSelectedItemCount);
PHP_METHOD(php_wxListCtrl, GetItemTextColour);
PHP_METHOD(php_wxListCtrl, SetTextColour);
PHP_METHOD(php_wxListCtrl, SetItem);
PHP_METHOD(php_wxListCtrl, SetItemBackgroundColour);
PHP_METHOD(php_wxListCtrl, SetItemTextColour);
PHP_METHOD(php_wxListCtrl, Connect);
PHP_METHOD(php_wxStaticBitmap, __construct);
PHP_METHOD(php_wxStaticBitmap, SetBitmap);
PHP_METHOD(php_wxStaticBitmap, Connect);
PHP_METHOD(php_wxGauge, __construct);
PHP_METHOD(php_wxGauge, SetShadowWidth);
PHP_METHOD(php_wxGauge, SetBezelFace);
PHP_METHOD(php_wxGauge, SetRange);
PHP_METHOD(php_wxGauge, SetValue);
PHP_METHOD(php_wxGauge, GetShadowWidth);
PHP_METHOD(php_wxGauge, GetBezelFace);
PHP_METHOD(php_wxGauge, GetRange);
PHP_METHOD(php_wxGauge, GetValue);
PHP_METHOD(php_wxGauge, IsVertical);
PHP_METHOD(php_wxGauge, Connect);
PHP_METHOD(php_wxListEvent, GetIndex);
PHP_METHOD(php_wxListEvent, GetColumn);
PHP_METHOD(php_wxComboBox, __construct);
PHP_METHOD(php_wxComboBox, SetSelection);
PHP_METHOD(php_wxComboBox, GetSelection);
PHP_METHOD(php_wxComboBox, SetEditable);
PHP_METHOD(php_wxComboBox, GetValue);
PHP_METHOD(php_wxComboBox, SetValue);
PHP_METHOD(php_wxComboBox, Replace);
PHP_METHOD(php_wxComboBox, Remove);
PHP_METHOD(php_wxComboBox, SelectAll);
PHP_METHOD(php_wxComboBox, Clear);
PHP_METHOD(php_wxComboBox, Delete);
PHP_METHOD(php_wxComboBox, Append);
PHP_METHOD(php_wxComboBox, Insert);
PHP_METHOD(php_wxComboBox, Connect);
PHP_METHOD(php_wxPrinter, __construct);
PHP_METHOD(php_wxPrinter, Print);
PHP_METHOD(php_wxPrinter, PrintDialog);
PHP_METHOD(php_wxPrintout, __construct);
PHP_METHOD(php_wxPrintout, GetDC);
PHP_METHOD(php_wxPrintout, SetDC);
PHP_METHOD(php_wxPrintout, OnPrintPage);
PHP_METHOD(php_wxPrintout, IsPreview);
PHP_METHOD(php_wxDC, SetFont);
PHP_METHOD(php_wxDC, StartDoc);
PHP_METHOD(php_wxDC, EndDoc);
PHP_METHOD(php_wxDC, StartPage);
PHP_METHOD(php_wxDC, EndPage);
PHP_METHOD(php_wxDC, SetPen);
PHP_METHOD(php_wxDC, SetBrush);
PHP_METHOD(php_wxDC, Clear);
PHP_METHOD(php_wxDC, GetCharHeight);
PHP_METHOD(php_wxDC, GetCharWidth);
PHP_METHOD(php_wxDCBase, DrawText);
PHP_METHOD(php_wxDCBase, DrawCircle);
PHP_METHOD(php_wxDCBase, DrawEllipse);
PHP_METHOD(php_wxDCBase, DrawIcon);
PHP_METHOD(php_wxDCBase, DrawBitmap);
PHP_METHOD(php_wxDCBase, FloodFill);
PHP_METHOD(php_wxDCBase, GradientFillConcentric);
PHP_METHOD(php_wxDCBase, DrawLine);
PHP_METHOD(php_wxDCBase, DrawArc);
PHP_METHOD(php_wxDCBase, DrawCheckMark);
PHP_METHOD(php_wxDCBase, DrawPoint);
PHP_METHOD(php_wxDCBase, DrawLines);
PHP_METHOD(php_wxDCBase, DrawRectangle);
PHP_METHOD(php_wxDCBase, DrawSpline);
PHP_METHOD(php_wxDCBase, StartDoc);
PHP_METHOD(php_wxDCBase, EndDoc);
PHP_METHOD(php_wxDCBase, StartPage);
PHP_METHOD(php_wxDCBase, EndPage);
PHP_METHOD(php_wxDCBase, BeginDrawing);
PHP_METHOD(php_wxDCBase, EndDrawing);
PHP_METHOD(php_wxDCBase, GetSize);
PHP_METHOD(php_wxPrintDialogData, __construct);
PHP_METHOD(php_wxRect, __construct);
PHP_METHOD(php_wxPen, __construct);
PHP_METHOD(php_wxPen, SetWidth);
PHP_METHOD(php_wxPen, SetStyle);
PHP_METHOD(php_wxPen, SetColour);
PHP_METHOD(php_wxBrush, __construct);
PHP_METHOD(php_wxBrush, SetColour);
PHP_METHOD(php_wxBrush, SetStyle);
PHP_METHOD(php_wxBrush, SetStipple);
PHP_METHOD(php_wxSplashScreen, __construct);
PHP_METHOD(php_wxSplashScreen, GetTimeout);
PHP_METHOD(php_wxSplashScreen, Connect);
PHP_METHOD(php_wxCalendarCtrl, __construct);
PHP_METHOD(php_wxCalendarCtrl, SetDate);
PHP_METHOD(php_wxCalendarCtrl, GetDate);
PHP_METHOD(php_wxCalendarCtrl, SetLowerDateLimit);
PHP_METHOD(php_wxCalendarCtrl, GetLowerDateLimit);
PHP_METHOD(php_wxCalendarCtrl, SetUpperDateLimit);
PHP_METHOD(php_wxCalendarCtrl, GetUpperDateLimit);
PHP_METHOD(php_wxCalendarCtrl, SetDateRange);
PHP_METHOD(php_wxCalendarCtrl, EnableYearChange);
PHP_METHOD(php_wxCalendarCtrl, EnableMonthChange);
PHP_METHOD(php_wxCalendarCtrl, EnableHolidayDisplay);
PHP_METHOD(php_wxCalendarCtrl, SetHeaderColours);
PHP_METHOD(php_wxCalendarCtrl, SetHighlightColours);
PHP_METHOD(php_wxCalendarCtrl, SetHolidayColours);
PHP_METHOD(php_wxCalendarCtrl, SetHoliday);
PHP_METHOD(php_wxCalendarCtrl, Enable);
PHP_METHOD(php_wxCalendarCtrl, Show);
PHP_METHOD(php_wxCalendarCtrl, SetWindowStyleFlag);
PHP_METHOD(php_wxCalendarCtrl, GetAttr);
PHP_METHOD(php_wxCalendarCtrl, SetAttr);
PHP_METHOD(php_wxCalendarCtrl, Connect);
PHP_METHOD(php_wxCalendarEvent, GetWeekDay);
PHP_METHOD(php_wxDateEvent, GetDate);
PHP_METHOD(php_wxDateEvent, SetDate);
PHP_METHOD(php_wxDateTime, __construct);
PHP_METHOD(php_wxCalendarDateAttr, __construct);
PHP_METHOD(php_wxCalendarDateAttr, SetTextColour);
PHP_METHOD(php_wxCalendarDateAttr, SetBackgroundColour);
PHP_METHOD(php_wxCalendarDateAttr, SetBorderColour);
PHP_METHOD(php_wxCalendarDateAttr, SetFont);
PHP_METHOD(php_wxCalendarDateAttr, SetBorder);
PHP_METHOD(php_wxCalendarDateAttr, SetHoliday);
PHP_METHOD(php_wxCalendarDateAttr, IsHoliday);
PHP_METHOD(php_wxCalendarDateAttr, HasBorder);
PHP_METHOD(php_wxCalendarDateAttr, HasFont);
PHP_METHOD(php_wxCalendarDateAttr, HasBorderColour);
PHP_METHOD(php_wxCalendarDateAttr, HasBackgroundColour);
PHP_METHOD(php_wxCalendarDateAttr, HasTextColour);
PHP_METHOD(php_wxCalendarDateAttr, GetTextColour);
PHP_METHOD(php_wxCalendarDateAttr, GetBackgroundColour);
PHP_METHOD(php_wxCalendarDateAttr, GetBorderColour);
PHP_METHOD(php_wxCalendarDateAttr, GetFont);
PHP_METHOD(php_wxCalendarDateAttr, GetBorder);
PHP_METHOD(php_wxTimer, __construct);
PHP_METHOD(php_wxTimer, Start);
PHP_METHOD(php_wxTimer, Stop);
PHP_METHOD(php_wxTimer, IsRunning);
PHP_METHOD(php_wxEvtHandler, __construct);
PHP_METHOD(php_wxEvtHandler, Connect);
PHP_METHOD(php_wxEvtHandler, Connect);
PHP_METHOD(php_wxTimerEvent, GetInterval);
PHP_METHOD(php_wxIPV4address, Hostname);
PHP_METHOD(php_wxIPV4address, Service);
PHP_METHOD(php_wxIPV4address, __construct);
PHP_METHOD(php_wxSockAddress, Clear);
PHP_METHOD(php_wxSocketClient, Connect);
PHP_METHOD(php_wxSocketClient, __construct);
PHP_METHOD(php_wxSocketBase, SetEventHandler);
PHP_METHOD(php_wxSocketBase, Destroy);
PHP_METHOD(php_wxSocketBase, Close);
PHP_METHOD(php_wxSocketBase, Discard);
PHP_METHOD(php_wxSocketBase, IsConnected);
PHP_METHOD(php_wxSocketBase, Write);
PHP_METHOD(php_wxCheckBox, __construct);
PHP_METHOD(php_wxCheckBox, SetValue);
PHP_METHOD(php_wxCheckBox, GetValue);
PHP_METHOD(php_wxCheckBox, Connect);
PHP_METHOD(php_wxDirDialog, __construct);
PHP_METHOD(php_wxDirDialog, SetPath);
PHP_METHOD(php_wxDirDialog, ShowModal);
PHP_METHOD(php_wxDirDialog, GetPath);
PHP_METHOD(php_wxDirDialog, Connect);
PHP_METHOD(php_wxBitmapButton, __construct);
PHP_METHOD(php_wxBitmapButton, Connect);
PHP_METHOD(php_wxToggleButton, __construct);
PHP_METHOD(php_wxToggleButton, SetValue);
PHP_METHOD(php_wxToggleButton, GetValue);
PHP_METHOD(php_wxToggleButton, Connect);
PHP_METHOD(php_wxChoice, __construct);
PHP_METHOD(php_wxChoice, GetCount);
PHP_METHOD(php_wxChoice, Clear);
PHP_METHOD(php_wxChoice, GetSelection);
PHP_METHOD(php_wxChoice, GetCurrentSelection);
PHP_METHOD(php_wxChoice, SetSelection);
PHP_METHOD(php_wxChoice, FindString);
PHP_METHOD(php_wxChoice, GetString);
PHP_METHOD(php_wxChoice, SetString);
PHP_METHOD(php_wxChoice, Delete);
PHP_METHOD(php_wxChoice, Append);
PHP_METHOD(php_wxChoice, Insert);
PHP_METHOD(php_wxChoice, Connect);
PHP_METHOD(php_wxStyledTextCtrl, __construct);
PHP_METHOD(php_wxStyledTextCtrl, AddText);
PHP_METHOD(php_wxStyledTextCtrl, GetAnchor);
PHP_METHOD(php_wxStyledTextCtrl, Redo);
PHP_METHOD(php_wxStyledTextCtrl, SelectAll);
PHP_METHOD(php_wxStyledTextCtrl, SetSavePoint);
PHP_METHOD(php_wxStyledTextCtrl, CanRedo);
PHP_METHOD(php_wxStyledTextCtrl, GetViewWhiteSpace);
PHP_METHOD(php_wxStyledTextCtrl, SetViewWhiteSpace);
PHP_METHOD(php_wxStyledTextCtrl, GotoLine);
PHP_METHOD(php_wxStyledTextCtrl, GotoPos);
PHP_METHOD(php_wxStyledTextCtrl, SetAnchor);
PHP_METHOD(php_wxStyledTextCtrl, ConvertEOLs);
PHP_METHOD(php_wxStyledTextCtrl, GetEOLMode);
PHP_METHOD(php_wxStyledTextCtrl, SetEOLMode);
PHP_METHOD(php_wxStyledTextCtrl, SetTabWidth);
PHP_METHOD(php_wxStyledTextCtrl, GetTabWidth);
PHP_METHOD(php_wxStyledTextCtrl, SetCodePage);
PHP_METHOD(php_wxStyledTextCtrl, MarkerDefine);
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetForeground);
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetBackground);
PHP_METHOD(php_wxStyledTextCtrl, MarkerAdd);
PHP_METHOD(php_wxStyledTextCtrl, MarkerDelete);
PHP_METHOD(php_wxStyledTextCtrl, MarkerDeleteAll);
PHP_METHOD(php_wxStyledTextCtrl, MarkerGet);
PHP_METHOD(php_wxStyledTextCtrl, MarkerNext);
PHP_METHOD(php_wxStyledTextCtrl, MarkerPrevious);
PHP_METHOD(php_wxStyledTextCtrl, MarkerDefineBitmap);
PHP_METHOD(php_wxStyledTextCtrl, MarkerAddSet);
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetAlpha);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginType);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginType);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginWidth);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginWidth);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginMask);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginMask);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginSensitive);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginSensitive);
PHP_METHOD(php_wxStyledTextCtrl, StyleResetDefault);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetUnderline);
PHP_METHOD(php_wxStyledTextCtrl, GetCaretPeriod);
PHP_METHOD(php_wxStyledTextCtrl, SetCaretPeriod);
PHP_METHOD(php_wxStyledTextCtrl, SetIndent);
PHP_METHOD(php_wxStyledTextCtrl, GetIndent);
PHP_METHOD(php_wxStyledTextCtrl, SetUseTabs);
PHP_METHOD(php_wxStyledTextCtrl, GetUseTabs);
PHP_METHOD(php_wxStyledTextCtrl, SetUseHorizontalScrollBar);
PHP_METHOD(php_wxStyledTextCtrl, GetUseHorizontalScrollBar);
PHP_METHOD(php_wxStyledTextCtrl, GetIndentationGuides);
PHP_METHOD(php_wxStyledTextCtrl, SetHighlightGuide);
PHP_METHOD(php_wxStyledTextCtrl, GetLineEndPosition);
PHP_METHOD(php_wxStyledTextCtrl, GetHighlightGuide);
PHP_METHOD(php_wxStyledTextCtrl, GetCodePage);
PHP_METHOD(php_wxStyledTextCtrl, SetCurrentPos);
PHP_METHOD(php_wxStyledTextCtrl, SetSelectionStart);
PHP_METHOD(php_wxStyledTextCtrl, GetSelectionStart);
PHP_METHOD(php_wxStyledTextCtrl, SetSelectionEnd);
PHP_METHOD(php_wxStyledTextCtrl, GetSelectionEnd);
PHP_METHOD(php_wxStyledTextCtrl, FindText);
PHP_METHOD(php_wxStyledTextCtrl, GetFirstVisibleLine);
PHP_METHOD(php_wxStyledTextCtrl, GetLine);
PHP_METHOD(php_wxStyledTextCtrl, GetLineCount);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginLeft);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginLeft);
PHP_METHOD(php_wxStyledTextCtrl, SetMarginRight);
PHP_METHOD(php_wxStyledTextCtrl, GetMarginRight);
PHP_METHOD(php_wxStyledTextCtrl, GetModify);
PHP_METHOD(php_wxStyledTextCtrl, SetSelection);
PHP_METHOD(php_wxStyledTextCtrl, GetSelectedText);
PHP_METHOD(php_wxStyledTextCtrl, GetTextRange);
PHP_METHOD(php_wxStyledTextCtrl, HideSelection);
PHP_METHOD(php_wxStyledTextCtrl, LineFromPosition);
PHP_METHOD(php_wxStyledTextCtrl, PositionFromLine);
PHP_METHOD(php_wxStyledTextCtrl, LineScroll);
PHP_METHOD(php_wxStyledTextCtrl, EnsureCaretVisible);
PHP_METHOD(php_wxStyledTextCtrl, ReplaceSelection);
PHP_METHOD(php_wxStyledTextCtrl, SetReadOnly);
PHP_METHOD(php_wxStyledTextCtrl, CanPaste);
PHP_METHOD(php_wxStyledTextCtrl, CanUndo);
PHP_METHOD(php_wxStyledTextCtrl, EmptyUndoBuffer);
PHP_METHOD(php_wxStyledTextCtrl, Undo);
PHP_METHOD(php_wxStyledTextCtrl, Cut);
PHP_METHOD(php_wxStyledTextCtrl, Copy);
PHP_METHOD(php_wxStyledTextCtrl, Paste);
PHP_METHOD(php_wxStyledTextCtrl, Clear);
PHP_METHOD(php_wxStyledTextCtrl, SetText);
PHP_METHOD(php_wxStyledTextCtrl, GetText);
PHP_METHOD(php_wxStyledTextCtrl, GetTextLength);
PHP_METHOD(php_wxStyledTextCtrl, SetOvertype);
PHP_METHOD(php_wxStyledTextCtrl, GetOvertype);
PHP_METHOD(php_wxStyledTextCtrl, SetCaretWidth);
PHP_METHOD(php_wxStyledTextCtrl, GetCaretWidth);
PHP_METHOD(php_wxStyledTextCtrl, ReplaceTarget);
PHP_METHOD(php_wxStyledTextCtrl, ReplaceTargetRE);
PHP_METHOD(php_wxStyledTextCtrl, SearchInTarget);
PHP_METHOD(php_wxStyledTextCtrl, SetSearchFlags);
PHP_METHOD(php_wxStyledTextCtrl, GetSearchFlags);
PHP_METHOD(php_wxStyledTextCtrl, ShowLines);
PHP_METHOD(php_wxStyledTextCtrl, HideLines);
PHP_METHOD(php_wxStyledTextCtrl, GetLineVisible);
PHP_METHOD(php_wxStyledTextCtrl, EnsureVisible);
PHP_METHOD(php_wxStyledTextCtrl, SetTabIndents);
PHP_METHOD(php_wxStyledTextCtrl, GetTabIndents);
PHP_METHOD(php_wxStyledTextCtrl, SetBackSpaceUnIndents);
PHP_METHOD(php_wxStyledTextCtrl, GetBackSpaceUnIndents);
PHP_METHOD(php_wxStyledTextCtrl, SetMouseDwellTime);
PHP_METHOD(php_wxStyledTextCtrl, GetMouseDwellTime);
PHP_METHOD(php_wxStyledTextCtrl, SetEndAtLastLine);
PHP_METHOD(php_wxStyledTextCtrl, GetEndAtLastLine);
PHP_METHOD(php_wxStyledTextCtrl, SetUseVerticalScrollBar);
PHP_METHOD(php_wxStyledTextCtrl, GetUseVerticalScrollBar);
PHP_METHOD(php_wxStyledTextCtrl, AppendText);
PHP_METHOD(php_wxStyledTextCtrl, LineLength);
PHP_METHOD(php_wxStyledTextCtrl, LinesOnScreen);
PHP_METHOD(php_wxStyledTextCtrl, UsePopUp);
PHP_METHOD(php_wxStyledTextCtrl, SetLexer);
PHP_METHOD(php_wxStyledTextCtrl, GetLexer);
PHP_METHOD(php_wxStyledTextCtrl, SetProperty);
PHP_METHOD(php_wxStyledTextCtrl, SetKeyWords);
PHP_METHOD(php_wxStyledTextCtrl, SetLexerLanguage);
PHP_METHOD(php_wxStyledTextCtrl, SetIndentationGuides);
PHP_METHOD(php_wxStyledTextCtrl, SetWrapMode);
PHP_METHOD(php_wxStyledTextCtrl, GetWrapMode);
PHP_METHOD(php_wxStyledTextCtrl, SaveFile);
PHP_METHOD(php_wxStyledTextCtrl, LoadFile);
PHP_METHOD(php_wxStyledTextCtrl, StyleClearAll);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetForeground);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetBackground);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetBold);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetItalic);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetSize);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetFaceName);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetEOLFilled);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetCase);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetHotSpot);
PHP_METHOD(php_wxStyledTextCtrl, StyleSetVisible);
PHP_METHOD(php_wxStyledTextCtrl, SetWhitespaceForeground);
PHP_METHOD(php_wxStyledTextCtrl, SetWhitespaceBackground);
PHP_METHOD(php_wxStyledTextCtrl, GetProperty);
PHP_METHOD(php_wxStyledTextCtrl, GetPropertyInt);
PHP_METHOD(php_wxStyledTextCtrl, Colourise);
PHP_METHOD(php_wxStyledTextCtrl, SetStyleBits);
PHP_METHOD(php_wxStyledTextCtrl, GetStyleBits);
PHP_METHOD(php_wxStyledTextCtrl, Connect);
PHP_METHOD(php_wxImageList, __construct);
PHP_METHOD(php_wxImageList, Add);
PHP_METHOD(php_wxImageList, GetBitmap);
PHP_METHOD(php_wxImageList, GetIcon);
PHP_METHOD(php_wxImageList, Replace);
PHP_METHOD(php_wxImageList, Remove);
PHP_METHOD(php_wxImageList, RemoveAll);
PHP_METHOD(php_wxImageList, GetImageCount);
PHP_METHOD(php_wxXmlResource, LoadToolBar);
PHP_METHOD(php_wxXmlResource, LoadDialog);
PHP_METHOD(php_wxXmlResource, LoadPanel);
PHP_METHOD(php_wxXmlResource, LoadFrame);
PHP_METHOD(php_wxXmlResource, LoadBitmap);
PHP_METHOD(php_wxXmlResource, LoadIcon);
PHP_METHOD(php_wxXmlResource, __construct);
PHP_METHOD(php_wxXmlResource, Load);
PHP_METHOD(php_wxXmlResource, Unload);
PHP_METHOD(php_wxXmlResource, InitAllHandlers);
PHP_METHOD(php_wxXmlResource, ClearHandlers);
PHP_METHOD(php_wxXmlResource, LoadMenu);
PHP_METHOD(php_wxXmlResource, LoadMenuBar);
PHP_METHOD(php_wxXmlResource, GetXRCID);
PHP_METHOD(php_wxXmlResource, GetDomain);
PHP_METHOD(php_wxXmlResource, SetDomain);
PHP_METHOD(php_wxLocale, __construct);
PHP_METHOD(php_wxLocale, Init);
PHP_METHOD(php_wxLocale, IsAvailable);
PHP_METHOD(php_wxLocale, IsLoaded);
PHP_METHOD(php_wxLocale, AddCatalogLookupPathPrefix);
PHP_METHOD(php_wxLocale, AddCatalog);
PHP_METHOD(php_wxLocale, GetName);
PHP_METHOD(php_wxLocale, GetLocale);
PHP_METHOD(php_wxLocale, GetLanguage);
PHP_METHOD(php_wxLocale, GetCanonicalName);
PHP_METHOD(php_wxLocale, GetSystemLanguage);
PHP_METHOD(php_wxLocale, GetSystemEncoding);
PHP_METHOD(php_wxLocale, GetSystemEncodingName);
PHP_METHOD(php_wxTreeCtrlBase, AssignImageList);
PHP_METHOD(php_wxRadioButton, __construct);
PHP_METHOD(php_wxRadioButton, SetValue);
PHP_METHOD(php_wxRadioButton, GetValue);
PHP_METHOD(php_wxRadioButton, Enable);
PHP_METHOD(php_wxRadioButton, SetLabel);
PHP_METHOD(php_wxRadioButton, Connect);
PHP_METHOD(php_wxListItem, __construct);
PHP_METHOD(php_wxListItem, Clear);
PHP_METHOD(php_wxListItem, ClearAttributes);
PHP_METHOD(php_wxListItem, SetMask);
PHP_METHOD(php_wxListItem, SetId);
PHP_METHOD(php_wxListItem, SetColumn);
PHP_METHOD(php_wxListItem, SetImage);
PHP_METHOD(php_wxListItem, SetText);
PHP_METHOD(php_wxListItem, SetWidth);
PHP_METHOD(php_wxListItem, GetId);
PHP_METHOD(php_wxListItem, GetColumn);
PHP_METHOD(php_wxListItem, GetText);
PHP_METHOD(php_wxListItem, GetWidth);
PHP_METHOD(php_wxHtmlHelpController, __construct);
PHP_METHOD(php_wxHtmlHelpController, AddBook);
PHP_METHOD(php_wxHtmlHelpController, Display);
PHP_METHOD(php_wxHtmlHelpController, DisplayContents);
PHP_METHOD(php_wxHtmlHelpController, DisplayIndex);
PHP_METHOD(php_wxHtmlHelpController, SetTempDir);
PHP_METHOD(php_wxHtmlHelpController, SetTitleFormat);
PHP_METHOD(php_wxTaskBarIcon, __construct);
PHP_METHOD(php_wxTaskBarIcon, SetIcon);
PHP_METHOD(php_wxTaskBarIcon, IsIconInstalled);
PHP_METHOD(php_wxTaskBarIcon, RemoveIcon);
PHP_METHOD(php_wxTaskBarIcon, PopupMenu);
PHP_METHOD(php_wxTaskBarIcon, IsOk);
PHP_METHOD(php_wxTaskBarIcon, Connect);
PHP_METHOD(php_wxScrolledWindow, __construct);
PHP_METHOD(php_wxScrolledWindow, SetScrollRate);
PHP_METHOD(php_wxScrolledWindow, Connect);
PHP_METHOD(php_wxIdleEvent, __construct);
PHP_METHOD(php_wxStringInputStream, __construct);
PHP_METHOD(php_wxMemoryInputStream, __construct);
PHP_METHOD(php_wxSpinEvent, GetPosition);
PHP_METHOD(php_wxScrollEvent, GetPosition);
PHP_METHOD(php_wxSpinButton, __construct);
PHP_METHOD(php_wxSpinButton, GetValue);
PHP_METHOD(php_wxSpinButton, SetRange);
PHP_METHOD(php_wxSpinButton, SetValue);
PHP_METHOD(php_wxSpinButton, Connect);
PHP_METHOD(php_wxSpinCtrl, __construct);
PHP_METHOD(php_wxSpinCtrl, GetMin);
PHP_METHOD(php_wxSpinCtrl, GetMax);
PHP_METHOD(php_wxSpinCtrl, SetRange);
PHP_METHOD(php_wxSpinCtrl, GetValue);
PHP_METHOD(php_wxSpinCtrl, SetValue);
PHP_METHOD(php_wxSpinCtrl, Connect);

// <--- entries


#endif /* PHP_WXWIDGETS_H */
