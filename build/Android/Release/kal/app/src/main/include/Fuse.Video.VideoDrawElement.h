// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Video{struct VideoDrawElement;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class VideoDrawElement :782
// {
uType* VideoDrawElement_typeof();
void VideoDrawElement__ctor__fn(VideoDrawElement* __this);
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex);
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this);
void VideoDrawElement__New1_fn(VideoDrawElement** __retval);

struct VideoDrawElement : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5ede1af2;
    ::g::Uno::Float4x4 Draw_LocalTransform_5ede1af2_3_8_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_5ede1af2_3_8_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_5ede1af2_6_2_1;
    static uSStrong<VideoDrawElement*> Impl_;
    static uSStrong<VideoDrawElement*>& Impl() { return VideoDrawElement_typeof()->Init(), Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex);
    void init_DrawCalls();
    static VideoDrawElement* New1();
};
// }

}}} // ::g::Fuse::Video
