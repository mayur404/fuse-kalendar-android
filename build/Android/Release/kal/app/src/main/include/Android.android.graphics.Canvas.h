// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/graphics/$.uno#30'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Canvas :3832
// {
::g::Android::java::lang::Object_type* Canvas_typeof();
void Canvas__ctor_6_fn(Canvas* __this, ::g::Android::android::graphics::Bitmap* arg0);
void Canvas___Init2_fn();
void Canvas__New6_fn(::g::Android::android::graphics::Bitmap* arg0, Canvas** __retval);

struct Canvas : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID Canvas_6577_ID_c_;
    static jmethodID& Canvas_6577_ID_c() { return Canvas_6577_ID_c_; }

    void ctor_6(::g::Android::android::graphics::Bitmap* arg0);
    static void _Init2();
    static Canvas* New6(::g::Android::android::graphics::Bitmap* arg0);
};
// }

}}}} // ::g::Android::android::graphics
