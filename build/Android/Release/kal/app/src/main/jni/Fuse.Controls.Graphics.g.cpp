// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.ITextRenderer.h>
#include <Fuse.Controls.Graphics.PlatformTextRenderer.h>
#include <Fuse.Controls.Graphics.TextRenderer.h>
#include <Fuse.Controls.Graphics.TextRendererFactory.h>
#include <Fuse.Controls.Graphics.TextVisual.Factory.h>
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <Fuse.Controls.Internal.WordWrapInfo.h>
#include <Fuse.Controls.Internal.WordWrapper.h>
#include <Fuse.Controls.Internal.WrappedLine.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Fonts.FontFace.h>
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
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[2];
static uType* TYPES[28];

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno
// ------------------------------------------------------------------

// public abstract class ControlVisual<T> :6
// {
ControlVisual_type* ControlVisual_typeof()
{
    static uSStrong<ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ControlVisual);
    options.TypeSize = sizeof(ControlVisual_type);
    type = (ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.ControlVisual`1", options);
    type->SetBase(::g::Fuse::Controls::Graphics::Visual_typeof());
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))ControlVisual__get_HitTestLocalBounds_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ControlVisual_type, interface1));
    type->SetFields(56,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// protected generated ControlVisual() :6
void ControlVisual__ctor_2_fn(ControlVisual* __this)
{
    __this->ctor_2();
}

// protected T get_Control() :20
void ControlVisual__get_Control_fn(ControlVisual* __this, uTRef __retval)
{
    return __retval.Store(__this->_control()), void();
}

// private T FindControl() :8
void ControlVisual__FindControl_fn(ControlVisual* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->T(0),
    };
    ::g::Fuse::Node* p = __this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return __retval.Store(__types[0], uUnboxAny(__types[0], p)), void();

        p = uPtr(p)->Parent();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :46
void ControlVisual__get_HitTestLocalBounds_fn(ControlVisual* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override void OnRooted() :22
void ControlVisual__OnRooted_fn(ControlVisual* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_control() = (ControlVisual__FindControl_fn(__this, &ret1), ret1);

    if (uBoxPtr(__types[0], __this->_control()) == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[0/*" must be ro...*/]), __types[0])));

    __this->Attach();
}

// protected override void OnUnrooted() :33
void ControlVisual__OnUnrooted_fn(ControlVisual* __this)
{
    __this->Detach();
    __this->_control().Default();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected generated ControlVisual() [instance] :6
void ControlVisual::ctor_2()
{
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#4
// --------------------------------------------------------------------

// public sealed class TextVisual.Factory :448
// {
::g::Uno::UX::Factory_type* TextVisual__Factory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextVisual__Factory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Controls.Graphics.TextVisual.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_ctor_ = (void*)TextVisual__Factory__New2_fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))TextVisual__Factory__New1_fn;
    ::TYPES[1] = uObject_typeof();
    type->SetFields(2);
    return type;
}

// public Factory() :450
void TextVisual__Factory__ctor_1_fn(TextVisual__Factory* __this)
{
    __this->ctor_1();
}

// public override sealed object New() :451
void TextVisual__Factory__New1_fn(TextVisual__Factory* __this, uObject** __retval)
{
    return *__retval = ::g::Fuse::Controls::Graphics::TextVisual::New1(), void();
}

// public Factory New() :450
void TextVisual__Factory__New2_fn(TextVisual__Factory** __retval)
{
    *__retval = TextVisual__Factory::New2();
}

// public Factory() [instance] :450
void TextVisual__Factory::ctor_1()
{
    ctor_(NULL, false);
}

// public Factory New() [static] :450
TextVisual__Factory* TextVisual__Factory::New2()
{
    TextVisual__Factory* obj1 = (TextVisual__Factory*)uNew(TextVisual__Factory_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#3
// --------------------------------------------------------------------

// internal abstract interface ITextRenderer :240
// {
uInterfaceType* ITextRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Graphics.ITextRenderer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#3
// --------------------------------------------------------------------

// internal static class PlatformTextRenderer :252
// {
// static PlatformTextRenderer() :252
static void PlatformTextRenderer__cctor__fn(uType* __type)
{
    PlatformTextRenderer::Factory_ = uDelegate::New(::TYPES[3/*Fuse.Controls.Graphics.TextRendererFactory*/], (void*)PlatformTextRenderer__CreateDefault_fn);
}

uClassType* PlatformTextRenderer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Graphics.PlatformTextRenderer", options);
    type->fp_cctor_ = PlatformTextRenderer__cctor__fn;
    ::TYPES[3] = ::g::Fuse::Controls::Graphics::TextRendererFactory_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Graphics::ITextRenderer_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::Graphics::TextRendererFactory_typeof(), (uintptr_t)&::g::Fuse::Controls::Graphics::PlatformTextRenderer::Factory_, uFieldFlagsStatic);
    return type;
}

// private static Fuse.Controls.Graphics.ITextRenderer CreateDefault(Fuse.Controls.TextControl Control) :254
void PlatformTextRenderer__CreateDefault_fn(::g::Fuse::Controls::TextControl* Control, uObject** __retval)
{
    *__retval = PlatformTextRenderer::CreateDefault(Control);
}

uSStrong<uDelegate*> PlatformTextRenderer::Factory_;

// private static Fuse.Controls.Graphics.ITextRenderer CreateDefault(Fuse.Controls.TextControl Control) [static] :254
uObject* PlatformTextRenderer::CreateDefault(::g::Fuse::Controls::TextControl* Control)
{
    PlatformTextRenderer_typeof()->Init();
    return (uObject*)::g::Fuse::Controls::Graphics::TextRenderer::New1(Control);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#3
// --------------------------------------------------------------------

// internal sealed class TextRenderer :262
// {
// static TextRenderer() :262
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_textRenderers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[5/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.Internal.DefaultTextRenderer>*/]));
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Controls.Graphics.TextRenderer", options);
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Node*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    ::STRINGS[1] = uString::Const("");
    ::TYPES[5] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof());
    ::TYPES[6] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[14] = ::g::Uno::Rect_typeof();
    ::TYPES[15] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = ::g::Fuse::Font_typeof();
    ::TYPES[17] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[19] = ::g::Uno::String_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[21] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[22] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Graphics::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _cacheMin), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _cacheValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _size), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _textBounds), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _wrapInfo), 0,
        ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _wrappedLines), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, _wrapWidth), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextRenderer, Control), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof()), (uintptr_t)&::g::Fuse::Controls::Graphics::TextRenderer::_textRenderers_, uFieldFlagsStatic);
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl text) :265
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* text)
{
    __this->ctor_(text);
}

// public void Arrange(float2 position, float2 size) :403
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) :383
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :293
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :425
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// internal static Fuse.Controls.Internal.DefaultTextRenderer GetTextRenderer(Fuse.Font f) :272
void TextRenderer__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::Internal::DefaultTextRenderer** __retval)
{
    *__retval = TextRenderer::GetTextRenderer(f);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) :310
void TextRenderer__InitWrap_fn(TextRenderer* __this, float* wrapWidth, uString* value, bool* useMin)
{
    __this->InitWrap(*wrapWidth, value, *useMin);
}

// public void Invalidate() :420
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// public TextRenderer New(Fuse.Controls.TextControl text) :265
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* text, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(text);
}

// public void SoftDispose() :430
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateArrange() :411
void TextRenderer__UpdateArrange_fn(TextRenderer* __this)
{
    __this->UpdateArrange();
}

uSStrong< ::g::Uno::Collections::Dictionary*> TextRenderer::_textRenderers_;

// public TextRenderer(Fuse.Controls.TextControl text) [instance] :265
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* text)
{
    Control = text;
}

// public void Arrange(float2 position, float2 size) [instance] :403
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _position = position;
    _size = size;
    Invalidate();
    UpdateArrange();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) [instance] :383
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    uArray* array10;
    int index11;
    int length12;
    UpdateArrange();
    uPtr(uPtr(_wrapInfo)->TextRenderer)->BeginRendering(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, uPtr(where)->WorldTransform(), _size, uPtr(Control)->TextColor(), _maxTextLength);
    float y = _position.Y;

    for (array10 = _wrappedLines, index11 = 0, length12 = uPtr(array10)->Length(); index11 < length12; ++index11)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(array10)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index11);
        float x = uPtr(wrappedLine)->GetXOffset(uPtr(Control)->TextAlignment(), _size.X, uPtr(where)->AbsoluteZoom());
        x = x + _position.X;
        uPtr(uPtr(_wrapInfo)->TextRenderer)->DrawLine(dc, x * uPtr(_wrapInfo)->AbsoluteZoom, y, wrappedLine->Text);
        y = y + (uPtr(_wrapInfo)->LineHeight * uPtr(_wrapInfo)->AbsoluteZoom);
    }

    uPtr(uPtr(_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :293
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (((Control == NULL) || ::g::Uno::String::op_Equality(uPtr(Control)->Value(), NULL)) || (uPtr(uPtr(Control)->Value())->Length() == 0))
        return ::g::Uno::Float2__New1(0.0f);

    float wrapWidth = FLT_INF;

    if (uPtr(Control)->TextWrapping() == 1)
    {
        if (lp.HasX())
            wrapWidth = lp.X();

        if (lp.HasMaxX() && (lp.MaxX() < wrapWidth))
            wrapWidth = lp.MaxX();
    }

    InitWrap(wrapWidth, uPtr(Control)->Value(), true);
    return _textBounds.Size();
}

// public Uno.Rect GetRenderBounds() [instance] :425
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    return ::g::Uno::Rect__Translate(_textBounds, _position);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) [instance] :310
void TextRenderer::InitWrap(float wrapWidth, uString* value, bool useMin)
{
    uArray* array7;
    int index8;
    int length9;

    if ((((_wrapInfo != NULL) && (_wrapWidth == wrapWidth)) && ::g::Uno::String::op_Equality(_cacheValue, value)) && (_cacheMin == useMin))
        return;

    _wrapWidth = wrapWidth;
    _cacheValue = value;
    _cacheMin = useMin;
    ::g::Fuse::Font* font = uPtr(Control)->Font();
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* renderer = TextRenderer::GetTextRenderer(font);
    float fontSize = uPtr(Control)->FontSize();
    _wrapInfo = ::g::Fuse::Controls::Internal::WordWrapInfo::New1(renderer, uPtr(Control)->TextWrapping() == 1, wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr(Control)->LineSpacing(), uPtr(Control)->AbsoluteZoom());
    uArray* lines = ::g::Uno::String::Split(uPtr(value), uArray::Init<int>(::TYPES[17/*char[]*/], 1, 10));
    ::g::Uno::Collections::List* wrappedLines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[18/*Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>*/]);

    if (uPtr(Control)->TextWrapping() == 1)

        for (int index2 = 0, length3 = uPtr(lines)->Length(); index2 < length3; ++index2)
        {
            uString* line = uPtr(lines)->Strong<uString*>(index2);
            uPtr(wrappedLines)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[21/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Internal.WrappedLine>*/], ::g::Fuse::Controls::Internal::WordWrapper::WrapLine(_wrapInfo, line))));
        }
    else
    {
        int y = 0;

        for (int index5 = 0, length6 = uPtr(lines)->Length(); index5 < length6; ++index5)
        {
            uString* line1 = uPtr(lines)->Strong<uString*>(index5);
            ::g::Uno::Float2 lineSize = uPtr(uPtr(_wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, line1);
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::g::Fuse::Controls::Internal::WrappedLine::New1(line1, 0, (float)(y++), lineSize.X);
            ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), wrappedLine);
        }
    }

    _wrappedLines = ((uArray*)wrappedLines->ToArray());
    float maxX = 0.0f;
    float minX = 0.0f;
    float height = 0.0f;
    int maxTextLength = 0;

    for (array7 = _wrappedLines, index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine1 = uPtr(array7)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index8);
        ::g::Uno::Float2 extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);

        if (!useMin)

            switch (uPtr(Control)->TextAlignment())
            {
                case 0:
                {
                    extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);
                    break;
                }
                case 2:
                {
                    extent = ::g::Uno::Float2__New2(wrapWidth - uPtr(wrappedLine1)->LineWidth, wrapWidth);
                    break;
                }
                case 1:
                {
                    extent = ::g::Uno::Float2__New2((wrapWidth / 2.0f) - (uPtr(wrappedLine1)->LineWidth / 2.0f), (wrapWidth / 2.0f) + (uPtr(wrappedLine1)->LineWidth / 2.0f));
                    break;
                }
            }

        minX = ::g::Uno::Math::Min1(minX, extent.Item(0));
        maxX = ::g::Uno::Math::Max1(maxX, extent.Item(1));
        maxTextLength = maxTextLength + uPtr(wrappedLine1->Text)->Length();
        height = height + uPtr(_wrapInfo)->LineHeight;
    }

    _textBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2(minX, 0.0f), ::g::Uno::Float2__New2(maxX, height));
    _maxTextLength = maxTextLength;
}

// public void Invalidate() [instance] :420
void TextRenderer::Invalidate()
{
    _wrapInfo = NULL;
}

// public void SoftDispose() [instance] :430
void TextRenderer::SoftDispose()
{
    _wrapInfo = NULL;
}

// private void UpdateArrange() [instance] :411
void TextRenderer::UpdateArrange()
{
    if (_wrapInfo != NULL)
        return;

    uString* ind13 = uPtr(Control)->RenderValue();
    uString* v = (ind13 != NULL) ? ind13 : ::STRINGS[1/*""*/];
    InitWrap(_size.X, v, false);
}

// internal static Fuse.Controls.Internal.DefaultTextRenderer GetTextRenderer(Fuse.Font f) [static] :272
::g::Fuse::Controls::Internal::DefaultTextRenderer* TextRenderer::GetTextRenderer(::g::Fuse::Font* f)
{
    TextRenderer_typeof()->Init();
    bool ret15;
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* tr;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(TextRenderer::_textRenderers()), f, (void**)(&tr), &ret15), ret15))
    {
        tr = ::g::Fuse::Controls::Internal::DefaultTextRenderer::New1(uPtr(f)->FontFace());
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TextRenderer::_textRenderers()), f, tr);
    }

    return tr;
}

// public TextRenderer New(Fuse.Controls.TextControl text) [static] :265
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* text)
{
    TextRenderer* obj14 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj14->ctor_(text);
    return obj14;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#3
// --------------------------------------------------------------------

// internal delegate Fuse.Controls.Graphics.ITextRenderer TextRendererFactory(Fuse.Controls.TextControl Control) :250
uDelegateType* TextRendererFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.Graphics.TextRendererFactory", 1, 0);
    type->SetSignature(::g::Fuse::Controls::Graphics::ITextRenderer_typeof(),
        ::g::Fuse::Controls::TextControl_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#4
// --------------------------------------------------------------------

// public sealed class TextVisual :446
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.TextVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_ctor_ = (void*)TextVisual__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))TextVisual__OnHitTest_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[24] = ::g::Uno::EventHandler_typeof();
    ::TYPES[25] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Controls::Graphics::TextRendererFactory_typeof();
    ::TYPES[26] = ::g::Fuse::Controls::Graphics::PlatformTextRenderer_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[27] = ::g::Fuse::HitTestContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(57,
        ::g::Fuse::Controls::Graphics::ITextRenderer_typeof(), offsetof(::g::Fuse::Controls::Graphics::TextVisual, _textRenderer), 0);
    return type;
}

// public generated TextVisual() :446
void TextVisual__ctor_3_fn(TextVisual* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :459
void TextVisual__Attach_fn(TextVisual* __this)
{
    ::g::Fuse::Controls::TextControl* ret2;
    ::g::Fuse::Controls::TextControl* ret3;
    ::g::Fuse::Controls::TextControl* ret4;
    ::g::Fuse::Controls::TextControl* ret5;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret2), ret2))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)TextVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret3), ret3))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)TextVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret4), ret4))->add_ValueChanged(uDelegate::New(::TYPES[25/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextVisual__OnValueChanged_fn, __this));
    __this->_textRenderer = (uObject*)uPtr(::g::Fuse::Controls::Graphics::PlatformTextRenderer::Factory())->Invoke(1, (::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5));
}

// protected override sealed void Detach() :467
void TextVisual__Detach_fn(TextVisual* __this)
{
    ::g::Fuse::Controls::TextControl* ret6;
    ::g::Fuse::Controls::TextControl* ret7;
    ::g::Fuse::Controls::TextControl* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)TextVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)TextVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->remove_ValueChanged(uDelegate::New(::TYPES[25/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextVisual__OnValueChanged_fn, __this));
    __this->_textRenderer = NULL;
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :501
void TextVisual__GetMarginSize_fn(TextVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = ::g::Fuse::Controls::Graphics::ITextRenderer::GetContentSize(uInterface(uPtr(__this->_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]), lp_), void();
}

// public generated TextVisual New() :446
void TextVisual__New1_fn(TextVisual** __retval)
{
    *__retval = TextVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :506
void TextVisual__OnArrangeMarginBox_fn(TextVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 r = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret9), ret9);
    ::g::Fuse::Controls::Graphics::ITextRenderer::Arrange(uInterface(uPtr(__this->_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]), ::g::Uno::Float2__New1(0.0f), __this->ActualSize());
    return *__retval = r, void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :513
void TextVisual__OnDraw_fn(TextVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::Graphics::ITextRenderer::Draw(uInterface(uPtr(__this->_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]), dc, __this);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :494
void TextVisual__OnHitTest_fn(TextVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :475
void TextVisual__OnTextLayoutPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :481
void TextVisual__OnTextRenderPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :487
void TextVisual__OnValueChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public generated TextVisual() [instance] :446
void TextVisual::ctor_3()
{
    ctor_2();
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :475
void TextVisual::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    InvalidateLayout(2);
    ::g::Fuse::Controls::Graphics::ITextRenderer::Invalidate(uInterface(uPtr(_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]));
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :481
void TextVisual::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    InvalidateVisual();
    ::g::Fuse::Controls::Graphics::ITextRenderer::Invalidate(uInterface(uPtr(_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]));
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :487
void TextVisual::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    InvalidateLayout(2);
    InvalidateVisual();
    ::g::Fuse::Controls::Graphics::ITextRenderer::Invalidate(uInterface(uPtr(_textRenderer), ::TYPES[4/*Fuse.Controls.Graphics.ITextRenderer*/]));
}

// public generated TextVisual New() [static] :446
TextVisual* TextVisual::New1()
{
    TextVisual* obj1 = (TextVisual*)uNew(TextVisual_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Graphics/$.uno#5
// --------------------------------------------------------------------

// public abstract class Visual :526
// {
Visual_type* Visual_typeof()
{
    static uSStrong<Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(Visual_type);
    type = (Visual_type*)uClassType::New("Fuse.Controls.Graphics.Visual", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Visual__Draw_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Visual__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Visual__OnArrangeMarginBox_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Visual__PrependImplicitTransform_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[15] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[13] = ::g::Fuse::LayoutParams_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Visual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Visual_type, interface1));
    type->SetFields(54,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _ActualSize), 0);
    return type;
}

// protected generated Visual() :526
void Visual__ctor_1_fn(Visual* __this)
{
    __this->ctor_1();
}

// protected generated float2 get_ActualSize() :528
void Visual__get_ActualSize_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :528
void Visual__set_ActualSize_fn(Visual* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// public override sealed void Draw(Fuse.DrawContext dc) :566
void Visual__Draw_fn(Visual* __this, ::g::Fuse::DrawContext* dc)
{
    double t;
    __this->OnDraw(dc);
}

// public bool IsPointInside(float2 localPoint) :556
void Visual__IsPointInside_fn(Visual* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public override sealed Uno.Rect get_LocalRenderBounds() :563
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :532
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = lp_.Size();

    if (!lp_.HasSize())
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(lp_);

        if (!lp_.HasX())
            sz.X = rsz.X;

        if (!lp_.HasY())
            sz.Y = rsz.Y;
    }

    __this->_position = position_;
    __this->ActualSize(sz);
    __this->InvalidateLocalTransform();
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :551
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->_position, 0.0f));
}

// protected generated Visual() [instance] :526
void Visual::ctor_1()
{
    ctor_();
}

// protected generated float2 get_ActualSize() [instance] :528
::g::Uno::Float2 Visual::ActualSize()
{
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :528
void Visual::ActualSize(::g::Uno::Float2 value)
{
    _ActualSize = value;
}

// public bool IsPointInside(float2 localPoint) [instance] :556
bool Visual::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}
// }

}}}} // ::g::Fuse::Controls::Graphics
