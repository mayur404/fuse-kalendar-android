// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#95'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnFocusChangeListener :27297
// {
uInterfaceType* ViewDLROnFocusChangeListener_typeof();

struct ViewDLROnFocusChangeListener
{
    void(*fp_onFocusChange)(uObject*, ::g::Android::android::view::View*, bool*);
    static void onFocusChange(const uInterface& __this, ::g::Android::android::view::View* arg0, bool arg1) { __this.VTable<ViewDLROnFocusChangeListener>()->fp_onFocusChange(__this, arg0, &arg1); }
};
// }

}}}} // ::g::Android::android::view
