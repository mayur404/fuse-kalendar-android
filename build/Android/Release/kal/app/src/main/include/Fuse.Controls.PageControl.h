// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#21'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl__PageData;}}}
namespace g{namespace Fuse{namespace Navigation{struct LinearNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PageControl :1858
// {
struct PageControl_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Navigation::INavigation interface9;
    ::g::Fuse::Navigation::IBaseNavigation interface10;
};

PageControl_type* PageControl_typeof();
void PageControl__ctor_5_fn(PageControl* __this);
void PageControl__get_Active_fn(PageControl* __this, ::g::Fuse::Node** __retval);
void PageControl__set_Active_fn(PageControl* __this, ::g::Fuse::Node* value);
void PageControl__get_CanGoBack_fn(PageControl* __this, bool* __retval);
void PageControl__get_CanGoForward_fn(PageControl* __this, bool* __retval);
void PageControl__CleanupBehaviors_fn(PageControl* __this, ::g::Fuse::Node* page, PageControl__PageData* data);
void PageControl__CleanupStateListen_fn(PageControl* __this, ::g::Fuse::Node* page, PageControl__PageData* data);
void PageControl__get_CollapseInactive_fn(PageControl* __this, bool* __retval);
void PageControl__get_DisableInactive_fn(PageControl* __this, bool* __retval);
void PageControl__FuseNavigationINavigationGetPage_fn(PageControl* __this, int* index, ::g::Fuse::Node** __retval);
void PageControl__FuseNavigationINavigationget_PageCount_fn(PageControl* __this, int* __retval);
void PageControl__FuseNavigationINavigationget_PageProgress_fn(PageControl* __this, double* __retval);
void PageControl__GetPageData_fn(::g::Fuse::Node* elm, bool* create, PageControl__PageData** __retval);
void PageControl__GoBack_fn(PageControl* __this);
void PageControl__GoForward_fn(PageControl* __this);
void PageControl__Goto_fn(PageControl* __this, ::g::Fuse::Node* node, int* mode);
void PageControl__get_IsHorizontal_fn(PageControl* __this, bool* __retval);
void PageControl__get_Navigation_fn(PageControl* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval);
void PageControl__New3_fn(PageControl** __retval);
void PageControl__OnChildAdded_fn(PageControl* __this, ::g::Fuse::Node* n);
void PageControl__OnChildRemoved_fn(PageControl* __this, ::g::Fuse::Node* n);
void PageControl__OnNavigationStateChanged_fn(PageControl* __this, uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
void PageControl__OnRooted_fn(PageControl* __this);
void PageControl__OnUnrooted_fn(PageControl* __this);
void PageControl__add_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__add_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__Toggle_fn(PageControl* __this, ::g::Fuse::Node* node);
void PageControl__get_Transition_fn(PageControl* __this, int* __retval);
void PageControl__set_Transition_fn(PageControl* __this, int* value);
void PageControl__UpdateChild_fn(PageControl* __this, ::g::Fuse::Node* c);
void PageControl__UpdateInteraction_fn(PageControl* __this);
void PageControl__UpdatePageProgress_fn(PageControl* __this, ::g::Fuse::Node* page, PageControl__PageData* data);
void PageControl__UpdateProgress_fn(PageControl* __this, ::g::Fuse::Node* page, double* progress);

struct PageControl : ::g::Fuse::Controls::Panel
{
    int _inactive;
    int _interaction;
    uStrong< ::g::Fuse::Navigation::LinearNavigation*> _navigation;
    int _orient;
    static uSStrong< ::g::Fuse::PropertyHandle*> _pageDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _pageDataProperty() { return PageControl_typeof()->Init(), _pageDataProperty_; }
    uStrong< ::g::Fuse::Navigation::SwipeNavigate*> _swipe;
    int _transition;

    void ctor_5();
    ::g::Fuse::Node* Active();
    void Active(::g::Fuse::Node* value);
    bool CanGoBack();
    bool CanGoForward();
    void CleanupBehaviors(::g::Fuse::Node* page, PageControl__PageData* data);
    void CleanupStateListen(::g::Fuse::Node* page, PageControl__PageData* data);
    bool CollapseInactive();
    bool DisableInactive();
    void GoBack();
    void GoForward();
    void Goto(::g::Fuse::Node* node, int mode);
    bool IsHorizontal();
    ::g::Fuse::Navigation::StructuredNavigation* Navigation();
    void OnNavigationStateChanged(uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
    void add_PageCountChanged(uDelegate* value);
    void remove_PageCountChanged(uDelegate* value);
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    void Toggle(::g::Fuse::Node* node);
    int Transition();
    void Transition(int value);
    void UpdateChild(::g::Fuse::Node* c);
    void UpdateInteraction();
    void UpdatePageProgress(::g::Fuse::Node* page, PageControl__PageData* data);
    void UpdateProgress(::g::Fuse::Node* page, double progress);
    static PageControl__PageData* GetPageData(::g::Fuse::Node* elm, bool create);
    static PageControl* New3();
};
// }

}}} // ::g::Fuse::Controls
