// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{struct FuseThemes_FuseTriggersWhileTrue_Value_Property;}

namespace g{

// internal sealed class FuseThemes_FuseTriggersWhileTrue_Value_Property :104
// {
::g::Uno::UX::Property_type* FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof();
void FuseThemes_FuseTriggersWhileTrue_Value_Property__ctor_1_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj);
void FuseThemes_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, FuseThemes_FuseTriggersWhileTrue_Value_Property** __retval);
void FuseThemes_FuseTriggersWhileTrue_Value_Property__OnGet_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval);
void FuseThemes_FuseTriggersWhileTrue_Value_Property__OnSet_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin);

struct FuseThemes_FuseTriggersWhileTrue_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Triggers::WhileTrue*> _obj;

    void ctor_1(::g::Fuse::Triggers::WhileTrue* obj);
    static FuseThemes_FuseTriggersWhileTrue_Value_Property* New1(::g::Fuse::Triggers::WhileTrue* obj);
};
// }

} // ::g
