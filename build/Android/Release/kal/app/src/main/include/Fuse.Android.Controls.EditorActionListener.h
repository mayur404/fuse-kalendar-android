// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Controls/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct EditorActionListener;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class EditorActionListener :537
// {
struct EditorActionListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::TextViewDLROnEditorActionListener interface2;
};

EditorActionListener_type* EditorActionListener_typeof();
void EditorActionListener__ctor_5_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler);
void EditorActionListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval);
void EditorActionListener__AndroidandroidwidgetTextViewDLROnEditorActionListeneronEditorAction_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* v, int* actionId, ::g::Android::android::view::KeyEvent* ev, bool* __retval);
void EditorActionListener__Dispose1_fn(EditorActionListener* __this);
void EditorActionListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, EditorActionListener** __retval);

struct EditorActionListener : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::widget::TextView*> _textView;

    void ctor_5(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    void Dispose1();
    static uObject* AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    static EditorActionListener* New5(::g::Android::android::widget::TextView* textView, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Android::Controls
