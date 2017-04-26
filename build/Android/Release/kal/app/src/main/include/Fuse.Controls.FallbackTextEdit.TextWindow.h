// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextWindow;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class TextWindow :1738
// {
::g::Fuse::Elements::Element_type* TextWindow_typeof();
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Uno::Rect* __retval);
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc);
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc);

struct TextWindow : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCache*> _lineCache;
    int _maxTextLength;
    ::g::Uno::Float2 _offset;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextSpan*> _selection;
    ::g::Uno::Float4 _selectionColor;
    int _textAlignment;
    ::g::Uno::Float2 _textBoundsSize;
    ::g::Uno::Float4 _textColor;
    uStrong< ::g::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;

    void Draw1(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit