// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__DegreeSpan;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// private sealed class TextEditVisual.DegreeSpan :710
// {
uType* TextEditVisual__DegreeSpan_typeof();
void TextEditVisual__DegreeSpan__ctor__fn(TextEditVisual__DegreeSpan* __this, float* a, float* b);
void TextEditVisual__DegreeSpan__New1_fn(float* a, float* b, TextEditVisual__DegreeSpan** __retval);

struct TextEditVisual__DegreeSpan : uObject
{
    float _a;
    float _b;

    void ctor_(float a, float b);
    static TextEditVisual__DegreeSpan* New1(float a, float b);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
