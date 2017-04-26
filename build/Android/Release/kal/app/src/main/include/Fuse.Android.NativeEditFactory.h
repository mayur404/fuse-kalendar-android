// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Factory.h>
namespace g{namespace Fuse{namespace Android{struct NativeEditFactory;}}}

namespace g{
namespace Fuse{
namespace Android{

// public partial sealed class NativeEditFactory :509
// {
::g::Uno::UX::Factory_type* NativeEditFactory_typeof();
void NativeEditFactory__ctor_1_fn(NativeEditFactory* __this);
void NativeEditFactory__get_Instance_fn(NativeEditFactory** __retval);
void NativeEditFactory__New1_fn(NativeEditFactory* __this, uObject** __retval);
void NativeEditFactory__New2_fn(NativeEditFactory** __retval);

struct NativeEditFactory : ::g::Uno::UX::Factory
{
    static uSStrong<NativeEditFactory*> _instance_;
    static uSStrong<NativeEditFactory*>& _instance() { return _instance_; }

    void ctor_1();
    static NativeEditFactory* New2();
    static NativeEditFactory* Instance();
};
// }

}}} // ::g::Fuse::Android
