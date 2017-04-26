// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Match;}}}
namespace g{struct kal_FuseReactiveMatch_Value_Property;}

namespace g{

// internal sealed class kal_FuseReactiveMatch_Value_Property :17
// {
::g::Uno::UX::Property_type* kal_FuseReactiveMatch_Value_Property_typeof();
void kal_FuseReactiveMatch_Value_Property__ctor_1_fn(kal_FuseReactiveMatch_Value_Property* __this, ::g::Fuse::Reactive::Match* obj);
void kal_FuseReactiveMatch_Value_Property__New1_fn(::g::Fuse::Reactive::Match* obj, kal_FuseReactiveMatch_Value_Property** __retval);
void kal_FuseReactiveMatch_Value_Property__OnGet_fn(kal_FuseReactiveMatch_Value_Property* __this, uObject** __retval);
void kal_FuseReactiveMatch_Value_Property__OnSet_fn(kal_FuseReactiveMatch_Value_Property* __this, uObject* v, uObject* origin);

struct kal_FuseReactiveMatch_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Reactive::Match*> _obj;

    void ctor_1(::g::Fuse::Reactive::Match* obj);
    static kal_FuseReactiveMatch_Value_Property* New1(::g::Fuse::Reactive::Match* obj);
};
// }

} // ::g
