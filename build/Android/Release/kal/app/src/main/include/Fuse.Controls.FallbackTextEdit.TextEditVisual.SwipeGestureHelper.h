// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__DegreeSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__SwipeGestureHelper;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// private sealed class TextEditVisual.SwipeGestureHelper :734
// {
uType* TextEditVisual__SwipeGestureHelper_typeof();
void TextEditVisual__SwipeGestureHelper__ctor__fn(TextEditVisual__SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans);
void TextEditVisual__SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, TextEditVisual__SwipeGestureHelper** __retval);

struct TextEditVisual__SwipeGestureHelper : uObject
{
    float _lengthThreshold;
    uStrong<uArray*> _spans;

    void ctor_(float lengthThreshold, uArray* spans);
    static TextEditVisual__SwipeGestureHelper* New1(float lengthThreshold, uArray* spans);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
