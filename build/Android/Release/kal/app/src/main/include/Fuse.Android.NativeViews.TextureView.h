// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/NativeViews/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.GraphicsView.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct TextureView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public sealed extern class TextureView :1148
// {
::g::Fuse::Android::NativeViews::GraphicsView_type* TextureView_typeof();
void TextureView__ctor_4_fn(TextureView* __this);
void TextureView__CreateGraphicsView_fn(TextureView* __this, ::g::Android::android::view::View** __retval);
void TextureView__New1_fn(TextureView** __retval);

struct TextureView : ::g::Fuse::Android::NativeViews::GraphicsView
{
    void ctor_4();
    static TextureView* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews