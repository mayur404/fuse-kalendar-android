// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FallbackTextEdit.LineCache.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheLine.h>
#include <Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheTransform.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h>
#include <Fuse.Controls.FallbackTextEdit.TextPosition.h>
#include <Fuse.Controls.FallbackTextEdit.TextSpan.h>
#include <Fuse.Controls.FallbackTextEdit.TextWindow.h>
#include <Fuse.Controls.FallbackTextEdit.VisualTextTransform.h>
#include <Fuse.Controls.Graphics.TextRenderer.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <Fuse.Controls.Internal.RectExtensions.h>
#include <Fuse.Controls.Internal.WordWrapInfo.h>
#include <Fuse.Controls.Internal.WordWrapper.h>
#include <Fuse.Controls.Internal.WrappedLine.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Internal.ElementDraw.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[3];
static uType* TYPES[45];

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3
// ----------------------------------------------------------------------------

// private sealed class TextEditVisual.DegreeSpan :710
// {
uType* TextEditVisual__DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEditVisual__DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan, _b), 0);
    return type;
}

// public DegreeSpan(float a, float b) :714
void TextEditVisual__DegreeSpan__ctor__fn(TextEditVisual__DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public DegreeSpan New(float a, float b) :714
void TextEditVisual__DegreeSpan__New1_fn(float* a, float* b, TextEditVisual__DegreeSpan** __retval)
{
    *__retval = TextEditVisual__DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :714
void TextEditVisual__DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public DegreeSpan New(float a, float b) [static] :714
TextEditVisual__DegreeSpan* TextEditVisual__DegreeSpan::New1(float a, float b)
{
    TextEditVisual__DegreeSpan* obj1 = (TextEditVisual__DegreeSpan*)uNew(TextEditVisual__DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#2
// ----------------------------------------------------------------------------

// internal sealed class LineCache :222
// {
uType* LineCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LineCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCache", options);
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof();
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[8] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[15] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[16] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _invalideLayout), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isTextValid), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof()), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _lines), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _onTextChanged), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _text), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _transform), 0);
    return type;
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) :656
void LineCache__DecomposeLines_fn(LineCache* __this, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->DecomposeLines(text);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) :364
void LineCache__DeleteSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->DeleteSpan(s);
}

// public float2 GetBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :559
void LineCache__GetBoundsSize_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetBoundsSize(wrapInfo);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() :611
void LineCache__GetFullTextSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan** __retval)
{
    *__retval = __this->GetFullTextSpan();
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() :606
void LineCache__GetLastTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->GetLastTextPos();
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) :304
void LineCache__InsertChar_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar* c, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->InsertChar(p, *c);
}

// private void InvalidateLayout() :650
void LineCache__InvalidateLayout_fn(LineCache* __this)
{
    __this->InvalidateLayout();
}

// private void InvalidateText([bool noChange]) :641
void LineCache__InvalidateText_fn(LineCache* __this, bool* noChange)
{
    __this->InvalidateText(*noChange);
}

// public void InvalidateVisual() :635
void LineCache__InvalidateVisual_fn(LineCache* __this)
{
    __this->InvalidateVisual();
}

// public bool get_IsMultiline() :268
void LineCache__get_IsMultiline_fn(LineCache* __this, bool* __retval)
{
    *__retval = __this->IsMultiline();
}

// public void set_IsMultiline(bool value) :269
void LineCache__set_IsMultiline_fn(LineCache* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() :227
void LineCache__get_Lines_fn(LineCache* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Lines();
}

// public string get_Text() :240
void LineCache__get_Text_fn(LineCache* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :253
void LineCache__set_Text_fn(LineCache* __this, uString* value)
{
    __this->Text(value);
}

// public float2 TextPosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :595
void LineCache__TextPosToBounds_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextPosToBounds(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :283
void LineCache__get_Transform_fn(LineCache* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :284
void LineCache__set_Transform_fn(LineCache* __this, uObject* value)
{
    __this->Transform(value);
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) [instance] :656
::g::Uno::Collections::List* LineCache::DecomposeLines(uString* text)
{
    uArray* array7;
    int index8;
    int length9;
    ::g::Uno::Collections::List* lines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/]);

    if (::g::Uno::String::op_Inequality(text, NULL))
    {
        if (IsMultiline())

            for (array7 = ::g::Uno::String::Split(uPtr(text), uArray::Init<int>(::TYPES[1/*char[]*/], 1, 10)), index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
            {
                uString* line = uPtr(array7)->Strong<uString*>(index8);
                ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(line, _transform));
            }
        else
            ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(text, _transform));
    }

    if (lines->Count() == 0)
        ::g::Uno::Collections::List__Add_fn(lines, ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(::g::Uno::String::Empty(), _transform));

    return lines;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) [instance] :364
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::DeleteSpan(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret13;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret14;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret15;

    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(s, GetFullTextSpan()))
        Text(::STRINGS[0/*""*/]);
    else

        for (int i = uPtr(Lines())->Count() - 1; i >= 0; i--)
        {
            ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret13), ret13);
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* lineSpan = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, 0), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(uPtr(line)->Text())->Length()));
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(lineSpan, s);

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, NULL))
                continue;

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, lineSpan))
                uPtr(Lines())->RemoveAt(i);
            else
            {
                uString* text = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret14), ret14))->Text();
                uString* start = ::g::Uno::String::Substring1(uPtr(text), 0, uPtr(uPtr(intersection)->Start)->Char);
                uString* end = ::g::Uno::String::Substring1(text, uPtr(intersection->End)->Char, text->Length() - uPtr(intersection->End)->Char);
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret15), ret15))->Text(::g::Uno::String::op_Addition2(start, end));
            }
        }

    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(::g::Uno::Math::Min8(uPtr(uPtr(s)->Start)->Line, uPtr(Lines())->Count() - 1), uPtr(uPtr(s)->Start)->Char);
}

// public float2 GetBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :559
::g::Uno::Float2 LineCache::GetBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    uArray* array3;
    int index4;
    int length5;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret17;
    float maxWidth = 0.0f;
    float height = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret17), ret17); enum2.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum2.Current(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);

        for (array3 = uPtr(line)->GetWrappedLines(wrapInfo), index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(array3)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index4);
            maxWidth = ::g::Uno::Math::Max1(maxWidth, uPtr(wrappedLine)->LineWidth);
            height = height + uPtr(wrapInfo)->LineHeight;
        }
    }

    return ::g::Uno::Float2__New2(maxWidth, height);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() [instance] :611
::g::Fuse::Controls::FallbackTextEdit::TextSpan* LineCache::GetFullTextSpan()
{
    return ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default(), GetLastTextPos());
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() [instance] :606
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::GetLastTextPos()
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret18;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(Lines())->Count() - 1, uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(Lines())->Count() - 1), &ret18), ret18))->Text())->Length());
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) [instance] :304
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::InsertChar(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar c)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret21;
    uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret21), ret21))->InsertChar(uPtr(p)->Char, c);
    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, p->Char + 1);
}

// private void InvalidateLayout() [instance] :650
void LineCache::InvalidateLayout()
{
    if (::g::Uno::Delegate::op_Inequality(_invalideLayout, NULL))
        uPtr(_invalideLayout)->InvokeVoid();
}

// private void InvalidateText([bool noChange]) [instance] :641
void LineCache::InvalidateText(bool noChange)
{
    _text = NULL;
    _isTextValid = false;

    if (!noChange && ::g::Uno::Delegate::op_Inequality(_onTextChanged, NULL))
        uPtr(_onTextChanged)->InvokeVoid();

    InvalidateLayout();
}

// public void InvalidateVisual() [instance] :635
void LineCache::InvalidateVisual()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret23;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret23), ret23); enum6.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum6.Current(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Invalidate();
    }

    InvalidateLayout();
}

// public bool get_IsMultiline() [instance] :268
bool LineCache::IsMultiline()
{
    return _isMultiline;
}

// public void set_IsMultiline(bool value) [instance] :269
void LineCache::IsMultiline(bool value)
{
    if (value == _isMultiline)
        return;

    _isMultiline = value;
    _lines = NULL;
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() [instance] :227
::g::Uno::Collections::List* LineCache::Lines()
{
    if (_lines == NULL)
        _lines = DecomposeLines(_text);

    return _lines;
}

// public string get_Text() [instance] :240
uString* LineCache::Text()
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret37;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret38;

    if (!_isTextValid)
    {
        _text = uPtr((::g::Uno::Collections::EnumerableExtensions__First_fn(::TYPES[15/*Uno.Collections.EnumerableExtensions.First<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/], (uObject*)Lines(), &ret37), ret37))->Text();

        for (int i = 1; i < uPtr(Lines())->Count(); i++)
            _text = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(_text, ::STRINGS[1/*"\n"*/]), uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret38), ret38))->Text());

        _isTextValid = true;
    }

    return _text;
}

// public void set_Text(string value) [instance] :253
void LineCache::Text(uString* value)
{
    if (::g::Uno::String::op_Equality(value, Text()))
        return;

    _text = value;
    _isTextValid = true;
    _lines = NULL;
}

// public float2 TextPosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :595
::g::Uno::Float2 LineCache::TextPosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret24;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret25;
    float startY = 0.0f;

    for (int i = 0; i < uPtr(p)->Line; i++)
        startY = startY + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret24), ret24))->GetTotalHeight(wrapInfo);

    ::g::Uno::Float2 linePos = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret25), ret25))->PosToBounds(wrapInfo, textAlignment, boundsWidth, uPtr(p)->Char);
    return ::g::Uno::Float2__New2(linePos.X, startY + linePos.Y);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :283
uObject* LineCache::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :284
void LineCache::Transform(uObject* value)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret39;
    _transform = value;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret39), ret39); enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum1.Current(::TYPES[7/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Transform(_transform);
    }

    InvalidateText(true);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno
// --------------------------------------------------------------------------

// internal sealed class LineCacheLine :12
// {
uType* LineCacheLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LineCacheLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCacheLine", options);
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _text), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _transform), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wordWrapInfoCache), 0,
        ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wrappedLinesCache), 0);
    return type;
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :68
void LineCacheLine__ctor__fn(LineCacheLine* __this, uString* text, uObject* transform)
{
    __this->ctor_(text, transform);
}

// public float GetTotalHeight(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :119
void LineCacheLine__GetTotalHeight_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* __retval)
{
    *__retval = __this->GetTotalHeight(wrapInfo);
}

// public Fuse.Controls.Internal.WrappedLine[] GetWrappedLines(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :52
void LineCacheLine__GetWrappedLines_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uArray** __retval)
{
    *__retval = __this->GetWrappedLines(wrapInfo);
}

// public void InsertChar(int p, char c) :74
void LineCacheLine__InsertChar_fn(LineCacheLine* __this, int* p, uChar* c)
{
    __this->InsertChar(*p, *c);
}

// public void Invalidate() :159
void LineCacheLine__Invalidate_fn(LineCacheLine* __this)
{
    __this->Invalidate();
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :68
void LineCacheLine__New1_fn(uString* text, uObject* transform, LineCacheLine** __retval)
{
    *__retval = LineCacheLine::New1(text, transform);
}

// public float2 PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, int p) :110
void LineCacheLine__PosToBounds_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, int* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PosToBounds(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Fuse.Controls.Internal.WrappedLine PosToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) :145
void LineCacheLine__PosToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, ::g::Fuse::Controls::Internal::WrappedLine** __retval)
{
    *__retval = __this->PosToWrappedLine(wrapInfo, *p);
}

// public string get_Text() :17
void LineCacheLine__get_Text_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :18
void LineCacheLine__set_Text_fn(LineCacheLine* __this, uString* value)
{
    __this->Text(value);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :31
void LineCacheLine__get_Transform_fn(LineCacheLine* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :32
void LineCacheLine__set_Transform_fn(LineCacheLine* __this, uObject* value)
{
    __this->Transform(value);
}

// public string get_VisualText() :41
void LineCacheLine__get_VisualText_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->VisualText();
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [instance] :68
void LineCacheLine::ctor_(uString* text, uObject* transform)
{
    _text = text;
    _transform = transform;
}

// public float GetTotalHeight(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :119
float LineCacheLine::GetTotalHeight(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    uArray* wrappedLines = GetWrappedLines(wrapInfo);
    return (float)uPtr(wrappedLines)->Length() * uPtr(wrapInfo)->LineHeight;
}

// public Fuse.Controls.Internal.WrappedLine[] GetWrappedLines(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :52
uArray* LineCacheLine::GetWrappedLines(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    if (((_wrappedLinesCache == NULL) || (_wordWrapInfoCache == NULL)) || !uPtr(_wordWrapInfoCache)->Equals(wrapInfo))
    {
        _wrappedLinesCache = ((uPtr(wrapInfo)->IsEnabled && (uPtr(Text())->Length() > 0)) ? (uArray*)::g::Fuse::Controls::Internal::WordWrapper::WrapLine(wrapInfo, VisualText()) : uArray::Init< ::g::Fuse::Controls::Internal::WrappedLine*>(::TYPES[8/*Fuse.Controls.Internal.WrappedLine[]*/], 1, (::g::Fuse::Controls::Internal::WrappedLine*)::g::Fuse::Controls::Internal::WrappedLine::New1(VisualText(), 0, 0.0f, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, VisualText()).X)));
        _wordWrapInfoCache = wrapInfo;
    }

    return _wrappedLinesCache;
}

// public void InsertChar(int p, char c) [instance] :74
void LineCacheLine::InsertChar(int p, uChar c)
{
    Text((p < uPtr(Text())->Length()) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::Substring1(uPtr(Text()), 0, p), uBox<uChar>(::g::Uno::Char_typeof(), c)), ::g::Uno::String::Substring(uPtr(Text()), p)) : (uString*)::g::Uno::String::op_Addition1(Text(), uBox<uChar>(::g::Uno::Char_typeof(), c)));
}

// public void Invalidate() [instance] :159
void LineCacheLine::Invalidate()
{
    _wrappedLinesCache = NULL;
}

// public float2 PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, int p) [instance] :110
::g::Uno::Float2 LineCacheLine::PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p)
{
    ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = PosToWrappedLine(wrapInfo, p);
    float xOffset = uPtr(wrappedLine)->GetXOffset(textAlignment, boundsWidth, uPtr(wrapInfo)->AbsoluteZoom);
    float yOffset = wrappedLine->YOffset;
    return ::g::Uno::Float2__New2(xOffset + wrappedLine->PosToBounds(wrapInfo, p - wrappedLine->LineTextStartOffset), yOffset);
}

// private Fuse.Controls.Internal.WrappedLine PosToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) [instance] :145
::g::Fuse::Controls::Internal::WrappedLine* LineCacheLine::PosToWrappedLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    uArray* wrappedLines = GetWrappedLines(wrapInfo);

    for (int i = 0; i < (uPtr(wrappedLines)->Length() - 1); i++)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(i);

        if ((p >= uPtr(wrappedLine)->LineTextStartOffset) && (p < uPtr(wrappedLine)->LineTextEndOffset()))
            return wrappedLine;
    }

    return uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(uPtr(wrappedLines)->Length() - 1);
}

// public string get_Text() [instance] :17
uString* LineCacheLine::Text()
{
    return _text;
}

// public void set_Text(string value) [instance] :18
void LineCacheLine::Text(uString* value)
{
    if (::g::Uno::String::op_Equality(value, _text))
        return;

    _text = value;
    Invalidate();
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :31
uObject* LineCacheLine::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :32
void LineCacheLine::Transform(uObject* value)
{
    _transform = value;
    Invalidate();
}

// public string get_VisualText() [instance] :41
uString* LineCacheLine::VisualText()
{
    if (_transform != NULL)
        return ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform::Transform(uInterface(uPtr(_transform), ::TYPES[42/*Fuse.Controls.FallbackTextEdit.LineCacheTransform*/]), _text);

    return _text;
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [static] :68
LineCacheLine* LineCacheLine::New1(uString* text, uObject* transform)
{
    LineCacheLine* obj1 = (LineCacheLine*)uNew(LineCacheLine_typeof());
    obj1->ctor_(text, transform);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#1
// ----------------------------------------------------------------------------

// internal sealed class LineCachePasswordTransform :183
// {
LineCachePasswordTransform_type* LineCachePasswordTransform_typeof()
{
    static uSStrong<LineCachePasswordTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LineCachePasswordTransform);
    options.TypeSize = sizeof(LineCachePasswordTransform_type);
    type = (LineCachePasswordTransform_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform", options);
    type->fp_ctor_ = (void*)LineCachePasswordTransform__New1_fn;
    type->interface0.fp_Transform = (void(*)(uObject*, uString*, uString**))LineCachePasswordTransform__Transform_fn;
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(LineCachePasswordTransform_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform, _reveal), 0);
    return type;
}

// public generated LineCachePasswordTransform() :183
void LineCachePasswordTransform__ctor__fn(LineCachePasswordTransform* __this)
{
    __this->ctor_();
}

// public generated LineCachePasswordTransform New() :183
void LineCachePasswordTransform__New1_fn(LineCachePasswordTransform** __retval)
{
    *__retval = LineCachePasswordTransform::New1();
}

// public bool SetReveal(int r) :186
void LineCachePasswordTransform__SetReveal_fn(LineCachePasswordTransform* __this, int* r, bool* __retval)
{
    *__retval = __this->SetReveal(*r);
}

// public string Transform(string text) :193
void LineCachePasswordTransform__Transform_fn(LineCachePasswordTransform* __this, uString* text, uString** __retval)
{
    *__retval = __this->Transform(text);
}

// public generated LineCachePasswordTransform() [instance] :183
void LineCachePasswordTransform::ctor_()
{
    _reveal = -1;
}

// public bool SetReveal(int r) [instance] :186
bool LineCachePasswordTransform::SetReveal(int r)
{
    bool b = r != _reveal;
    _reveal = r;
    return b;
}

// public string Transform(string text) [instance] :193
uString* LineCachePasswordTransform::Transform(uString* text)
{
    if (::g::Uno::String::IsNullOrEmpty(text))
        return text;

    uChar replacement = 8226;
    uArray* buffer = uArray::New(::TYPES[1/*char[]*/], uPtr(text)->Length());

    for (int i = 0; i < buffer->Length(); ++i)
        buffer->Item<uChar>(i) = replacement;

    if (_reveal != -1)
        buffer->Item<uChar>(_reveal) = text->Item(_reveal);

    return uString::CharArray(buffer);
}

// public generated LineCachePasswordTransform New() [static] :183
LineCachePasswordTransform* LineCachePasswordTransform::New1()
{
    LineCachePasswordTransform* obj1 = (LineCachePasswordTransform*)uNew(LineCachePasswordTransform_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#1
// ----------------------------------------------------------------------------

// internal abstract interface LineCacheTransform :178
// {
uInterfaceType* LineCacheTransform_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.FallbackTextEdit.LineCacheTransform", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3
// ----------------------------------------------------------------------------

// private sealed class TextEditVisual.SwipeGestureHelper :734
// {
uType* TextEditVisual__SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEditVisual__SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper, _spans), 0);
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) :738
void TextEditVisual__SwipeGestureHelper__ctor__fn(TextEditVisual__SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) :738
void TextEditVisual__SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, TextEditVisual__SwipeGestureHelper** __retval)
{
    *__retval = TextEditVisual__SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) [instance] :738
void TextEditVisual__SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) [static] :738
TextEditVisual__SwipeGestureHelper* TextEditVisual__SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    TextEditVisual__SwipeGestureHelper* obj1 = (TextEditVisual__SwipeGestureHelper*)uNew(TextEditVisual__SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3
// ----------------------------------------------------------------------------

// public sealed class TextEditVisual :702
// {
// static TextEditVisual() :702
static void TextEditVisual__cctor_1_fn(uType* __type)
{
    TextEditVisual::_horizontalGesture_ = TextEditVisual__SwipeGestureHelper::New1(15.0f, uArray::Init<TextEditVisual__DegreeSpan*>(::TYPES[19/*Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[]*/], 2, (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(45.0f, 135.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-45.0f, -135.0f)));
    TextEditVisual::_verticalGesture_ = TextEditVisual__SwipeGestureHelper::New1(15.0f, uArray::Init<TextEditVisual__DegreeSpan*>(::TYPES[19/*Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[]*/], 3, (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-45.0f, 45.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-135.0f, -180.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(135.0f, 180.0f)));
}

::g::Fuse::Controls::Graphics::ControlVisual_type* TextEditVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 73;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextEditVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_cctor_ = TextEditVisual__cctor_1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextEditVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextEditVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextEditVisual__GetMarginSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))TextEditVisual__GetSubNode_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextEditVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextEditVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))TextEditVisual__OnHitTest_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TextEditVisual__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TextEditVisual__OnUnrooted_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))TextEditVisual__get_SubNodeCount_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[2] = uString::Const("Font property was not set. Did you provide a custom style with no font?");
    ::TYPES[19] = TextEditVisual__DegreeSpan_typeof()->Array();
    ::TYPES[20] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[21] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof());
    ::TYPES[22] = ::g::Uno::EventHandler_typeof();
    ::TYPES[23] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[24] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[25] = ::g::Uno::Rect_typeof();
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[27] = ::g::Fuse::Time_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[29] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[30] = ::g::Uno::Float4_typeof();
    ::TYPES[31] = ::g::Fuse::Drawing::Primitives::Rectangle_typeof();
    ::TYPES[32] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[33] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[34] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[36] = ::g::Fuse::Input::TextEnteredArgs_typeof();
    ::TYPES[37] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof();
    ::TYPES[39] = ::g::Fuse::Input::TextService_typeof();
    ::TYPES[40] = ::g::Fuse::Input::TextEnteredHandler_typeof();
    ::TYPES[41] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[42] = ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(57,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretBlinkTime), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretBrush), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretPosition), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _interactionSelectionStartPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _isReadOnly), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _lineCache), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _passwordTransform), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _revealEnd), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _selection), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextWindow_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _textWindow), 0,
        ::g::Fuse::Controls::FallbackTextEdit::VisualTextTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _visualTextTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _windowPos), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _wrapInfo), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, RevealTime), 0,
        TextEditVisual__SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::_horizontalGesture_, uFieldFlagsStatic,
        TextEditVisual__SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::_verticalGesture_, uFieldFlagsStatic);
    return type;
}

// protected override sealed void Attach() :754
void TextEditVisual__Attach_fn(TextEditVisual* __this)
{
    ::g::Fuse::Controls::TextEdit* ret6;
    ::g::Fuse::Controls::TextEdit* ret7;
    ::g::Fuse::Controls::TextEdit* ret8;
    ::g::Fuse::Controls::TextEdit* ret9;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->add_ValueChanged(uDelegate::New(::TYPES[23/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextEditVisual__OnValueChanged_fn, __this));
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->UpdateValue(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->Value());
    uPtr(__this->_caretBrush)->Pin();
}

// private void BringCaretIntoView(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) :1069
void TextEditVisual__BringCaretIntoView_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth)
{
    __this->BringCaretIntoView(wrapInfo, *textBoundsWidth);
}

// private Fuse.Controls.Internal.WordWrapInfo CreateWrapInfo(float wrapWidth, bool haveWidth) :950
void TextEditVisual__CreateWrapInfo_fn(TextEditVisual* __this, float* wrapWidth, bool* haveWidth, ::g::Fuse::Controls::Internal::WordWrapInfo** __retval)
{
    *__retval = __this->CreateWrapInfo(*wrapWidth, *haveWidth);
}

// private void DeleteSelection() :1088
void TextEditVisual__DeleteSelection_fn(TextEditVisual* __this)
{
    __this->DeleteSelection();
}

// protected override sealed void Detach() :765
void TextEditVisual__Detach_fn(TextEditVisual* __this)
{
    ::g::Fuse::Controls::TextEdit* ret12;
    ::g::Fuse::Controls::TextEdit* ret13;
    ::g::Fuse::Controls::TextEdit* ret14;
    uPtr(__this->_caretBrush)->Unpin();
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->remove_ValueChanged(uDelegate::New(::TYPES[23/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextEditVisual__OnValueChanged_fn, __this));
}

// private void DrawCaret(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth, Fuse.DrawContext dc) :999
void TextEditVisual__DrawCaret_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Fuse::DrawContext* dc)
{
    __this->DrawCaret(wrapInfo, *textBoundsWidth, dc);
}

// private Uno.Rect GetCaretRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) :1080
void TextEditVisual__GetCaretRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetCaretRect(wrapInfo, *textBoundsWidth);
}

// private Uno.Rect GetClampedTextBoundsRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :1016
void TextEditVisual__GetClampedTextBoundsRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetClampedTextBoundsRect(wrapInfo);
}

// private float2 GetClampedTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :1021
void TextEditVisual__GetClampedTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetClampedTextBoundsSize(wrapInfo);
}

// private Fuse.Font GetFontOrThrow() :967
void TextEditVisual__GetFontOrThrow_fn(TextEditVisual* __this, ::g::Fuse::Font** __retval)
{
    *__retval = __this->GetFontOrThrow();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :936
void TextEditVisual__GetMarginSize_fn(TextEditVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::TextEdit* ret20;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20))->Font() == NULL)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    __this->_wrapInfo = __this->CreateWrapInfo(lp_.X(), lp_.HasX());
    ::g::Uno::Float2 r = ::g::Uno::Float2__op_Addition1(::g::Uno::Math::Ceil2(__this->GetTextBoundsSize(__this->_wrapInfo)), 1.0f);

    if (lp_.HasX())
        r.X = ::g::Uno::Math::Min1(r.X, lp_.X());

    return *__retval = r, void();
}

// public override sealed Fuse.Node GetSubNode(int index) :926
void TextEditVisual__GetSubNode_fn(TextEditVisual* __this, int* index, ::g::Fuse::Node** __retval)
{
    int ret21;
    int index_ = *index;
    ::g::Fuse::Node* ret22;
    int sc = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret21), ret21);

    if (index_ < sc)
        return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret22), ret22), void();

    return *__retval = __this->_textWindow, void();
}

// private float2 GetTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :1026
void TextEditVisual__GetTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetTextBoundsSize(wrapInfo);
}

// private bool get_IsWordWrapEnabled() :912
void TextEditVisual__get_IsWordWrapEnabled_fn(TextEditVisual* __this, bool* __retval)
{
    *__retval = __this->IsWordWrapEnabled();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :960
void TextEditVisual__OnArrangeMarginBox_fn(TextEditVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret23;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 sz = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret23), ret23);
    uPtr(__this->_textWindow)->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), ::g::Fuse::LayoutParams__Create(sz));
    return *__retval = sz, void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :974
void TextEditVisual__OnDraw_fn(TextEditVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::TextEdit* ret24;
    ::g::Fuse::Controls::TextEdit* ret25;
    ::g::Fuse::Controls::TextEdit* ret26;
    ::g::Fuse::Controls::TextEdit* ret27;
    ::g::Fuse::Controls::TextEdit* ret28;
    __this->GetFontOrThrow();

    if (__this->_wrapInfo == NULL)
        __this->_wrapInfo = __this->CreateWrapInfo(__this->ActualSize().X, true);

    ::g::Uno::Float2 textBoundsSize = __this->GetClampedTextBoundsSize(__this->_wrapInfo);
    float textBoundsWidth = textBoundsSize.X;
    __this->BringCaretIntoView(__this->_wrapInfo, textBoundsWidth);

    if (!::g::Uno::String::IsNullOrEmpty(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret24), ret24))->Value()))
        uPtr(__this->_textWindow)->Draw1(__this->_wrapInfo, __this->_selection, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->TextColor(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret26), ret26))->SelectionColor(), uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret27), ret27))->Value())->Length(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret28), ret28))->TextAlignment(), textBoundsSize, ::g::Uno::Float2__op_UnaryNegation(__this->_windowPos), dc);

    if (::g::Fuse::Input::Focus::IsWithin(__this))
    {
        __this->DrawCaret(__this->_wrapInfo, textBoundsWidth, dc);
        __this->InvalidateVisual();
    }
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1542
void TextEditVisual__OnHitTest_fn(TextEditVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// protected override sealed void OnRooted() :870
void TextEditVisual__OnRooted_fn(TextEditVisual* __this)
{
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TextEditVisual__Update_fn, __this), 0);
    ::g::Fuse::Controls::Graphics::ControlVisual__OnRooted_fn(__this);
}

// private void OnTextEntered(object sender, Fuse.Input.TextEnteredArgs args) :1259
void TextEditVisual__OnTextEntered_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    __this->OnTextEntered(sender, args);
}

// protected void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :774
void TextEditVisual__OnTextLayoutPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// protected void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :794
void TextEditVisual__OnTextRenderPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// protected override sealed void OnUnrooted() :876
void TextEditVisual__OnUnrooted_fn(TextEditVisual* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TextEditVisual__Update_fn, __this), 0);
    ::g::Fuse::Controls::Graphics::ControlVisual__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :830
void TextEditVisual__OnValueChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void ResetCaretBlink() :1053
void TextEditVisual__ResetCaretBlink_fn(TextEditVisual* __this)
{
    __this->ResetCaretBlink();
}

// private void SetWindowPos(float2 p) :1035
void TextEditVisual__SetWindowPos_fn(TextEditVisual* __this, ::g::Uno::Float2* p)
{
    __this->SetWindowPos(*p);
}

// public override sealed int get_SubNodeCount() :923
void TextEditVisual__get_SubNodeCount_fn(TextEditVisual* __this, int* __retval)
{
    int ret45;
    return *__retval = 1 + (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret45), ret45), void();
}

// private float2 TextBoundsToControl(float2 p) :1125
void TextEditVisual__TextBoundsToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextBoundsToControl(*p);
}

// private float2 TextBoundsToWindow(float2 p) :1115
void TextEditVisual__TextBoundsToWindow_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextBoundsToWindow(*p);
}

// private void Update() :882
void TextEditVisual__Update_fn(TextEditVisual* __this)
{
    __this->Update();
}

// private void UpdateValue(string value) :837
void TextEditVisual__UpdateValue_fn(TextEditVisual* __this, uString* value)
{
    __this->UpdateValue(value);
}

// private Fuse.Controls.FallbackTextEdit.VisualTextTransform get_VisualTextTransform() :813
void TextEditVisual__get_VisualTextTransform_fn(TextEditVisual* __this, int* __retval)
{
    *__retval = __this->VisualTextTransform();
}

// private void set_VisualTextTransform(Fuse.Controls.FallbackTextEdit.VisualTextTransform value) :814
void TextEditVisual__set_VisualTextTransform_fn(TextEditVisual* __this, int* value)
{
    __this->VisualTextTransform(*value);
}

// private float2 WindowToControl(float2 p) :1105
void TextEditVisual__WindowToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToControl(*p);
}

uSStrong<TextEditVisual__SwipeGestureHelper*> TextEditVisual::_horizontalGesture_;
uSStrong<TextEditVisual__SwipeGestureHelper*> TextEditVisual::_verticalGesture_;

// private void BringCaretIntoView(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) [instance] :1069
void TextEditVisual::BringCaretIntoView(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::g::Uno::Rect windowRect = ::g::Uno::Rect__New2(_windowPos, ActualSize());
    ::g::Uno::Rect caretRect = GetCaretRect(wrapInfo, textBoundsWidth);
    ::g::Uno::Rect textRect = GetClampedTextBoundsRect(wrapInfo);
    ::g::Uno::Rect caretVisibleRect = ::g::Fuse::Controls::Internal::RectExtensions::MoveRectToContainRect(windowRect, caretRect);
    ::g::Uno::Rect clampedRect = ::g::Fuse::Controls::Internal::RectExtensions::MoveRectInsideRect(caretVisibleRect, textRect);
    SetWindowPos(clampedRect.Position());
}

// private Fuse.Controls.Internal.WordWrapInfo CreateWrapInfo(float wrapWidth, bool haveWidth) [instance] :950
::g::Fuse::Controls::Internal::WordWrapInfo* TextEditVisual::CreateWrapInfo(float wrapWidth, bool haveWidth)
{
    ::g::Fuse::Controls::TextEdit* ret10;
    ::g::Fuse::Controls::TextEdit* ret11;
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* renderer = ::g::Fuse::Controls::Graphics::TextRenderer::GetTextRenderer(GetFontOrThrow());
    float fontSize = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10))->FontSize();
    return ::g::Fuse::Controls::Internal::WordWrapInfo::New1(renderer, haveWidth && IsWordWrapEnabled(), wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->LineSpacing(), AbsoluteZoom());
}

// private void DeleteSelection() [instance] :1088
void TextEditVisual::DeleteSelection()
{
    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(_selection, NULL))
        return;

    _caretPosition = uPtr(_lineCache)->DeleteSpan(_selection);
    _selection = NULL;
    _interactionSelectionStartPos = NULL;
}

// private void DrawCaret(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth, Fuse.DrawContext dc) [instance] :999
void TextEditVisual::DrawCaret(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind4;
    ::g::Fuse::Controls::TextEdit* ret15;
    ::g::Fuse::Controls::TextEdit* ret16;
    ::g::Uno::Rect caretRect = GetCaretRect(wrapInfo, textBoundsWidth);
    ::g::Uno::Float2 pos = TextBoundsToControl(caretRect.Position());
    float blink = (::g::Uno::Math::Cos1(((float)(::g::Fuse::Time::FrameTime() - _caretBlinkTime) * 2.0f) * 3.14159274f) * 0.5f) + 0.5f;
    blink = 1.0f - ::g::Uno::Math::Pow1(1.0f - blink, 4.3f);
    ::g::Uno::Float2 caretSize = ::g::Uno::Float2__New2(1.0f, caretRect.Size().Y);
    uPtr(_caretBrush)->Color(::g::Uno::Float4__New8((ind4 = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret15), ret15))->CaretColor(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret16), ret16))->CaretColor().W * blink));
    uPtr(_caretBrush)->Prepare(dc, caretSize);
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Fill(dc, this, caretSize, ::g::Uno::Float4__New1(0.0f), _caretBrush, pos, 1.0f);
}

// private Uno.Rect GetCaretRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) [instance] :1080
::g::Uno::Rect TextEditVisual::GetCaretRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::g::Fuse::Controls::TextEdit* ret17;
    ::g::Uno::Float2 pos = uPtr(_lineCache)->TextPosToBounds(wrapInfo, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret17), ret17))->TextAlignment(), textBoundsWidth, _caretPosition);
    float width = 2.0f;
    return ::g::Uno::Rect__New2(pos, ::g::Uno::Float2__New2(width, uPtr(wrapInfo)->LineHeight));
}

// private Uno.Rect GetClampedTextBoundsRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :1016
::g::Uno::Rect TextEditVisual::GetClampedTextBoundsRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), GetClampedTextBoundsSize(wrapInfo));
}

// private float2 GetClampedTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :1021
::g::Uno::Float2 TextEditVisual::GetClampedTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::g::Uno::Math::Max3(GetTextBoundsSize(wrapInfo), ActualSize());
}

// private Fuse.Font GetFontOrThrow() [instance] :967
::g::Fuse::Font* TextEditVisual::GetFontOrThrow()
{
    ::g::Fuse::Controls::TextEdit* ret18;
    ::g::Fuse::Controls::TextEdit* ret19;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret18), ret18))->Font() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Font proper...*/]));

    return uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret19), ret19))->Font();
}

// private float2 GetTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :1026
::g::Uno::Float2 TextEditVisual::GetTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return uPtr(_lineCache)->GetBoundsSize(wrapInfo);
}

// private bool get_IsWordWrapEnabled() [instance] :912
bool TextEditVisual::IsWordWrapEnabled()
{
    ::g::Fuse::Controls::TextEdit* ret44;
    return uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret44), ret44))->TextWrapping() == 1;
}

// private void OnTextEntered(object sender, Fuse.Input.TextEnteredArgs args) [instance] :1259
void TextEditVisual::OnTextEntered(uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    uString* array1;
    int index2;
    int length3;
    ::g::Fuse::Controls::TextEdit* ret35;
    ::g::Fuse::Controls::TextEdit* ret36;
    ::g::Fuse::Controls::TextEdit* ret37;
    DeleteSelection();
    uPtr(args)->IsHandled(true);

    if ((uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->MaxLength() != 0) && (uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->Value())->Length() >= uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->MaxLength()))
        return;

    for (array1 = args->Text(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uChar character = uPtr(array1)->Item(index2);

        if (((character == 10) || (character == 13)) || ((int)character < 32))
            continue;

        _caretPosition = uPtr(_lineCache)->InsertChar(_caretPosition, character);

        if (_passwordTransform != NULL)
        {
            uPtr(_passwordTransform)->SetReveal(uPtr(_caretPosition)->Char - 1);
            _revealEnd = (::g::Fuse::Time::FrameTime() + RevealTime);
        }

        float wrapWidth = ActualSize().X;
        ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = CreateWrapInfo(wrapWidth, true);
        float textBoundsWidth = GetClampedTextBoundsSize(wrapInfo).X;
        BringCaretIntoView(wrapInfo, textBoundsWidth);
        ResetCaretBlink();
    }
}

// protected void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :774
void TextEditVisual::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextEdit* ret38;
    ::g::Fuse::Controls::TextEdit* ret39;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38))->IsPassword())
        VisualTextTransform(1);
    else
        VisualTextTransform(0);

    uPtr(_lineCache)->IsMultiline(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39))->IsMultiline());

    if (::g::Fuse::Input::Focus::IsWithin(this))
        ;

    InvalidateLayout(2);
}

// protected void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :794
void TextEditVisual::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextEdit* ret40;
    ::g::Fuse::Controls::TextEdit* ret41;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40))->IsReadOnly() != _isReadOnly)
    {
        if (!_isReadOnly)
            ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::TextService::TextEntered()), this, uDelegate::New(::TYPES[40/*Fuse.Input.TextEnteredHandler*/], (void*)TextEditVisual__OnTextEntered_fn, this));

        _isReadOnly = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41))->IsReadOnly();

        if (!_isReadOnly)
            ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::TextService::TextEntered()), this, uDelegate::New(::TYPES[40/*Fuse.Input.TextEnteredHandler*/], (void*)TextEditVisual__OnTextEntered_fn, this));
    }

    InvalidateVisual();
    uPtr(_textWindow)->InvalidateVisual();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :830
void TextEditVisual::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uString* ret42;

    if (sender == this)
        return;

    UpdateValue((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret42), ret42));
}

// private void ResetCaretBlink() [instance] :1053
void TextEditVisual::ResetCaretBlink()
{
    _caretBlinkTime = ::g::Fuse::Time::FrameTime();
}

// private void SetWindowPos(float2 p) [instance] :1035
void TextEditVisual::SetWindowPos(::g::Uno::Float2 p)
{
    if (::g::Uno::Float2__op_Inequality(p, _windowPos))
        uPtr(_textWindow)->InvalidateVisual();

    _windowPos = p;
}

// private float2 TextBoundsToControl(float2 p) [instance] :1125
::g::Uno::Float2 TextEditVisual::TextBoundsToControl(::g::Uno::Float2 p)
{
    return WindowToControl(TextBoundsToWindow(p));
}

// private float2 TextBoundsToWindow(float2 p) [instance] :1115
::g::Uno::Float2 TextEditVisual::TextBoundsToWindow(::g::Uno::Float2 p)
{
    return ::g::Uno::Float2__op_Subtraction2(p, _windowPos);
}

// private void Update() [instance] :882
void TextEditVisual::Update()
{
    if (::g::Fuse::Input::Focus::IsWithin(this))
        InvalidateVisual();
    else if (_passwordTransform != NULL)
    {
        if (::g::Fuse::Time::FrameTime() > _revealEnd)
        {
            if (uPtr(_passwordTransform)->SetReveal(-1))
                uPtr(_lineCache)->InvalidateVisual();
        }
    }
}

// private void UpdateValue(string value) [instance] :837
void TextEditVisual::UpdateValue(uString* value)
{
    uPtr(_lineCache)->Text(value);
    uPtr(_textWindow)->InvalidateVisual();
    _caretPosition = (::g::Fuse::Input::Focus::IsWithin(this) ? (::g::Fuse::Controls::FallbackTextEdit::TextPosition*)uPtr(_lineCache)->GetLastTextPos() : (::g::Fuse::Controls::FallbackTextEdit::TextPosition*)::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(0, 0));
    _selection = NULL;
    InvalidateLayout(2);
    InvalidateVisual();
}

// private Fuse.Controls.FallbackTextEdit.VisualTextTransform get_VisualTextTransform() [instance] :813
int TextEditVisual::VisualTextTransform()
{
    return _visualTextTransform;
}

// private void set_VisualTextTransform(Fuse.Controls.FallbackTextEdit.VisualTextTransform value) [instance] :814
void TextEditVisual::VisualTextTransform(int value)
{
    if (value != _visualTextTransform)
    {
        _visualTextTransform = value;

        if (value == 1)
        {
            _passwordTransform = ::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform::New1();
            uPtr(_lineCache)->Transform((uObject*)_passwordTransform);
        }

        InvalidateVisual();
    }
}

// private float2 WindowToControl(float2 p) [instance] :1105
::g::Uno::Float2 TextEditVisual::WindowToControl(::g::Uno::Float2 p)
{
    return p;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#4
// ----------------------------------------------------------------------------

// internal sealed class TextPosition :1560
// {
// static TextPosition() :1560
static void TextPosition__cctor__fn(uType* __type)
{
    TextPosition::Default_ = TextPosition::New1(0, 0);
}

uType* TextPosition_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextPosition);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextPosition", options);
    type->fp_cctor_ = TextPosition__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextPosition__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextPosition__GetHashCode_fn;
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Char), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Line), 0,
        TextPosition_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default_, uFieldFlagsStatic);
    return type;
}

// public TextPosition(int l, int c) :1639
void TextPosition__ctor__fn(TextPosition* __this, int* l, int* c)
{
    __this->ctor_(*l, *c);
}

// public override sealed bool Equals(object obj) :1645
void TextPosition__Equals_fn(TextPosition* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, TextPosition_typeof()))
        return *__retval = false, void();

    TextPosition* other = uCast<TextPosition*>(obj, TextPosition_typeof());
    return *__retval = (__this->Line == uPtr(other)->Line) && (__this->Char == uPtr(other)->Char), void();
}

// public override sealed int GetHashCode() :1656
void TextPosition__GetHashCode_fn(TextPosition* __this, int* __retval)
{
    return *__retval = __this->Line ^ __this->Char, void();
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1632
void TextPosition__Max_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Max(a, b);
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1627
void TextPosition__Min_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Min(a, b);
}

// public TextPosition New(int l, int c) :1639
void TextPosition__New1_fn(int* l, int* c, TextPosition** __retval)
{
    *__retval = TextPosition::New1(*l, *c);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1564
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_Equality(a, b);
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1616
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_GreaterThanOrEqual(a, b);
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1594
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_LessThanOrEqual(a, b);
}

uSStrong<TextPosition*> TextPosition::Default_;

// public TextPosition(int l, int c) [instance] :1639
void TextPosition::ctor_(int l, int c)
{
    Line = l;
    Char = c;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1632
TextPosition* TextPosition::Max(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    return TextPosition::op_GreaterThanOrEqual(a, b) ? a : b;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1627
TextPosition* TextPosition::Min(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    return TextPosition::op_LessThanOrEqual(a, b) ? a : b;
}

// public TextPosition New(int l, int c) [static] :1639
TextPosition* TextPosition::New1(int l, int c)
{
    TextPosition* obj1 = (TextPosition*)uNew(TextPosition_typeof());
    obj1->ctor_(l, c);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1564
bool TextPosition::op_Equality(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1616
bool TextPosition::op_GreaterThanOrEqual(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line > uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line < uPtr(b)->Line)
        return false;

    return uPtr(a)->Char >= uPtr(b)->Char;
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1594
bool TextPosition::op_LessThanOrEqual(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line < uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line > uPtr(b)->Line)
        return false;

    return uPtr(a)->Char <= uPtr(b)->Char;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#4
// ----------------------------------------------------------------------------

// internal sealed class TextSpan :1662
// {
uType* TextSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextSpan", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextSpan__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextSpan__GetHashCode_fn;
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, End), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, Start), 0);
    return type;
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :1697
void TextSpan__ctor__fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    __this->ctor_(start, end);
}

// public override sealed bool Equals(object obj) :1704
void TextSpan__Equals_fn(TextSpan* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, TextSpan_typeof()))
        return *__retval = false, void();

    TextSpan* other = uCast<TextSpan*>(obj, TextSpan_typeof());
    return *__retval = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->Start, uPtr(other)->Start) && ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->End, uPtr(other)->End), void();
}

// public override sealed int GetHashCode() :1715
void TextSpan__GetHashCode_fn(TextSpan* __this, int* __retval)
{
    return *__retval = uPtr(__this->Start)->GetHashCode() ^ uPtr(__this->End)->GetHashCode(), void();
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1688
void TextSpan__Intersection_fn(TextSpan* a, TextSpan* b, TextSpan** __retval)
{
    *__retval = TextSpan::Intersection(a, b);
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1683
void TextSpan__Intersects_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::Intersects(a, b);
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :1697
void TextSpan__New1_fn(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end, TextSpan** __retval)
{
    *__retval = TextSpan::New1(start, end);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1664
void TextSpan__op_Equality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Equality(a, b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1678
void TextSpan__op_Inequality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Inequality(a, b);
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [instance] :1697
void TextSpan::ctor_(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    bool isValid = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(start, end);
    Start = (isValid ? start : end);
    End = (isValid ? end : start);
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1688
TextSpan* TextSpan::Intersection(TextSpan* a, TextSpan* b)
{
    return TextSpan::Intersects(a, b) ? (TextSpan*)TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Max(uPtr(a)->Start, uPtr(b)->Start), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::Min(uPtr(a)->End, uPtr(b)->End)) : NULL;
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1683
bool TextSpan::Intersects(TextSpan* a, TextSpan* b)
{
    return !(::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(uPtr(a)->End, uPtr(b)->Start) || ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThanOrEqual(uPtr(a)->Start, uPtr(b)->End));
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [static] :1697
TextSpan* TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    TextSpan* obj1 = (TextSpan*)uNew(TextSpan_typeof());
    obj1->ctor_(start, end);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1664
bool TextSpan::op_Equality(TextSpan* a, TextSpan* b)
{
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1678
bool TextSpan::op_Inequality(TextSpan* a, TextSpan* b)
{
    return !TextSpan::op_Equality(a, b);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#5
// ----------------------------------------------------------------------------

// internal sealed class TextWindow :1738
// {
::g::Fuse::Elements::Element_type* TextWindow_typeof()
{
    static uSStrong< ::g::Fuse::Elements::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 96;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(TextWindow);
    options.TypeSize = sizeof(::g::Fuse::Elements::Element_type);
    type = (::g::Fuse::Elements::Element_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.TextWindow", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))TextWindow__CalcRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))TextWindow__OnDraw_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    ::TYPES[43] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[38] = ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof();
    ::TYPES[44] = ::g::Fuse::Elements::Internal::ElementDraw_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface6));
    type->SetFields(87,
        ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _lineCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _offset), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selection), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selectionColor), 0,
        ::g::Fuse::Elements::TextAlignment_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textAlignment), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textBoundsSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textColor), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _wrapInfo), 0);
    return type;
}

// protected override sealed Uno.Rect CalcRenderBounds() :1761
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->_textBoundsSize), void();
}

// public void Draw(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Elements.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) :1766
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc)
{
    __this->Draw1(wrapInfo, selection, *textColor, *selectionColor, *maxTextLength, *textAlignment, *textBoundsSize, *offset, dc);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1783
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret2;
    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->BeginRendering(uPtr(__this->_wrapInfo)->FontSize, uPtr(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), __this->_textColor, __this->_maxTextLength);
    float lineHeight = uPtr(__this->_wrapInfo)->LineHeight * uPtr(__this->_wrapInfo)->AbsoluteZoom;
    ::g::Uno::Float2 scaledOffset = ::g::Uno::Float2__op_Multiply1(__this->_offset, uPtr(__this->_wrapInfo)->AbsoluteZoom);
    float y = 0.0f;
    float selectionY = 0.0f;

    for (int i = 0; i < uPtr(uPtr(__this->_lineCache)->Lines())->Count(); i++)
    {
        uArray* lines = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_lineCache)->Lines()), uCRef<int>(i), &ret2), ret2))->GetWrappedLines(__this->_wrapInfo);

        for (int j = 0; j < uPtr(lines)->Length(); ++j)
        {
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(lines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(j);
            float drawY = scaledOffset.Y + y;

            if (drawY >= (__this->ActualSize().Y * uPtr(__this->_wrapInfo)->AbsoluteZoom))
                break;
            else if (drawY >= -lineHeight)
            {
                float x = uPtr(wrappedLine)->GetXOffset(__this->_textAlignment, __this->_textBoundsSize.X, __this->AbsoluteZoom());

                if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(__this->_selection, NULL))
                {
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(wrappedLine)->LineTextStartOffset);
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, wrappedLine->LineTextEndOffset());
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* span = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(start, end);
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(span, __this->_selection);

                    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(intersection, NULL))
                    {
                        float startPos = uPtr(wrappedLine)->PosToBounds(__this->_wrapInfo, uPtr(uPtr(intersection)->Start)->Char - uPtr(wrappedLine)->LineTextStartOffset);
                        float endPos = (uPtr(intersection->End)->Char < wrappedLine->LineTextEndOffset()) ? wrappedLine->PosToBounds(__this->_wrapInfo, uPtr(intersection->End)->Char - wrappedLine->LineTextStartOffset) : wrappedLine->LineWidth;
                        uPtr(::g::Fuse::Elements::Internal::ElementDraw::Impl())->Rectangle(dc, __this, ::g::Uno::Math::Floor2(::g::Uno::Float2__New2((__this->_offset.X + x) + startPos, __this->_offset.Y + selectionY)), ::g::Uno::Float2__New2(endPos - startPos, uPtr(__this->_wrapInfo)->LineHeight), __this->_selectionColor);
                    }
                }

                uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, scaledOffset.X + (x * uPtr(__this->_wrapInfo)->AbsoluteZoom), drawY, wrappedLine->Text);
            }

            y = y + lineHeight;
            selectionY = selectionY + (lineHeight / uPtr(__this->_wrapInfo)->AbsoluteZoom);
        }
    }

    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public void Draw(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Elements.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) [instance] :1766
void TextWindow::Draw1(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc)
{
    if (::g::Uno::Float2__op_Inequality(_textBoundsSize, textBoundsSize))
        InvalidateRenderBounds();

    _wrapInfo = wrapInfo;
    _selection = selection;
    _textColor = textColor;
    _selectionColor = selectionColor;
    _maxTextLength = maxTextLength;
    _textAlignment = textAlignment;
    _textBoundsSize = textBoundsSize;
    _offset = offset;
    OnDraw(dc);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/FallbackTextEdit/$.uno#3
// ----------------------------------------------------------------------------

// internal enum VisualTextTransform :696
uEnumType* VisualTextTransform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FallbackTextEdit.VisualTextTransform", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Password", 1LL);
    return type;
}

}}}} // ::g::Fuse::Controls::FallbackTextEdit
