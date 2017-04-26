// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{struct kal_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class kal_FuseReactiveEach_Items_Property :10
// {
::g::Uno::UX::Property_type* kal_FuseReactiveEach_Items_Property_typeof();
void kal_FuseReactiveEach_Items_Property__ctor_1_fn(kal_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj);
void kal_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, kal_FuseReactiveEach_Items_Property** __retval);
void kal_FuseReactiveEach_Items_Property__OnGet_fn(kal_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void kal_FuseReactiveEach_Items_Property__OnSet_fn(kal_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);

struct kal_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_1(::g::Fuse::Reactive::Each* obj);
    static kal_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj);
};
// }

} // ::g
