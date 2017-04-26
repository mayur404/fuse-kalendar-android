// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{struct FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property :842
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property_typeof();
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Fuse::Controls::TextInput* obj);
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property** __retval);
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);

struct FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextInput*> _obj;

    void ctor_1(::g::Fuse::Controls::TextInput* obj);
    static FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* New1(::g::Fuse::Controls::TextInput* obj);
};
// }

} // ::g
