// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/widget/$.uno#45'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct FrameLayoutDLRLayoutParams;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class FrameLayoutDLRLayoutParams :13032
// {
::g::Android::java::lang::Object_type* FrameLayoutDLRLayoutParams_typeof();
void FrameLayoutDLRLayoutParams__ctor_19_fn(FrameLayoutDLRLayoutParams* __this, int* arg0, int* arg1);
void FrameLayoutDLRLayoutParams___Init4_fn();
void FrameLayoutDLRLayoutParams__New19_fn(int* arg0, int* arg1, FrameLayoutDLRLayoutParams** __retval);

struct FrameLayoutDLRLayoutParams : ::g::Android::android::view::ViewGroupDLRMarginLayoutParams
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID FrameLayoutDLRLayoutParams_25166_ID_c_;
    static jmethodID& FrameLayoutDLRLayoutParams_25166_ID_c() { return FrameLayoutDLRLayoutParams_25166_ID_c_; }

    void ctor_19(int arg0, int arg1);
    static void _Init4();
    static FrameLayoutDLRLayoutParams* New19(int arg0, int arg1);
};
// }

}}}} // ::g::Android::android::widget
