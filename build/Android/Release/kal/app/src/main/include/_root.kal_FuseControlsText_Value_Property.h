// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{struct kal_FuseControlsText_Value_Property;}

namespace g{

// internal sealed class kal_FuseControlsText_Value_Property :1
// {
::g::Uno::UX::Property_type* kal_FuseControlsText_Value_Property_typeof();
void kal_FuseControlsText_Value_Property__ctor_1_fn(kal_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj);
void kal_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, kal_FuseControlsText_Value_Property** __retval);
void kal_FuseControlsText_Value_Property__OnAddListener_fn(kal_FuseControlsText_Value_Property* __this, uDelegate* listener);
void kal_FuseControlsText_Value_Property__OnGet_fn(kal_FuseControlsText_Value_Property* __this, uString** __retval);
void kal_FuseControlsText_Value_Property__OnRemoveListener_fn(kal_FuseControlsText_Value_Property* __this, uDelegate* listener);
void kal_FuseControlsText_Value_Property__OnSet_fn(kal_FuseControlsText_Value_Property* __this, uString* v, uObject* origin);

struct kal_FuseControlsText_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_1(::g::Fuse::Controls::Text* obj);
    static kal_FuseControlsText_Value_Property* New1(::g::Fuse::Controls::Text* obj);
};
// }

} // ::g
