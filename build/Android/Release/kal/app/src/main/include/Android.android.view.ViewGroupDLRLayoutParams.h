// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#12'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public extern class ViewGroupDLRLayoutParams :8899
// {
::g::Android::java::lang::Object_type* ViewGroupDLRLayoutParams_typeof();
void ViewGroupDLRLayoutParams__ctor_7_fn(ViewGroupDLRLayoutParams* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ViewGroupDLRLayoutParams___Init2_fn();
void ViewGroupDLRLayoutParams__get_FILL_PARENT_fn(int* __retval);

struct ViewGroupDLRLayoutParams : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID FILL_PARENT_23322_ID_;
    static jfieldID& FILL_PARENT_23322_ID() { return FILL_PARENT_23322_ID_; }

    void ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init2();
    static int FILL_PARENT();
};
// }

}}}} // ::g::Android::android::view
