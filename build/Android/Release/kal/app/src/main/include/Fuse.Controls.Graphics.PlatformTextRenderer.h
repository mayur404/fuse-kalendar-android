// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PlatformTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// internal static class PlatformTextRenderer :252
// {
uClassType* PlatformTextRenderer_typeof();
void PlatformTextRenderer__CreateDefault_fn(::g::Fuse::Controls::TextControl* Control, uObject** __retval);

struct PlatformTextRenderer : uObject
{
    static uSStrong<uDelegate*> Factory_;
    static uSStrong<uDelegate*>& Factory() { return PlatformTextRenderer_typeof()->Init(), Factory_; }

    static uObject* CreateDefault(::g::Fuse::Controls::TextControl* Control);
};
// }

}}}} // ::g::Fuse::Controls::Graphics
