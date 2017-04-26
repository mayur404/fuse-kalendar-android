// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Internal/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct RectExtensions;}}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal static class RectExtensions :216
// {
uClassType* RectExtensions_typeof();
void RectExtensions__MoveRectInsideRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);
void RectExtensions__MoveRectToContainRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);

struct RectExtensions : uObject
{
    static ::g::Uno::Rect MoveRectInsideRect(::g::Uno::Rect a, ::g::Uno::Rect b);
    static ::g::Uno::Rect MoveRectToContainRect(::g::Uno::Rect a, ::g::Uno::Rect b);
};
// }

}}}} // ::g::Fuse::Controls::Internal
