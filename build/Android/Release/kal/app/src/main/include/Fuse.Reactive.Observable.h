// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class Observable :1497
// {
uType* Observable_typeof();
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Scripting::Object* obj);
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval);
void Observable__GetHashCode_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Scripting::Object* obj, Observable** __retval);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval);

struct Observable : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> Object;

    void ctor_(::g::Fuse::Scripting::Object* obj);
    ::g::Fuse::Reactive::ObservableSubscription* Subscribe(uObject* observer);
    static Observable* New1(::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
