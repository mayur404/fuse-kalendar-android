// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/widget/$.uno#163'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern interface TextViewDLROnEditorActionListener :29085
// {
uInterfaceType* TextViewDLROnEditorActionListener_typeof();

struct TextViewDLROnEditorActionListener
{
    void(*fp_onEditorAction)(uObject*, ::g::Android::android::widget::TextView*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    static bool onEditorAction(const uInterface& __this, ::g::Android::android::widget::TextView* arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2) { bool __retval; return __this.VTable<TextViewDLROnEditorActionListener>()->fp_onEditorAction(__this, arg0, &arg1, arg2, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::widget
