// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct GiveFocus;}}}}
namespace g{struct FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property :733
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property_typeof();
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::GiveFocus* obj);
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::GiveFocus* obj, FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property** __retval);
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnGet_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, bool* __retval);
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnSet_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, bool* v, uObject* origin);

struct FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Triggers::Actions::GiveFocus*> _obj;

    void ctor_1(::g::Fuse::Triggers::Actions::GiveFocus* obj);
    static FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* New1(::g::Fuse::Triggers::Actions::GiveFocus* obj);
};
// }

} // ::g
