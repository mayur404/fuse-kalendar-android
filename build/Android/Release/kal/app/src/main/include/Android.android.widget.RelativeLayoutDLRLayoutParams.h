// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/widget/$.uno#75'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayoutDLRLayoutParams;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class RelativeLayoutDLRLayoutParams :20627
// {
::g::Android::java::lang::Object_type* RelativeLayoutDLRLayoutParams_typeof();
void RelativeLayoutDLRLayoutParams__ctor_19_fn(RelativeLayoutDLRLayoutParams* __this, int* arg0, int* arg1);
void RelativeLayoutDLRLayoutParams___Init4_fn();
void RelativeLayoutDLRLayoutParams__New19_fn(int* arg0, int* arg1, RelativeLayoutDLRLayoutParams** __retval);

struct RelativeLayoutDLRLayoutParams : ::g::Android::android::view::ViewGroupDLRMarginLayoutParams
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID RelativeLayoutDLRLayoutParams_25931_ID_c_;
    static jmethodID& RelativeLayoutDLRLayoutParams_25931_ID_c() { return RelativeLayoutDLRLayoutParams_25931_ID_c_; }

    void ctor_19(int arg0, int arg1);
    static void _Init4();
    static RelativeLayoutDLRLayoutParams* New19(int arg0, int arg1);
};
// }

}}}} // ::g::Android::android::widget
