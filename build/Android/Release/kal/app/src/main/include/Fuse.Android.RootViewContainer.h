// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.RelativeLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Fuse{namespace Android{struct RootViewContainer;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class RootViewContainer :686
// {
::g::Android::android::view::ViewGroup_type* RootViewContainer_typeof();
void RootViewContainer__ctor_17_fn(RootViewContainer* __this, ::g::Android::android::content::Context* context);
void RootViewContainer__New13_fn(::g::Android::android::content::Context* context, RootViewContainer** __retval);
void RootViewContainer__onInterceptTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval);
void RootViewContainer__onTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval);
void RootViewContainer__get_RootNode_fn(RootViewContainer* __this, ::g::Fuse::Node** __retval);

struct RootViewContainer : ::g::Android::android::widget::RelativeLayout
{
    uStrong< ::g::Android::android::view::MotionEvent*> _currentEvent;
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }

    void ctor_17(::g::Android::android::content::Context* context);
    ::g::Fuse::Node* RootNode();
    static RootViewContainer* New13(::g::Android::android::content::Context* context);
};
// }

}}} // ::g::Fuse::Android
