// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#89'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface SurfaceHolderDLRCallback2 :27147
// {
uInterfaceType* SurfaceHolderDLRCallback2_typeof();

struct SurfaceHolderDLRCallback2
{
    void(*fp_surfaceRedrawNeeded)(uObject*, uObject*);
    static void surfaceRedrawNeeded(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolderDLRCallback2>()->fp_surfaceRedrawNeeded(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
