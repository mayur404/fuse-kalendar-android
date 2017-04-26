// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#42'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public sealed class RootViewport :5906
// {
struct RootViewport_type : ::g::Fuse::Node_type
{
    ::g::Fuse::IViewport interface2;
};

RootViewport_type* RootViewport_typeof();
void RootViewport__ctor_1_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* overridePixelsPerPoint);
void RootViewport__get_Content_fn(RootViewport* __this, ::g::Fuse::Node** __retval);
void RootViewport__set_Content_fn(RootViewport* __this, ::g::Fuse::Node* value);
void RootViewport__EstablishSize_fn(RootViewport* __this);
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this);
void RootViewport__GetSubNode_fn(RootViewport* __this, int* i, ::g::Fuse::Node** __retval);
void RootViewport__New1_fn(::g::Uno::Platform::Window* window, float* overridePixelsPerPoint, RootViewport** __retval);
void RootViewport__OnArrangeMarginBox_fn(RootViewport* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnHitTest_fn(RootViewport* __this, ::g::Fuse::HitTestContext* htc);
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a);
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval);
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_SubNodeCount_fn(RootViewport* __this, int* __retval);
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);

struct RootViewport : ::g::Fuse::Node
{
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    float _overridePixelsPerPoint;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerOSPoint;
    float _pixelsPerPoint;
    uStrong< ::g::Fuse::Node*> _root;
    bool _sizeOverridden;
    uStrong<uObject*> Frustum;
    uStrong< ::g::Uno::Platform::Window*> Window;
    uStrong<uDelegate*> Resized1;

    void ctor_1(::g::Uno::Platform::Window* window, float overridePixelsPerPoint);
    ::g::Fuse::Node* Content();
    void Content(::g::Fuse::Node* value);
    void EstablishSize();
    void EstablishSizeInternals();
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnResized(uObject* s, uObject* a);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    static RootViewport* New1(::g::Uno::Platform::Window* window, float overridePixelsPerPoint);
};
// }

}} // ::g::Fuse
