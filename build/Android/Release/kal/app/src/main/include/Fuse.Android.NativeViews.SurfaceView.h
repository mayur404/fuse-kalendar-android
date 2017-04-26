// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/NativeViews/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.GraphicsView.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct SurfaceView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public sealed extern class SurfaceView :1084
// {
::g::Fuse::Android::NativeViews::GraphicsView_type* SurfaceView_typeof();
void SurfaceView__ctor_4_fn(SurfaceView* __this);
void SurfaceView__CreateGraphicsView_fn(SurfaceView* __this, ::g::Android::android::view::View** __retval);
void SurfaceView__New1_fn(SurfaceView** __retval);

struct SurfaceView : ::g::Fuse::Android::NativeViews::GraphicsView
{
    void ctor_4();
    static SurfaceView* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
