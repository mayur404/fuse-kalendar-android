// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct ButtonText;}}}
namespace g{struct FuseBasicTheme_FuseBasicThemeButtonText_Value_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseBasicThemeButtonText_Value_Property :724
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseBasicThemeButtonText_Value_Property_typeof();
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__ctor_1_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, ::g::Fuse::BasicTheme::ButtonText* obj);
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__New1_fn(::g::Fuse::BasicTheme::ButtonText* obj, FuseBasicTheme_FuseBasicThemeButtonText_Value_Property** __retval);
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnAddListener_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uDelegate* listener);
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnGet_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uString** __retval);
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnRemoveListener_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uDelegate* listener);
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnSet_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uString* v, uObject* origin);

struct FuseBasicTheme_FuseBasicThemeButtonText_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::BasicTheme::ButtonText*> _obj;

    void ctor_1(::g::Fuse::BasicTheme::ButtonText* obj);
    static FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* New1(::g::Fuse::BasicTheme::ButtonText* obj);
};
// }

} // ::g
