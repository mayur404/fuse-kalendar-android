// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{struct FuseBasicTheme_FuseControlsCircle_Opacity_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsCircle_Opacity_Property :870
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof();
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__ctor_1_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, ::g::Fuse::Controls::Circle* obj);
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__New1_fn(::g::Fuse::Controls::Circle* obj, FuseBasicTheme_FuseControlsCircle_Opacity_Property** __retval);
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnGet_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* __retval);
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnSet_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin);

struct FuseBasicTheme_FuseControlsCircle_Opacity_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Circle*> _obj;

    void ctor_1(::g::Fuse::Controls::Circle* obj);
    static FuseBasicTheme_FuseControlsCircle_Opacity_Property* New1(::g::Fuse::Controls::Circle* obj);
};
// }

} // ::g
