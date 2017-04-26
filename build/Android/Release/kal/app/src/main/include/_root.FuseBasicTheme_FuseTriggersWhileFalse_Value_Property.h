// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFalse;}}}
namespace g{struct FuseBasicTheme_FuseTriggersWhileFalse_Value_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseTriggersWhileFalse_Value_Property :898
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersWhileFalse_Value_Property_typeof();
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, ::g::Fuse::Triggers::WhileFalse* obj);
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__New1_fn(::g::Fuse::Triggers::WhileFalse* obj, FuseBasicTheme_FuseTriggersWhileFalse_Value_Property** __retval);
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnGet_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, bool* __retval);
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnSet_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, bool* v, uObject* origin);

struct FuseBasicTheme_FuseTriggersWhileFalse_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Triggers::WhileFalse*> _obj;

    void ctor_1(::g::Fuse::Triggers::WhileFalse* obj);
    static FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* New1(::g::Fuse::Triggers::WhileFalse* obj);
};
// }

} // ::g
