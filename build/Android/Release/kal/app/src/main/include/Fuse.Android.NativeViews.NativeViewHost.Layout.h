// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/NativeViews/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.RelativeLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeViewHost__Layout;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// private sealed class NativeViewHost.Layout :579
// {
::g::Android::android::view::ViewGroup_type* NativeViewHost__Layout_typeof();
void NativeViewHost__Layout__ctor_17_fn(NativeViewHost__Layout* __this, uDelegate* inv);
void NativeViewHost__Layout__invalidate_fn(NativeViewHost__Layout* __this);
void NativeViewHost__Layout__New13_fn(uDelegate* inv, NativeViewHost__Layout** __retval);

struct NativeViewHost__Layout : ::g::Android::android::widget::RelativeLayout
{
    uStrong<uDelegate*> _invalidate;

    void ctor_17(uDelegate* inv);
    static NativeViewHost__Layout* New13(uDelegate* inv);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
