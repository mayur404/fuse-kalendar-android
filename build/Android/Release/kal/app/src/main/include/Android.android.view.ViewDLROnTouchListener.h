// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#102'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnTouchListener :27416
// {
uInterfaceType* ViewDLROnTouchListener_typeof();

struct ViewDLROnTouchListener
{
    void(*fp_onTouch)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    static bool onTouch(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1) { bool __retval; return __this.VTable<ViewDLROnTouchListener>()->fp_onTouch(__this, arg0, arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
