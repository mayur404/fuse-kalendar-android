// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#74'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ChoreographerDLRFrameCallback :26664
// {
uInterfaceType* ChoreographerDLRFrameCallback_typeof();

struct ChoreographerDLRFrameCallback
{
    void(*fp_doFrame)(uObject*, int64_t*);
    static void doFrame(const uInterface& __this, int64_t arg0) { __this.VTable<ChoreographerDLRFrameCallback>()->fp_doFrame(__this, &arg0); }
};
// }

}}}} // ::g::Android::android::view
