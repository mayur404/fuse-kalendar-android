// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnFocusChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{struct FocusChangedListener;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class FocusChangedListener :200
// {
struct FocusChangedListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnFocusChangeListener interface2;
};

FocusChangedListener_type* FocusChangedListener_typeof();
void FocusChangedListener__ctor_5_fn(FocusChangedListener* __this, ::g::Android::android::view::View* view, uDelegate* handler);
void FocusChangedListener__AddHandler_fn(::g::Android::android::view::View* view, uDelegate* handler, uObject** __retval);
void FocusChangedListener__AndroidandroidviewViewDLROnFocusChangeListeneronFocusChange_fn(FocusChangedListener* __this, ::g::Android::android::view::View* v, bool* hasFocus);
void FocusChangedListener__New5_fn(::g::Android::android::view::View* view, uDelegate* handler, FocusChangedListener** __retval);
void FocusChangedListener__UnoIDisposableDispose1_fn(FocusChangedListener* __this);

struct FocusChangedListener : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::view::View*> _view;

    void ctor_5(::g::Android::android::view::View* view, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::view::View* view, uDelegate* handler);
    static FocusChangedListener* New5(::g::Android::android::view::View* view, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Android
