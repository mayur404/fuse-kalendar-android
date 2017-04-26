// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Android{namespace Internal{struct StaticLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace Internal{struct TextPaint;}}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class TextControlLayout :954
// {
uType* TextControlLayout_typeof();
void TextControlLayout__ctor__fn(TextControlLayout* __this);
void TextControlLayout__Dispose_fn(TextControlLayout* __this);
void TextControlLayout__Invalidate_fn(TextControlLayout* __this);
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::Internal::StaticLayout** __retval);
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::Internal::StaticLayout* value);
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval);
void TextControlLayout__New1_fn(TextControlLayout** __retval);
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval);
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value);
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval);
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* paint);

struct TextControlLayout : uObject
{
    bool _cacheMin;
    bool _cacheValid;
    float _cacheWrapWidthPoints;
    uStrong< ::g::Fuse::Android::Internal::StaticLayout*> _Layout;
    ::g::Uno::Recti _PixelBounds;

    void ctor_();
    void Dispose();
    void Invalidate();
    ::g::Fuse::Android::Internal::StaticLayout* Layout();
    void Layout(::g::Fuse::Android::Internal::StaticLayout* value);
    bool Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* Paint, float wrapWidthPoints, bool useMin);
    ::g::Uno::Recti PixelBounds();
    void PixelBounds(::g::Uno::Recti value);
    int TextAlignmentToAndroidLayoutAlignment(int textAlignment);
    void UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* paint);
    static TextControlLayout* New1();
};
// }

}}} // ::g::Fuse::Android
