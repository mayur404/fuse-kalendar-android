// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{struct kal_FuseControlsScrollView_IsEnabled_Property;}

namespace g{

// internal sealed class kal_FuseControlsScrollView_IsEnabled_Property :52
// {
::g::Uno::UX::Property_type* kal_FuseControlsScrollView_IsEnabled_Property_typeof();
void kal_FuseControlsScrollView_IsEnabled_Property__ctor_1_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, ::g::Fuse::Controls::ScrollView* obj);
void kal_FuseControlsScrollView_IsEnabled_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, kal_FuseControlsScrollView_IsEnabled_Property** __retval);
void kal_FuseControlsScrollView_IsEnabled_Property__OnGet_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, bool* __retval);
void kal_FuseControlsScrollView_IsEnabled_Property__OnSet_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, bool* v, uObject* origin);

struct kal_FuseControlsScrollView_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::ScrollView*> _obj;

    void ctor_1(::g::Fuse::Controls::ScrollView* obj);
    static kal_FuseControlsScrollView_IsEnabled_Property* New1(::g::Fuse::Controls::ScrollView* obj);
};
// }

} // ::g
