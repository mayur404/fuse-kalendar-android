// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/os/$.uno#63'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern interface IInterface :11440
// {
uInterfaceType* IInterface_typeof();

struct IInterface
{
    void(*fp_asBinder)(uObject*, uObject**);
    static uObject* asBinder(const uInterface& __this) { uObject* __retval; return __this.VTable<IInterface>()->fp_asBinder(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::os
