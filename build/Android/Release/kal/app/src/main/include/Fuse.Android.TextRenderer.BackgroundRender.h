// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Android{namespace Internal{struct StaticLayout;}}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer;}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer__BackgroundRender;}}}

namespace g{
namespace Fuse{
namespace Android{

// private sealed class TextRenderer.BackgroundRender :1210
// {
uType* TextRenderer__BackgroundRender_typeof();
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds);
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this);
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval);
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this);

struct TextRenderer__BackgroundRender : uObject
{
    uStrong< ::g::Fuse::Android::Internal::StaticLayout*> _layout;
    ::g::Uno::Recti _pixelBounds;
    ::g::Uno::Float4 _renderColor;
    uint32_t _result;
    uStrong< ::g::Fuse::Android::TextRenderer*> _textRenderer;
    uint64_t _textureVersion;

    void ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds);
    void DoneCallback();
    void UpdateTextureAsync();
    static TextRenderer__BackgroundRender* New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds);
};
// }

}}} // ::g::Fuse::Android
