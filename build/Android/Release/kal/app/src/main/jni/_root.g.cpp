// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property.h>
#include <_root.FuseBasicTheme_FuseBasicThemeButtonText_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsButton_Opacity_Property.h>
#include <_root.FuseBasicTheme_FuseControlsButton_Text_Property.h>
#include <_root.FuseBasicTheme_FuseControlsCircle_Opacity_Property.h>
#include <_root.FuseBasicTheme_FuseControlsRectangle_Height_Property.h>
#include <_root.FuseBasicTheme_FuseControlsRectangle_Width_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_Font_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_FontSize_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_LineSpacing_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_TextAlignment_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_TextWrapping_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_Font_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_FontSize_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingStroke_Width_Property.h>
#include <_root.FuseBasicTheme_FuseEffectsDropShadow_Color_Property.h>
#include <_root.FuseBasicTheme_FuseTranslation_X_Property.h>
#include <_root.FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property.h>
#include <_root.FuseBasicTheme_FuseTriggersWhileFalse_Value_Property.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPolygons_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <_root.FuseThemes_bundle.h>
#include <_root.FuseThemes_FuseControlsScrollView_KeepFocusInView_Property.h>
#include <_root.FuseThemes_FuseControlsScrollView_UserScroll_Property.h>
#include <_root.FuseThemes_FuseGesturesScroller_UserScroll_Property.h>
#include <_root.FuseThemes_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.FuseVideo_bundle.h>
#include <_root.UnoCore_bundle.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.BasicTheme.ButtonText.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Node.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[161];
static uType* TYPES[16];

namespace g{

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseAndroid_bundle :0
// {
// static FuseAndroid_bundle() :0
static void FuseAndroid_bundle__cctor__fn(uType* __type)
{
    FuseAndroid_bundle::Blitter4fbe5e04_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* FuseAndroid_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseAndroid_bundle", options);
    type->fp_cctor_ = FuseAndroid_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;varying vec2 e;vec4 g(vec2 h,mat4 i){return vec4(((h.x*i[0].x)+(h.y*i[1].x))+i[3].x,((h.x*i[0].y)+(h.y*i[1].y))+i[3].y,((h.x*i[0].z)+(h.y*i[1].z))+i[3].z,((h.x*i[0].w)+(h.y*i[1].w))+i[3].w);}void main(){e=a;gl_Position=g(c+(a*b),d);}");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;varying vec2 e;void main(){gl_FragColor=texture2D(f,e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseAndroid_bundle::Blitter4fbe5e04_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseAndroid_bundle::Blitter4fbe5e04_;
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/package
// ------------------------------------------------------------------

// public static generated class FuseBasicTheme_bundle :0
// {
// static FuseBasicTheme_bundle() :0
static void FuseBasicTheme_bundle__cctor__fn(uType* __type)
{
    FuseBasicTheme_bundle::RobotoLight61bf9114_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[7/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[8/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMedium48d2e8ff_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[7/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[9/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegular35826a1a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[7/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[10/*"roboto-regu...*/]);
}

uClassType* FuseBasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseBasicTheme_bundle", options);
    type->fp_cctor_ = FuseBasicTheme_bundle__cctor__fn;
    ::STRINGS[7] = uString::Const("Fuse.BasicTheme");
    ::STRINGS[8] = uString::Const("roboto-light-c9be3551.ttf");
    ::STRINGS[9] = uString::Const("roboto-medium-138fb00a.ttf");
    ::STRINGS[10] = uString::Const("roboto-regular-f5456817.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoLight61bf9114_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoMedium48d2e8ff_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoRegular35826a1a_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoLight61bf9114_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoMedium48d2e8ff_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoRegular35826a1a_;
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property :717
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__OnSet_fn;
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    type->SetFields(2,
        ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj) :720
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__ctor_1_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj) :720
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(obj);
}

// protected override sealed float4 OnGet() :721
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__OnGet_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// protected override sealed void OnSet(float4 v, object origin) :722
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__OnSet_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(__this->_obj), uCRef(v_));
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj) [instance] :720
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::ctor_1(::g::Fuse::Animations::Change* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj) [static] :720
FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(::g::Fuse::Animations::Change* obj)
{
    FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* obj1 = (FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*)uNew(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseBasicThemeButtonText_Value_Property :724
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseBasicThemeButtonText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseBasicThemeButtonText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::BasicTheme::ButtonText_typeof(), offsetof(::g::FuseBasicTheme_FuseBasicThemeButtonText_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseBasicThemeButtonText_Value_Property(Fuse.BasicTheme.ButtonText obj) :727
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__ctor_1_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, ::g::Fuse::BasicTheme::ButtonText* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseBasicThemeButtonText_Value_Property New(Fuse.BasicTheme.ButtonText obj) :727
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__New1_fn(::g::Fuse::BasicTheme::ButtonText* obj, FuseBasicTheme_FuseBasicThemeButtonText_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseBasicThemeButtonText_Value_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :730
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnAddListener_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->add_ValueChanged(listener);
}

// protected override sealed string OnGet() :728
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnGet_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :731
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnRemoveListener_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->remove_ValueChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :729
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property__OnSet_fn(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue1(v, origin);
}

// public FuseBasicTheme_FuseBasicThemeButtonText_Value_Property(Fuse.BasicTheme.ButtonText obj) [instance] :727
void FuseBasicTheme_FuseBasicThemeButtonText_Value_Property::ctor_1(::g::Fuse::BasicTheme::ButtonText* obj)
{
    ctor_();
    _obj = obj;
    uPtr(obj)->add_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public FuseBasicTheme_FuseBasicThemeButtonText_Value_Property New(Fuse.BasicTheme.ButtonText obj) [static] :727
FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* FuseBasicTheme_FuseBasicThemeButtonText_Value_Property::New1(::g::Fuse::BasicTheme::ButtonText* obj)
{
    FuseBasicTheme_FuseBasicThemeButtonText_Value_Property* obj1 = (FuseBasicTheme_FuseBasicThemeButtonText_Value_Property*)uNew(FuseBasicTheme_FuseBasicThemeButtonText_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsButton_Opacity_Property :877
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsButton_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsButton_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsButton_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsButton_Opacity_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsButton_Opacity_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsButton_Opacity_Property(Fuse.Controls.Button obj) :880
void FuseBasicTheme_FuseControlsButton_Opacity_Property__ctor_1_fn(FuseBasicTheme_FuseControlsButton_Opacity_Property* __this, ::g::Fuse::Controls::Button* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsButton_Opacity_Property New(Fuse.Controls.Button obj) :880
void FuseBasicTheme_FuseControlsButton_Opacity_Property__New1_fn(::g::Fuse::Controls::Button* obj, FuseBasicTheme_FuseControlsButton_Opacity_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsButton_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :881
void FuseBasicTheme_FuseControlsButton_Opacity_Property__OnGet_fn(FuseBasicTheme_FuseControlsButton_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :882
void FuseBasicTheme_FuseControlsButton_Opacity_Property__OnSet_fn(FuseBasicTheme_FuseControlsButton_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public FuseBasicTheme_FuseControlsButton_Opacity_Property(Fuse.Controls.Button obj) [instance] :880
void FuseBasicTheme_FuseControlsButton_Opacity_Property::ctor_1(::g::Fuse::Controls::Button* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsButton_Opacity_Property New(Fuse.Controls.Button obj) [static] :880
FuseBasicTheme_FuseControlsButton_Opacity_Property* FuseBasicTheme_FuseControlsButton_Opacity_Property::New1(::g::Fuse::Controls::Button* obj)
{
    FuseBasicTheme_FuseControlsButton_Opacity_Property* obj1 = (FuseBasicTheme_FuseControlsButton_Opacity_Property*)uNew(FuseBasicTheme_FuseControlsButton_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsButton_Text_Property :784
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsButton_Text_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsButton_Text_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsButton_Text_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsButton_Text_Property__OnSet_fn;
    ::TYPES[5] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsButton_Text_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsButton_Text_Property(Fuse.Controls.Button obj) :787
void FuseBasicTheme_FuseControlsButton_Text_Property__ctor_1_fn(FuseBasicTheme_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj) :787
void FuseBasicTheme_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, FuseBasicTheme_FuseControlsButton_Text_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsButton_Text_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :790
void FuseBasicTheme_FuseControlsButton_Text_Property__OnAddListener_fn(FuseBasicTheme_FuseControlsButton_Text_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->add_TextChanged(listener);
}

// protected override sealed string OnGet() :788
void FuseBasicTheme_FuseControlsButton_Text_Property__OnGet_fn(FuseBasicTheme_FuseControlsButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :791
void FuseBasicTheme_FuseControlsButton_Text_Property__OnRemoveListener_fn(FuseBasicTheme_FuseControlsButton_Text_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->remove_TextChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :789
void FuseBasicTheme_FuseControlsButton_Text_Property__OnSet_fn(FuseBasicTheme_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText1(v, origin);
}

// public FuseBasicTheme_FuseControlsButton_Text_Property(Fuse.Controls.Button obj) [instance] :787
void FuseBasicTheme_FuseControlsButton_Text_Property::ctor_1(::g::Fuse::Controls::Button* obj)
{
    ctor_();
    _obj = obj;
    uPtr(obj)->add_TextChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public FuseBasicTheme_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj) [static] :787
FuseBasicTheme_FuseControlsButton_Text_Property* FuseBasicTheme_FuseControlsButton_Text_Property::New1(::g::Fuse::Controls::Button* obj)
{
    FuseBasicTheme_FuseControlsButton_Text_Property* obj1 = (FuseBasicTheme_FuseControlsButton_Text_Property*)uNew(FuseBasicTheme_FuseControlsButton_Text_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsCircle_Opacity_Property :870
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsCircle_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsCircle_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsCircle_Opacity_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsCircle_Opacity_Property(Fuse.Controls.Circle obj) :873
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__ctor_1_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, ::g::Fuse::Controls::Circle* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsCircle_Opacity_Property New(Fuse.Controls.Circle obj) :873
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__New1_fn(::g::Fuse::Controls::Circle* obj, FuseBasicTheme_FuseControlsCircle_Opacity_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsCircle_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :874
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnGet_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :875
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__OnSet_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public FuseBasicTheme_FuseControlsCircle_Opacity_Property(Fuse.Controls.Circle obj) [instance] :873
void FuseBasicTheme_FuseControlsCircle_Opacity_Property::ctor_1(::g::Fuse::Controls::Circle* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsCircle_Opacity_Property New(Fuse.Controls.Circle obj) [static] :873
FuseBasicTheme_FuseControlsCircle_Opacity_Property* FuseBasicTheme_FuseControlsCircle_Opacity_Property::New1(::g::Fuse::Controls::Circle* obj)
{
    FuseBasicTheme_FuseControlsCircle_Opacity_Property* obj1 = (FuseBasicTheme_FuseControlsCircle_Opacity_Property*)uNew(FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsRectangle_Height_Property :891
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsRectangle_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsRectangle_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsRectangle_Height_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsRectangle_Height_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsRectangle_Height_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsRectangle_Height_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsRectangle_Height_Property(Fuse.Controls.Rectangle obj) :894
void FuseBasicTheme_FuseControlsRectangle_Height_Property__ctor_1_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Fuse::Controls::Rectangle* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsRectangle_Height_Property New(Fuse.Controls.Rectangle obj) :894
void FuseBasicTheme_FuseControlsRectangle_Height_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, FuseBasicTheme_FuseControlsRectangle_Height_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsRectangle_Height_Property::New1(obj);
}

// protected override sealed Uno.UX.Size OnGet() :895
void FuseBasicTheme_FuseControlsRectangle_Height_Property__OnGet_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// protected override sealed void OnSet(Uno.UX.Size v, object origin) :896
void FuseBasicTheme_FuseControlsRectangle_Height_Property__OnSet_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public FuseBasicTheme_FuseControlsRectangle_Height_Property(Fuse.Controls.Rectangle obj) [instance] :894
void FuseBasicTheme_FuseControlsRectangle_Height_Property::ctor_1(::g::Fuse::Controls::Rectangle* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsRectangle_Height_Property New(Fuse.Controls.Rectangle obj) [static] :894
FuseBasicTheme_FuseControlsRectangle_Height_Property* FuseBasicTheme_FuseControlsRectangle_Height_Property::New1(::g::Fuse::Controls::Rectangle* obj)
{
    FuseBasicTheme_FuseControlsRectangle_Height_Property* obj1 = (FuseBasicTheme_FuseControlsRectangle_Height_Property*)uNew(FuseBasicTheme_FuseControlsRectangle_Height_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsRectangle_Width_Property :856
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsRectangle_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsRectangle_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsRectangle_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsRectangle_Width_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsRectangle_Width_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsRectangle_Width_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj) :859
void FuseBasicTheme_FuseControlsRectangle_Width_Property__ctor_1_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Fuse::Controls::Rectangle* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj) :859
void FuseBasicTheme_FuseControlsRectangle_Width_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, FuseBasicTheme_FuseControlsRectangle_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsRectangle_Width_Property::New1(obj);
}

// protected override sealed Uno.UX.Size OnGet() :860
void FuseBasicTheme_FuseControlsRectangle_Width_Property__OnGet_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// protected override sealed void OnSet(Uno.UX.Size v, object origin) :861
void FuseBasicTheme_FuseControlsRectangle_Width_Property__OnSet_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public FuseBasicTheme_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj) [instance] :859
void FuseBasicTheme_FuseControlsRectangle_Width_Property::ctor_1(::g::Fuse::Controls::Rectangle* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj) [static] :859
FuseBasicTheme_FuseControlsRectangle_Width_Property* FuseBasicTheme_FuseControlsRectangle_Width_Property::New1(::g::Fuse::Controls::Rectangle* obj)
{
    FuseBasicTheme_FuseControlsRectangle_Width_Property* obj1 = (FuseBasicTheme_FuseControlsRectangle_Width_Property*)uNew(FuseBasicTheme_FuseControlsRectangle_Width_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_Font_Property :761
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_Font_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_Font_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_Font_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Font_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_Font_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_Font_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_Font_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_Font_Property(Fuse.Controls.Text obj) :764
void FuseBasicTheme_FuseControlsText_Font_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_Font_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_Font_Property New(Fuse.Controls.Text obj) :764
void FuseBasicTheme_FuseControlsText_Font_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_Font_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_Font_Property::New1(obj);
}

// protected override sealed Fuse.Font OnGet() :765
void FuseBasicTheme_FuseControlsText_Font_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_Font_Property* __this, ::g::Fuse::Font** __retval)
{
    return *__retval = uPtr(__this->_obj)->Font(), void();
}

// protected override sealed void OnSet(Fuse.Font v, object origin) :766
void FuseBasicTheme_FuseControlsText_Font_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_Font_Property* __this, ::g::Fuse::Font* v, uObject* origin)
{
    uPtr(__this->_obj)->Font(v);
}

// public FuseBasicTheme_FuseControlsText_Font_Property(Fuse.Controls.Text obj) [instance] :764
void FuseBasicTheme_FuseControlsText_Font_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_Font_Property New(Fuse.Controls.Text obj) [static] :764
FuseBasicTheme_FuseControlsText_Font_Property* FuseBasicTheme_FuseControlsText_Font_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_Font_Property* obj1 = (FuseBasicTheme_FuseControlsText_Font_Property*)uNew(FuseBasicTheme_FuseControlsText_Font_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_FontSize_Property :768
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_FontSize_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_FontSize_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_FontSize_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_FontSize_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_FontSize_Property(Fuse.Controls.Text obj) :771
void FuseBasicTheme_FuseControlsText_FontSize_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_FontSize_Property New(Fuse.Controls.Text obj) :771
void FuseBasicTheme_FuseControlsText_FontSize_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_FontSize_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_FontSize_Property::New1(obj);
}

// protected override sealed float OnGet() :772
void FuseBasicTheme_FuseControlsText_FontSize_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->FontSize(), void();
}

// protected override sealed void OnSet(float v, object origin) :773
void FuseBasicTheme_FuseControlsText_FontSize_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->FontSize(v_);
}

// public FuseBasicTheme_FuseControlsText_FontSize_Property(Fuse.Controls.Text obj) [instance] :771
void FuseBasicTheme_FuseControlsText_FontSize_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_FontSize_Property New(Fuse.Controls.Text obj) [static] :771
FuseBasicTheme_FuseControlsText_FontSize_Property* FuseBasicTheme_FuseControlsText_FontSize_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_FontSize_Property* obj1 = (FuseBasicTheme_FuseControlsText_FontSize_Property*)uNew(FuseBasicTheme_FuseControlsText_FontSize_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_LineSpacing_Property :754
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_LineSpacing_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_LineSpacing_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_LineSpacing_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_LineSpacing_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_LineSpacing_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_LineSpacing_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_LineSpacing_Property(Fuse.Controls.Text obj) :757
void FuseBasicTheme_FuseControlsText_LineSpacing_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_LineSpacing_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_LineSpacing_Property New(Fuse.Controls.Text obj) :757
void FuseBasicTheme_FuseControlsText_LineSpacing_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_LineSpacing_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_LineSpacing_Property::New1(obj);
}

// protected override sealed float OnGet() :758
void FuseBasicTheme_FuseControlsText_LineSpacing_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_LineSpacing_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->LineSpacing(), void();
}

// protected override sealed void OnSet(float v, object origin) :759
void FuseBasicTheme_FuseControlsText_LineSpacing_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_LineSpacing_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->LineSpacing(v_);
}

// public FuseBasicTheme_FuseControlsText_LineSpacing_Property(Fuse.Controls.Text obj) [instance] :757
void FuseBasicTheme_FuseControlsText_LineSpacing_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_LineSpacing_Property New(Fuse.Controls.Text obj) [static] :757
FuseBasicTheme_FuseControlsText_LineSpacing_Property* FuseBasicTheme_FuseControlsText_LineSpacing_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_LineSpacing_Property* obj1 = (FuseBasicTheme_FuseControlsText_LineSpacing_Property*)uNew(FuseBasicTheme_FuseControlsText_LineSpacing_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_TextAlignment_Property :740
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextAlignment_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_TextAlignment_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_TextAlignment_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextAlignment_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_TextAlignment_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_TextAlignment_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_TextAlignment_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_TextAlignment_Property(Fuse.Controls.Text obj) :743
void FuseBasicTheme_FuseControlsText_TextAlignment_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_TextAlignment_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_TextAlignment_Property New(Fuse.Controls.Text obj) :743
void FuseBasicTheme_FuseControlsText_TextAlignment_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_TextAlignment_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_TextAlignment_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextAlignment OnGet() :744
void FuseBasicTheme_FuseControlsText_TextAlignment_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_TextAlignment_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextAlignment(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextAlignment v, object origin) :745
void FuseBasicTheme_FuseControlsText_TextAlignment_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_TextAlignment_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->TextAlignment(v_);
}

// public FuseBasicTheme_FuseControlsText_TextAlignment_Property(Fuse.Controls.Text obj) [instance] :743
void FuseBasicTheme_FuseControlsText_TextAlignment_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_TextAlignment_Property New(Fuse.Controls.Text obj) [static] :743
FuseBasicTheme_FuseControlsText_TextAlignment_Property* FuseBasicTheme_FuseControlsText_TextAlignment_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_TextAlignment_Property* obj1 = (FuseBasicTheme_FuseControlsText_TextAlignment_Property*)uNew(FuseBasicTheme_FuseControlsText_TextAlignment_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_TextColor_Property :696
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_TextColor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_TextColor_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_TextColor_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj) :699
void FuseBasicTheme_FuseControlsText_TextColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj) :699
void FuseBasicTheme_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_TextColor_Property::New1(obj);
}

// protected override sealed float4 OnGet() :700
void FuseBasicTheme_FuseControlsText_TextColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :701
void FuseBasicTheme_FuseControlsText_TextColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj) [instance] :699
void FuseBasicTheme_FuseControlsText_TextColor_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj) [static] :699
FuseBasicTheme_FuseControlsText_TextColor_Property* FuseBasicTheme_FuseControlsText_TextColor_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsText_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsText_TextColor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_TextWrapping_Property :747
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextWrapping_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_TextWrapping_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_TextWrapping_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextWrapping_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_TextWrapping_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_TextWrapping_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_TextWrapping_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_TextWrapping_Property(Fuse.Controls.Text obj) :750
void FuseBasicTheme_FuseControlsText_TextWrapping_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_TextWrapping_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_TextWrapping_Property New(Fuse.Controls.Text obj) :750
void FuseBasicTheme_FuseControlsText_TextWrapping_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_TextWrapping_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_TextWrapping_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextWrapping OnGet() :751
void FuseBasicTheme_FuseControlsText_TextWrapping_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_TextWrapping_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextWrapping(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextWrapping v, object origin) :752
void FuseBasicTheme_FuseControlsText_TextWrapping_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_TextWrapping_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->TextWrapping(v_);
}

// public FuseBasicTheme_FuseControlsText_TextWrapping_Property(Fuse.Controls.Text obj) [instance] :750
void FuseBasicTheme_FuseControlsText_TextWrapping_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsText_TextWrapping_Property New(Fuse.Controls.Text obj) [static] :750
FuseBasicTheme_FuseControlsText_TextWrapping_Property* FuseBasicTheme_FuseControlsText_TextWrapping_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_TextWrapping_Property* obj1 = (FuseBasicTheme_FuseControlsText_TextWrapping_Property*)uNew(FuseBasicTheme_FuseControlsText_TextWrapping_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_Value_Property :775
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsText_Value_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsText_Value_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsText_Value_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsText_Value_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsText_Value_Property(Fuse.Controls.Text obj) :778
void FuseBasicTheme_FuseControlsText_Value_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsText_Value_Property New(Fuse.Controls.Text obj) :778
void FuseBasicTheme_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsText_Value_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :781
void FuseBasicTheme_FuseControlsText_Value_Property__OnAddListener_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->add_ValueChanged(listener);
}

// protected override sealed string OnGet() :779
void FuseBasicTheme_FuseControlsText_Value_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :782
void FuseBasicTheme_FuseControlsText_Value_Property__OnRemoveListener_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->remove_ValueChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :780
void FuseBasicTheme_FuseControlsText_Value_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue1(v, origin);
}

// public FuseBasicTheme_FuseControlsText_Value_Property(Fuse.Controls.Text obj) [instance] :778
void FuseBasicTheme_FuseControlsText_Value_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
    uPtr(obj)->add_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public FuseBasicTheme_FuseControlsText_Value_Property New(Fuse.Controls.Text obj) [static] :778
FuseBasicTheme_FuseControlsText_Value_Property* FuseBasicTheme_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj)
{
    FuseBasicTheme_FuseControlsText_Value_Property* obj1 = (FuseBasicTheme_FuseControlsText_Value_Property*)uNew(FuseBasicTheme_FuseControlsText_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property :793
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__OnSet_fn;
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property(Fuse.Controls.TextEdit obj) :796
void FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property* __this, ::g::Fuse::Controls::TextEdit* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property New(Fuse.Controls.TextEdit obj) :796
void FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__New1_fn(::g::Fuse::Controls::TextEdit* obj, FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property::New1(obj);
}

// protected override sealed bool OnGet() :797
void FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property* __this, bool* __retval)
{
    return *__retval = ::g::Fuse::Input::Focus::IsFocusable(__this->_obj), void();
}

// protected override sealed void OnSet(bool v, object origin) :798
void FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    ::g::Fuse::Input::Focus::SetIsFocusable(__this->_obj, v_);
}

// public FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property(Fuse.Controls.TextEdit obj) [instance] :796
void FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property::ctor_1(::g::Fuse::Controls::TextEdit* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property New(Fuse.Controls.TextEdit obj) [static] :796
FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property* FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property::New1(::g::Fuse::Controls::TextEdit* obj)
{
    FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property* obj1 = (FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property*)uNew(FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_Font_Property :821
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_Font_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_Font_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_Font_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Font_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_Font_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_Font_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_Font_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_Font_Property(Fuse.Controls.TextInput obj) :824
void FuseBasicTheme_FuseControlsTextInput_Font_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_Font_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_Font_Property New(Fuse.Controls.TextInput obj) :824
void FuseBasicTheme_FuseControlsTextInput_Font_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_Font_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_Font_Property::New1(obj);
}

// protected override sealed Fuse.Font OnGet() :825
void FuseBasicTheme_FuseControlsTextInput_Font_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_Font_Property* __this, ::g::Fuse::Font** __retval)
{
    return *__retval = uPtr(__this->_obj)->Font(), void();
}

// protected override sealed void OnSet(Fuse.Font v, object origin) :826
void FuseBasicTheme_FuseControlsTextInput_Font_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_Font_Property* __this, ::g::Fuse::Font* v, uObject* origin)
{
    uPtr(__this->_obj)->Font(v);
}

// public FuseBasicTheme_FuseControlsTextInput_Font_Property(Fuse.Controls.TextInput obj) [instance] :824
void FuseBasicTheme_FuseControlsTextInput_Font_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_Font_Property New(Fuse.Controls.TextInput obj) [static] :824
FuseBasicTheme_FuseControlsTextInput_Font_Property* FuseBasicTheme_FuseControlsTextInput_Font_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_Font_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_Font_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_Font_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_FontSize_Property :828
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_FontSize_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_FontSize_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_FontSize_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_FontSize_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_FontSize_Property(Fuse.Controls.TextInput obj) :831
void FuseBasicTheme_FuseControlsTextInput_FontSize_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_FontSize_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_FontSize_Property New(Fuse.Controls.TextInput obj) :831
void FuseBasicTheme_FuseControlsTextInput_FontSize_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_FontSize_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_FontSize_Property::New1(obj);
}

// protected override sealed float OnGet() :832
void FuseBasicTheme_FuseControlsTextInput_FontSize_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_FontSize_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->FontSize(), void();
}

// protected override sealed void OnSet(float v, object origin) :833
void FuseBasicTheme_FuseControlsTextInput_FontSize_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_FontSize_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->FontSize(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_FontSize_Property(Fuse.Controls.TextInput obj) [instance] :831
void FuseBasicTheme_FuseControlsTextInput_FontSize_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_FontSize_Property New(Fuse.Controls.TextInput obj) [static] :831
FuseBasicTheme_FuseControlsTextInput_FontSize_Property* FuseBasicTheme_FuseControlsTextInput_FontSize_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_FontSize_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_FontSize_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_FontSize_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property :814
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property(Fuse.Controls.TextInput obj) :817
void FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property New(Fuse.Controls.TextInput obj) :817
void FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property::New1(obj);
}

// protected override sealed float OnGet() :818
void FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->LineSpacing(), void();
}

// protected override sealed void OnSet(float v, object origin) :819
void FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->LineSpacing(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property(Fuse.Controls.TextInput obj) [instance] :817
void FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property New(Fuse.Controls.TextInput obj) [static] :817
FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property* FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property :842
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnSet_fn;
    ::TYPES[7] = ::g::Fuse::Controls::TextEdit_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property(Fuse.Controls.TextInput obj) :845
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property New(Fuse.Controls.TextInput obj) :845
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property::New1(obj);
}

// protected override sealed float4 OnGet() :846
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->PlaceholderColor(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :847
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->PlaceholderColor(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property(Fuse.Controls.TextInput obj) [instance] :845
void FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property New(Fuse.Controls.TextInput obj) [static] :845
FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property :835
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__OnSet_fn;
    ::TYPES[7] = ::g::Fuse::Controls::TextEdit_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property(Fuse.Controls.TextInput obj) :838
void FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property New(Fuse.Controls.TextInput obj) :838
void FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property::New1(obj);
}

// protected override sealed string OnGet() :839
void FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->PlaceholderText(), void();
}

// protected override sealed void OnSet(string v, object origin) :840
void FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->PlaceholderText(v);
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property(Fuse.Controls.TextInput obj) [instance] :838
void FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property New(Fuse.Controls.TextInput obj) [static] :838
FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property* FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property :800
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextAlignment_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property(Fuse.Controls.TextInput obj) :803
void FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property New(Fuse.Controls.TextInput obj) :803
void FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextAlignment OnGet() :804
void FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextAlignment(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextAlignment v, object origin) :805
void FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->TextAlignment(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property(Fuse.Controls.TextInput obj) [instance] :803
void FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property New(Fuse.Controls.TextInput obj) [static] :803
FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property* FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_TextColor_Property :884
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_TextColor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_TextColor_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_TextColor_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_TextColor_Property(Fuse.Controls.TextInput obj) :887
void FuseBasicTheme_FuseControlsTextInput_TextColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_TextColor_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_TextColor_Property New(Fuse.Controls.TextInput obj) :887
void FuseBasicTheme_FuseControlsTextInput_TextColor_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_TextColor_Property::New1(obj);
}

// protected override sealed float4 OnGet() :888
void FuseBasicTheme_FuseControlsTextInput_TextColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :889
void FuseBasicTheme_FuseControlsTextInput_TextColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_TextColor_Property(Fuse.Controls.TextInput obj) [instance] :887
void FuseBasicTheme_FuseControlsTextInput_TextColor_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_TextColor_Property New(Fuse.Controls.TextInput obj) [static] :887
FuseBasicTheme_FuseControlsTextInput_TextColor_Property* FuseBasicTheme_FuseControlsTextInput_TextColor_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_TextColor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property :807
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextWrapping_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property(Fuse.Controls.TextInput obj) :810
void FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property* __this, ::g::Fuse::Controls::TextInput* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property New(Fuse.Controls.TextInput obj) :810
void FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextWrapping OnGet() :811
void FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextWrapping(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextWrapping v, object origin) :812
void FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->TextWrapping(v_);
}

// public FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property(Fuse.Controls.TextInput obj) [instance] :810
void FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property::ctor_1(::g::Fuse::Controls::TextInput* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property New(Fuse.Controls.TextInput obj) [static] :810
FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property* FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property::New1(::g::Fuse::Controls::TextInput* obj)
{
    FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property* obj1 = (FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property*)uNew(FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :703
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__OnSet_fn;
    ::TYPES[8] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj) :706
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__ctor_1_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj) :706
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, FuseBasicTheme_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :707
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__OnGet_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :708
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__OnSet_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj) [instance] :706
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property::ctor_1(::g::Fuse::Drawing::SolidColor* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj) [static] :706
FuseBasicTheme_FuseDrawingSolidColor_Color_Property* FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj)
{
    FuseBasicTheme_FuseDrawingSolidColor_Color_Property* obj1 = (FuseBasicTheme_FuseDrawingSolidColor_Color_Property*)uNew(FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :849
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingStroke_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseDrawingStroke_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseDrawingStroke_Width_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_Width_Property__OnSet_fn;
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property(Fuse.Drawing.Stroke obj) :852
void FuseBasicTheme_FuseDrawingStroke_Width_Property__ctor_1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Fuse::Drawing::Stroke* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property New(Fuse.Drawing.Stroke obj) :852
void FuseBasicTheme_FuseDrawingStroke_Width_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, FuseBasicTheme_FuseDrawingStroke_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingStroke_Width_Property::New1(obj);
}

// protected override sealed float OnGet() :853
void FuseBasicTheme_FuseDrawingStroke_Width_Property__OnGet_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// protected override sealed void OnSet(float v, object origin) :854
void FuseBasicTheme_FuseDrawingStroke_Width_Property__OnSet_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property(Fuse.Drawing.Stroke obj) [instance] :852
void FuseBasicTheme_FuseDrawingStroke_Width_Property::ctor_1(::g::Fuse::Drawing::Stroke* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property New(Fuse.Drawing.Stroke obj) [static] :852
FuseBasicTheme_FuseDrawingStroke_Width_Property* FuseBasicTheme_FuseDrawingStroke_Width_Property::New1(::g::Fuse::Drawing::Stroke* obj)
{
    FuseBasicTheme_FuseDrawingStroke_Width_Property* obj1 = (FuseBasicTheme_FuseDrawingStroke_Width_Property*)uNew(FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :710
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseEffectsDropShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__OnSet_fn;
    ::TYPES[10] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetFields(2,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property(Fuse.Effects.DropShadow obj) :713
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__ctor_1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Fuse::Effects::DropShadow* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property New(Fuse.Effects.DropShadow obj) :713
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, FuseBasicTheme_FuseEffectsDropShadow_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseEffectsDropShadow_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :714
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__OnGet_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :715
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__OnSet_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property(Fuse.Effects.DropShadow obj) [instance] :713
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property::ctor_1(::g::Fuse::Effects::DropShadow* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property New(Fuse.Effects.DropShadow obj) [static] :713
FuseBasicTheme_FuseEffectsDropShadow_Color_Property* FuseBasicTheme_FuseEffectsDropShadow_Color_Property::New1(::g::Fuse::Effects::DropShadow* obj)
{
    FuseBasicTheme_FuseEffectsDropShadow_Color_Property* obj1 = (FuseBasicTheme_FuseEffectsDropShadow_Color_Property*)uNew(FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :863
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTranslation_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTranslation_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTranslation_X_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTranslation_X_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTranslation_X_Property__OnSet_fn;
    ::TYPES[11] = ::g::Fuse::Translation_typeof();
    type->SetFields(2,
        ::g::Fuse::Translation_typeof(), offsetof(::g::FuseBasicTheme_FuseTranslation_X_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTranslation_X_Property(Fuse.Translation obj) :866
void FuseBasicTheme_FuseTranslation_X_Property__ctor_1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTranslation_X_Property New(Fuse.Translation obj) :866
void FuseBasicTheme_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, FuseBasicTheme_FuseTranslation_X_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTranslation_X_Property::New1(obj);
}

// protected override sealed float OnGet() :867
void FuseBasicTheme_FuseTranslation_X_Property__OnGet_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->X(), void();
}

// protected override sealed void OnSet(float v, object origin) :868
void FuseBasicTheme_FuseTranslation_X_Property__OnSet_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->X(v_);
}

// public FuseBasicTheme_FuseTranslation_X_Property(Fuse.Translation obj) [instance] :866
void FuseBasicTheme_FuseTranslation_X_Property::ctor_1(::g::Fuse::Translation* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTranslation_X_Property New(Fuse.Translation obj) [static] :866
FuseBasicTheme_FuseTranslation_X_Property* FuseBasicTheme_FuseTranslation_X_Property::New1(::g::Fuse::Translation* obj)
{
    FuseBasicTheme_FuseTranslation_X_Property* obj1 = (FuseBasicTheme_FuseTranslation_X_Property*)uNew(FuseBasicTheme_FuseTranslation_X_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property :733
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnSet_fn;
    ::TYPES[12] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::Actions::GiveFocus_typeof(), offsetof(::g::FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property(Fuse.Triggers.Actions.GiveFocus obj) :736
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::GiveFocus* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property New(Fuse.Triggers.Actions.GiveFocus obj) :736
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::GiveFocus* obj, FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property::New1(obj);
}

// protected override sealed bool OnGet() :737
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnGet_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// protected override sealed void OnSet(bool v, object origin) :738
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property__OnSet_fn(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsActive(v_);
}

// public FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property(Fuse.Triggers.Actions.GiveFocus obj) [instance] :736
void FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property::ctor_1(::g::Fuse::Triggers::Actions::GiveFocus* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property New(Fuse.Triggers.Actions.GiveFocus obj) [static] :736
FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property::New1(::g::Fuse::Triggers::Actions::GiveFocus* obj)
{
    FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property* obj1 = (FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property*)uNew(FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/.uno/$.uno#2
// ------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTriggersWhileFalse_Value_Property :898
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersWhileFalse_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTriggersWhileFalse_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnSet_fn;
    ::TYPES[13] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileFalse_typeof(), offsetof(::g::FuseBasicTheme_FuseTriggersWhileFalse_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTriggersWhileFalse_Value_Property(Fuse.Triggers.WhileFalse obj) :901
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, ::g::Fuse::Triggers::WhileFalse* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTriggersWhileFalse_Value_Property New(Fuse.Triggers.WhileFalse obj) :901
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__New1_fn(::g::Fuse::Triggers::WhileFalse* obj, FuseBasicTheme_FuseTriggersWhileFalse_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTriggersWhileFalse_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :902
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnGet_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :903
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property__OnSet_fn(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public FuseBasicTheme_FuseTriggersWhileFalse_Value_Property(Fuse.Triggers.WhileFalse obj) [instance] :901
void FuseBasicTheme_FuseTriggersWhileFalse_Value_Property::ctor_1(::g::Fuse::Triggers::WhileFalse* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTriggersWhileFalse_Value_Property New(Fuse.Triggers.WhileFalse obj) [static] :901
FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* FuseBasicTheme_FuseTriggersWhileFalse_Value_Property::New1(::g::Fuse::Triggers::WhileFalse* obj)
{
    FuseBasicTheme_FuseTriggersWhileFalse_Value_Property* obj1 = (FuseBasicTheme_FuseTriggersWhileFalse_Value_Property*)uNew(FuseBasicTheme_FuseTriggersWhileFalse_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::ImageElementDraw366a57bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[11/*"uniform mat...*/], ::STRINGS[12/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseControls_bundle::SolidRectangleafb52825_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[15/*"uniform mat...*/], ::STRINGS[16/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[22/*"n"*/]));
    FuseControls_bundle::SolidRectangleafb52826_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[23/*"uniform mat...*/], ::STRINGS[24/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::SolidRectangleafb52827_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[25/*"uniform mat...*/], ::STRINGS[26/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[21/*"l"*/]));
    FuseControls_bundle::Viewportb83477c3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[27/*"uniform mat...*/], ::STRINGS[28/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/]));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    ::STRINGS[11] = uString::Const("uniform mat4 f,b;uniform vec2 c,d;attribute vec2 a;varying vec2 g;void main(){g=(a*c)+d;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[12] = uString::Const("uniform vec4 e;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=texture2D(h,g)*e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[15] = uString::Const("uniform mat4 l,c;uniform vec2 d,e,f,g,h;attribute vec2 a;varying vec2 m;void main(){m=((((d*(false?vec2(a.x,float(1)-a.y):a))-e)/f)*g)+h;gl_Position=c*(l*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[16] = uString::Const("uniform vec4 i;uniform float j,k;uniform sampler2D n;varying vec2 m;void main(){vec4 o=(b?vec4(float(0)):texture2D(n,m))*i;gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j)*k;}");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[23] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[24] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[25] = uString::Const("uniform mat4 h,b;uniform vec2 c,d,e,i;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,i,j);gl_Position=b*(h*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[26] = uString::Const("uniform float f,g;uniform sampler2D l;varying float k;void main(){vec4 n=texture2D(l,vec2(k,.5));gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f)*g;}");
    ::STRINGS[27] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=false?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[28] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::ImageElementDraw366a57bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52825_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52826_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52827_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportb83477c3_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::ImageElementDraw366a57bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52825_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52826_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52827_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportb83477c3_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.10/.uno/package
// -----------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpersbba46184_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform vec...*/], ::STRINGS[30/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/]));
    FuseCore_bundle::OpenSansLighta8529473_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[31/*"FuseCore"*/]))->GetFile(::STRINGS[32/*"opensans-li...*/]);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    ::STRINGS[29] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[30] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[31] = uString::Const("FuseCore");
    ::STRINGS[32] = uString::Const("opensans-light-eaf1b13e.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpersbba46184_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::OpenSansLighta8529473_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpersbba46184_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseCore_bundle::OpenSansLighta8529473_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/0.27.10/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable066bc6f3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[33/*"attribute v...*/], ::STRINGS[34/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    ::STRINGS[33] = uString::Const("attribute vec2 a;varying vec2 g;void main(){g=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[34] = uString::Const("uniform float d[b],e;uniform vec4 f[c];varying vec2 g;vec4 h(vec2 i){float j=d[0]+(e*i.x);vec4 k=f[0];for(int l=0;l<(b-1);l++){float m=d[l];float n=d[l+1];vec4 o=f[l+1];k=mix(k,o,smoothstep(m,n,j));}return k;}void main(){gl_FragColor=h(g);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable066bc6f3_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable066bc6f3_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.27.10/.uno/package
// ------------------------------------------------------------------------

// public static generated class FuseDrawingPolygons_bundle :0
// {
// static FuseDrawingPolygons_bundle() :0
static void FuseDrawingPolygons_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPolygons_bundle::Borderabeb3b3d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[37/*"m"*/]));
    FuseDrawingPolygons_bundle::Borderabeb3b3e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform mat...*/], ::STRINGS[39/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseDrawingPolygons_bundle::Borderabeb3b3f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[41/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[20/*"k"*/]));
    FuseDrawingPolygons_bundle::Borderabeb3b40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"uniform mat...*/], ::STRINGS[43/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawablefeed06e7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform mat...*/], ::STRINGS[45/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawablefeed06e8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform mat...*/], ::STRINGS[24/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawablefeed06e9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform mat...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[19/*"j"*/]));
}

uClassType* FuseDrawingPolygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPolygons_bundle", options);
    type->fp_cctor_ = FuseDrawingPolygons_bundle__cctor__fn;
    ::STRINGS[35] = uString::Const("uniform mat4 c;uniform vec2 d,e,f,g,h;attribute vec4 a;varying vec4 k;varying vec2 l;vec4 n(vec2 o,mat4 p){return vec4(((o.x*p[0].x)+(o.y*p[1].x))+p[3].x,((o.x*p[0].y)+(o.y*p[1].y))+p[3].y,((o.x*p[0].z)+(o.y*p[1].z))+p[3].z,((o.x*p[0].w)+(o.y*p[1].w))+p[3].w);}void main(){k=vec4(float(1),float(1),float(1),a.zw.x);l=((((d*(a.xy/d))-e)/f)*g)+h;gl_Position=n(a.xy,c);}");
    ::STRINGS[36] = uString::Const("uniform vec4 i;uniform float j;uniform sampler2D m;varying vec4 k;varying vec2 l;void main(){vec4 o=((b?vec4(float(0)):texture2D(m,l))*i)*k;gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[37] = uString::Const("m");
    ::STRINGS[38] = uString::Const("uniform mat4 b;uniform vec4 c;uniform float d;attribute vec4 a;varying vec4 e;vec4 f(vec2 g,mat4 h){return vec4(((g.x*h[0].x)+(g.y*h[1].x))+h[3].x,((g.x*h[0].y)+(g.y*h[1].y))+h[3].y,((g.x*h[0].z)+(g.y*h[1].z))+h[3].z,((g.x*h[0].w)+(g.y*h[1].w))+h[3].w);}void main(){vec4 g=c*vec4(float(1),float(1),float(1),a.zw.x);e=vec4((g.xyz*g.w)*d,g.w*d);gl_Position=f(a.xy,b);}");
    ::STRINGS[39] = uString::Const("varying vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[40] = uString::Const("uniform mat4 b;uniform vec2 c,d,e,g;uniform float h;attribute vec4 a;varying vec4 i;varying float j;vec4 l(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){i=vec4(float(1),float(1),float(1),a.zw.x);j=m(a.xy/c,g,h);gl_Position=l(a.xy,b);}");
    ::STRINGS[41] = uString::Const("uniform float f;uniform sampler2D k;varying vec4 i;varying float j;void main(){vec4 n=texture2D(k,vec2(j,.5))*i;gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f);}");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[42] = uString::Const("uniform mat4 b;uniform vec4 c;attribute vec4 a;varying vec4 d;vec4 e(vec2 f,mat4 g){return vec4(((f.x*g[0].x)+(f.y*g[1].x))+g[3].x,((f.x*g[0].y)+(f.y*g[1].y))+g[3].y,((f.x*g[0].z)+(f.y*g[1].z))+g[3].z,((f.x*g[0].w)+(f.y*g[1].w))+g[3].w);}void main(){vec4 f=c*vec4(float(1),float(1),float(1),a.zw.x);d=vec4((f.xyz*f.w)*1.,f.w);gl_Position=e(a.xy,b);}");
    ::STRINGS[43] = uString::Const("varying vec4 d;void main(){gl_FragColor=d;}");
    ::STRINGS[44] = uString::Const("uniform mat4 c;uniform vec2 d,e,f,g,h;attribute vec2 a;varying vec2 k;vec4 m(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}void main(){k=((((d*(a/d))-e)/f)*g)+h;gl_Position=m(a,c);}");
    ::STRINGS[45] = uString::Const("uniform vec4 i;uniform float j;uniform sampler2D l;varying vec2 k;void main(){vec4 n=(b?vec4(float(0)):texture2D(l,k))*i;gl_FragColor=vec4((n.xyz*n.w)*j,n.w*j);}");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[46] = uString::Const("uniform mat4 b;attribute vec2 a;vec4 d(vec2 e,mat4 f){return vec4(((e.x*f[0].x)+(e.y*f[1].x))+f[3].x,((e.x*f[0].y)+(e.y*f[1].y))+f[3].y,((e.x*f[0].z)+(e.y*f[1].z))+f[3].z,((e.x*f[0].w)+(e.y*f[1].w))+f[3].w);}void main(){gl_Position=d(a,b);}");
    ::STRINGS[24] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[47] = uString::Const("uniform mat4 b;uniform vec2 c,d,e,g;uniform float h;attribute vec2 a;varying float i;vec4 k(vec2 m,mat4 n){return vec4(((m.x*n[0].x)+(m.y*n[1].x))+n[3].x,((m.x*n[0].y)+(m.y*n[1].y))+n[3].y,((m.x*n[0].z)+(m.y*n[1].z))+n[3].z,((m.x*n[0].w)+(m.y*n[1].w))+n[3].w);}float l(vec2 m,vec2 n,float o){vec2 p=(m*c)-d;float q=dot(p,n)/o;return (q-e.x)/e.y;}void main(){i=l(a/c,g,h);gl_Position=k(a,b);}");
    ::STRINGS[48] = uString::Const("uniform float f;uniform sampler2D j;varying float i;void main(){vec4 m=texture2D(j,vec2(i,.5));gl_FragColor=vec4((m.xyz*m.w)*f,m.w*f);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderabeb3b3d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderabeb3b3e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderabeb3b3f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderabeb3b40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawablefeed06e7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawablefeed06e8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawablefeed06e9_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderabeb3b3d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderabeb3b3e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderabeb3b3f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderabeb3b40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawablefeed06e7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawablefeed06e8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawablefeed06e9_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.27.10/.uno/package
// --------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle2a09f04b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform vec...*/], ::STRINGS[50/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle2a09f04c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform vec...*/], ::STRINGS[56/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle2a09f04d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform vec...*/], ::STRINGS[58/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d6b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d6c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d82_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[65/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[66/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[67/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[66/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[68/*"uniform vec...*/], ::STRINGS[69/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[52/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[71/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circle32dc887c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle32dc887d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[66/*"s"*/], ::STRINGS[81/*"t"*/], ::STRINGS[82/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[83/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[66/*"s"*/], ::STRINGS[81/*"t"*/], ::STRINGS[82/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[81/*"t"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d90_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d91_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[89/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c58d6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[90/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[94/*"uniform vec...*/], ::STRINGS[95/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5eefb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[97/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[66/*"s"*/], ::STRINGS[98/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5eefc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5eefd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[103/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5eefe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5fe03_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[107/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[103/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5fe04_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[109/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5fe05_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[81/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle35a5fe06_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/]));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    ::STRINGS[49] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 s,t;vec4 v(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}void main(){vec2 w=a*c;vec2 x=w+d;s=((((f*(x/f))-g)/h)*i)+j;t=w;gl_Position=v(x,e);}");
    ::STRINGS[50] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[37] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[51] = uString::Const("o");
    ::STRINGS[52] = uString::Const("p");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[54] = uString::Const("r");
    ::STRINGS[55] = uString::Const("u");
    ::STRINGS[56] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[57] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 p,q;vec4 s(vec2 t,mat4 u){return vec4(((t.x*u[0].x)+(t.y*u[1].x))+u[3].x,((t.x*u[0].y)+(t.y*u[1].y))+u[3].y,((t.x*u[0].z)+(t.y*u[1].z))+u[3].z,((t.x*u[0].w)+(t.y*u[1].w))+u[3].w);}void main(){vec2 t=a*c;vec2 u=t+d;p=((((f*(u/f))-g)/h)*i)+j;q=t;gl_Position=s(u,e);}");
    ::STRINGS[58] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform sampler2D r;varying vec2 p,q;void main(){vec4 t=(b?vec4(float(0)):texture2D(r,p))*k;vec4 u=vec4(t.xyz,t.w*(clamp(.5-(((length(q)-l)*m)*n),float(0),float(1))*float(1)));gl_FragColor=vec4((u.xyz*u.w)*o,u.w*o);}");
    ::STRINGS[59] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=a*b;n=p;gl_Position=o(p+c,d);}");
    ::STRINGS[60] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(n,k),min(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[61] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(n,k),max(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[62] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 k;vec4 l(vec2 m,mat4 n){return vec4(((m.x*n[0].x)+(m.y*n[1].x))+n[3].x,((m.x*n[0].y)+(m.y*n[1].y))+n[3].y,((m.x*n[0].z)+(m.y*n[1].z))+n[3].z,((m.x*n[0].w)+(m.y*n[1].w))+n[3].w);}void main(){vec2 m=a*b;k=m;gl_Position=l(m+c,d);}");
    ::STRINGS[63] = uString::Const("uniform float e,f,g,h,j;uniform vec3 i;varying vec2 k;void main(){vec4 m=vec4(i,h*(clamp(.5-(((length(k)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((m.xyz*m.w)*j,m.w*j);}");
    ::STRINGS[64] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float q;varying vec2 r;vec4 t(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}float u(vec2 v,vec2 w,float x){vec2 y=(v*e)-f;float z=dot(y,w)/x;return (z-g.x)/g.y;}void main(){vec2 v=a*b;vec2 w=v+c;q=u(w/e,l,m);r=v;gl_Position=t(w,d);}");
    ::STRINGS[65] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(r,n),min(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[66] = uString::Const("s");
    ::STRINGS[67] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(r,n),max(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[68] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float n;varying vec2 o;vec4 q(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}float r(vec2 s,vec2 t,float u){vec2 v=(s*e)-f;float w=dot(v,t)/u;return (w-g.x)/g.y;}void main(){vec2 s=a*b;vec2 t=s+c;n=r(t/e,l,m);o=s;gl_Position=q(t,d);}");
    ::STRINGS[69] = uString::Const("uniform float h,i,j,k;uniform sampler2D p;varying float n;varying vec2 o;void main(){vec4 s=texture2D(p,vec2(n,.5));vec4 t=vec4(s.xyz,s.w*(clamp(.5-(((length(o)-h)*i)*j),float(0),float(1))*float(1)));gl_FragColor=vec4((t.xyz*t.w)*k,t.w*k);}");
    ::STRINGS[70] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 m;vec4 n(vec2 o,mat4 p){return vec4(((o.x*p[0].x)+(o.y*p[1].x))+p[3].x,((o.x*p[0].y)+(o.y*p[1].y))+p[3].y,((o.x*p[0].z)+(o.y*p[1].z))+p[3].z,((o.x*p[0].w)+(o.y*p[1].w))+p[3].w);}void main(){vec2 o=a*b;m=o;gl_Position=n(o+c,d);}");
    ::STRINGS[71] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(m,j),min(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[72] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(m,j),max(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[73] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 j;vec4 k(vec2 l,mat4 m){return vec4(((l.x*m[0].x)+(l.y*m[1].x))+m[3].x,((l.x*m[0].y)+(l.y*m[1].y))+m[3].y,((l.x*m[0].z)+(l.y*m[1].z))+m[3].z,((l.x*m[0].w)+(l.y*m[1].w))+m[3].w);}void main(){vec2 l=a*b;j=l;gl_Position=k(l+c,d);}");
    ::STRINGS[74] = uString::Const("uniform float e,f,g,h;uniform vec3 i;varying vec2 j;void main(){vec4 l=vec4(i,h*(clamp(.5-(((length(j)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((l.xyz*l.w)*1.,l.w);}");
    ::STRINGS[75] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float s;varying vec2 t;vec4 v(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}float w(vec2 x,vec2 y,float z){vec2 A=(x*e)-f;float B=dot(A,y)/z;return (B-g.x)/g.y;}void main(){vec2 x=a*b;vec2 y=x+c;s=w(y/e,n,o);t=x;gl_Position=v(y,d);}");
    ::STRINGS[76] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[77] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float p;varying vec2 q;vec4 s(vec2 u,mat4 v){return vec4(((u.x*v[0].x)+(u.y*v[1].x))+v[3].x,((u.x*v[0].y)+(u.y*v[1].y))+v[3].y,((u.x*v[0].z)+(u.y*v[1].z))+v[3].z,((u.x*v[0].w)+(u.y*v[1].w))+v[3].w);}float t(vec2 u,vec2 v,float w){vec2 x=(u*e)-f;float y=dot(x,v)/w;return (y-g.x)/g.y;}void main(){vec2 u=a*b;vec2 v=u+c;p=t(v/e,n,o);q=u;gl_Position=s(v,d);}");
    ::STRINGS[78] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D r;varying float p;varying vec2 q;void main(){vec4 u=texture2D(r,vec2(p,.5));vec4 v=vec4(u.xyz,u.w*(clamp(.5-(((abs((length(q)-h)-i)-j)*k)*l),float(0),float(1))*float(1)));gl_FragColor=vec4((v.xyz*v.w)*m,v.w*m);}");
    ::STRINGS[79] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 u,v;vec4 x(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}void main(){vec2 y=a*c;vec2 z=y+d;u=((((f*(z/f))-g)/h)*i)+j;v=y;gl_Position=x(z,e);}");
    ::STRINGS[80] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((min(dot(v,r),min(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[81] = uString::Const("t");
    ::STRINGS[82] = uString::Const("w");
    ::STRINGS[83] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((max(dot(v,r),max(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[84] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 r,s;vec4 u(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}void main(){vec2 v=a*c;vec2 w=v+d;r=((((f*(w/f))-g)/h)*i)+j;s=v;gl_Position=u(w,e);}");
    ::STRINGS[85] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform sampler2D t;varying vec2 r,s;void main(){vec4 v=(b?vec4(float(0)):texture2D(t,r))*k;vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((abs((length(s)-l)-m)-n)*o)*p),float(0),float(1))*float(1)));gl_FragColor=vec4((w.xyz*w.w)*q,w.w*q);}");
    ::STRINGS[86] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=a*b;p=r;gl_Position=q(r+c,d);}");
    ::STRINGS[87] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(p,m),min(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[88] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(p,m),max(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[89] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec3 k;varying vec2 m;void main(){vec4 o=vec4(k,j*(clamp(.5-(((abs((length(m)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((o.xyz*o.w)*l,o.w*l);}");
    ::STRINGS[90] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[91] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=a*b;o=q;gl_Position=p(q+c,d);}");
    ::STRINGS[92] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(o,l),min(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[93] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(o,l),max(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[94] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 l;vec4 m(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}void main(){vec2 n=a*b;l=n;gl_Position=m(n+c,d);}");
    ::STRINGS[95] = uString::Const("uniform float e,f,g,h,i,j;uniform vec3 k;varying vec2 l;void main(){vec4 n=vec4(k,j*(clamp(.5-(((abs((length(l)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((n.xyz*n.w)*1.,n.w);}");
    ::STRINGS[96] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float t;varying vec2 u,v,w;vec4 y(vec2 z,mat4 A){return vec4(((z.x*A[0].x)+(z.y*A[1].x))+A[3].x,((z.x*A[0].y)+(z.y*A[1].y))+A[3].y,((z.x*A[0].z)+(z.y*A[1].z))+A[3].z,((z.x*A[0].w)+(z.y*A[1].w))+A[3].w);}void main(){vec2 z=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;t=f[int(c)];u=((((i*(z/i))-j)/k)*l)+m;v=z;w=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=y(z,h);}");
    ::STRINGS[97] = uString::Const("uniform vec4 n;uniform float o,p,q,r,s;uniform sampler2D x;varying float t;varying vec2 u,v,w;void main(){vec4 z=(e?vec4(float(0)):texture2D(x,u))*n;vec4 A=vec4(z.xyz,z.w*clamp(.5-(((abs((distance(v,w)-t)-o)-p)*q)*r),float(0),float(1)));gl_FragColor=vec4((A.xyz*A.w)*s,A.w*s);}");
    ::STRINGS[98] = uString::Const("x");
    ::STRINGS[99] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float o;varying vec2 p,q;vec4 r(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}void main(){vec2 s=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;o=e[int(c)];p=s;q=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=r(s,g);}");
    ::STRINGS[100] = uString::Const("uniform float h,i,j,k,l,n;uniform vec3 m;varying float o;varying vec2 p,q;void main(){vec4 s=vec4(m,l*clamp(.5-(((abs((distance(p,q)-o)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((s.xyz*s.w)*n,s.w*n);}");
    ::STRINGS[101] = uString::Const("uniform float e[d],q;uniform vec2 f,h,i,j,p;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;vec4 w(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}float x(vec2 y,vec2 z,float A){vec2 B=(y*h)-i;float C=dot(B,z)/A;return (C-j.x)/j.y;}void main(){vec2 y=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=x(y/h,p,q);t=y;u=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=w(y,g);}");
    ::STRINGS[102] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){vec4 y=texture2D(v,vec2(s,.5));vec4 z=vec4(y.xyz,y.w*clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1)));gl_FragColor=vec4((z.xyz*z.w)*o,z.w*o);}");
    ::STRINGS[103] = uString::Const("v");
    ::STRINGS[104] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=r;p=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=q(r,g);}");
    ::STRINGS[105] = uString::Const("uniform float h,i,j,k,l;uniform vec3 m;varying float n;varying vec2 o,p;void main(){vec4 r=vec4(m,l*clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((r.xyz*r.w)*1.,r.w);}");
    ::STRINGS[106] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float r;varying vec2 s,t,u;vec4 w(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}void main(){vec2 x=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;r=f[int(c)];s=((((i*(x/i))-j)/k)*l)+m;t=x;u=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=w(x,h);}");
    ::STRINGS[107] = uString::Const("uniform vec4 n;uniform float o,p,q;uniform sampler2D v;varying float r;varying vec2 s,t,u;void main(){vec4 x=(e?vec4(float(0)):texture2D(v,s))*n;vec4 y=vec4(x.xyz,x.w*clamp(.5-(((distance(t,u)-r)*o)*p),float(0),float(1)));gl_FragColor=vec4((y.xyz*y.w)*q,y.w*q);}");
    ::STRINGS[108] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=q;o=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=p(q,g);}");
    ::STRINGS[109] = uString::Const("uniform float h,i,j,l;uniform vec3 k;varying float m;varying vec2 n,o;void main(){vec4 q=vec4(k,j*clamp(.5-(((distance(n,o)-m)*h)*i),float(0),float(1)));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[110] = uString::Const("uniform float e[d],o;uniform vec2 f,h,i,j,n;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p,q;varying vec2 r,s;vec4 u(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}float v(vec2 w,vec2 x,float y){vec2 z=(w*h)-i;float A=dot(z,x)/y;return (A-j.x)/j.y;}void main(){vec2 w=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=v(w/h,n,o);r=w;s=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=u(w,g);}");
    ::STRINGS[111] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){vec4 w=texture2D(t,vec2(q,.5));vec4 x=vec4(w.xyz,w.w*clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1)));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[112] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float l;varying vec2 m,n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;l=e[int(c)];m=p;n=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=o(p,g);}");
    ::STRINGS[113] = uString::Const("uniform float h,i,j;uniform vec3 k;varying float l;varying vec2 m,n;void main(){vec4 p=vec4(k,j*clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1)));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d6b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d6c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d82_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle32dc887c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle32dc887d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d90_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d91_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d92_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c58d6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5eefb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5eefc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5eefd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5eefe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5fe03_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5fe04_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5fe05_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle35a5fe06_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d6b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d6c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d82_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle32dc887c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle32dc887d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d90_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d91_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d92_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c58d6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5eefb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5eefc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5eefd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5eefe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5fe03_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5fe04_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5fe05_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle35a5fe06_;
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.27.10/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter1ef54105_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[115/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseEffects_bundle::Blurec489e30_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform mat...*/], ::STRINGS[117/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"e"*/]));
    FuseEffects_bundle::Desaturatec68ecebc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform mat...*/], ::STRINGS[119/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseEffects_bundle::EffectHelpers19f0dc38_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"attribute v...*/], ::STRINGS[121/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpers36c238d5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform vec...*/], ::STRINGS[123/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[37/*"m"*/]));
    FuseEffects_bundle::EffectHelpers4273de51_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform vec...*/], ::STRINGS[125/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[81/*"t"*/]));
    FuseEffects_bundle::EffectHelpersde6318b0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"attribute v...*/], ::STRINGS[127/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseEffects_bundle::Halftoneb6f474d8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[129/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[53/*"q"*/]));
    FuseEffects_bundle::Mask76ebab4c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"uniform mat...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/]));
    FuseEffects_bundle::Mask76ebab4d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"uniform mat...*/], ::STRINGS[132/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/]));
    FuseEffects_bundle::Mask76ebab4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"uniform mat...*/], ::STRINGS[133/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/]));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    ::STRINGS[114] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[115] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[116] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[117] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){vec4 f=texture2D(e,d);gl_FragColor=vec4(f.xyz/f.w,f.w);}");
    ::STRINGS[118] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[119] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/g.w,g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[120] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[121] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[122] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[123] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[37] = uString::Const("m");
    ::STRINGS[124] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[125] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[81] = uString::Const("t");
    ::STRINGS[126] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[127] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[128] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[129] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[130] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d,e;void main(){vec2 h=true?vec2(a.x,float(1)-a.y):a;d=h;e=vec2(h.x,float(1)-h.y);gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[131] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);gl_FragColor=vec4(i.xyz,i.w*texture2D(g,e).w);}");
    ::STRINGS[132] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);gl_FragColor=vec4(i.xyz,i.w*texture2D(g,e).x);}");
    ::STRINGS[133] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);vec4 j=texture2D(g,e);gl_FragColor=vec4(i.xyz*j.xyz,i.w*j.w);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter1ef54105_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blurec489e30_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturatec68ecebc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers19f0dc38_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers36c238d5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers4273de51_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersde6318b0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftoneb6f474d8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4e_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter1ef54105_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blurec489e30_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturatec68ecebc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers19f0dc38_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers36c238d5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers4273de51_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersde6318b0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftoneb6f474d8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4e_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.10/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper09c90965_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[134/*"uniform vec...*/], ::STRINGS[135/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[17/*"g"*/]));
    FuseElements_bundle::ElementBatch47d0cb7a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform mat...*/], ::STRINGS[137/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    FuseElements_bundle::Scale9Rectangle3a507581_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform flo...*/], ::STRINGS[139/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[52/*"p"*/], ::STRINGS[54/*"r"*/]));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    ::STRINGS[134] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[135] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[136] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[137] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[138] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[139] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[37] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[51] = uString::Const("o");
    ::STRINGS[52] = uString::Const("p");
    ::STRINGS[54] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper09c90965_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatch47d0cb7a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle3a507581_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper09c90965_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatch47d0cb7a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle3a507581_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promisea0cdfa42_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[141/*"es6-promise...*/]);
    FuseReactive_bundle::EventTargetaaf86e32_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[142/*"eventtarget...*/]);
    FuseReactive_bundle::fetcheb6d0143_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[143/*"fetch-90f6b...*/]);
    FuseReactive_bundle::File077d012d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[144/*"file-870ea4...*/]);
    FuseReactive_bundle::localStorage2ff373b9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[145/*"localstorag...*/]);
    FuseReactive_bundle::Observablefdbc69f4_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[146/*"observable-...*/]);
    FuseReactive_bundle::SubscriberProxycad54389_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[147/*"subscriberp...*/]);
    FuseReactive_bundle::Window03a0dcb9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[148/*"window-4234...*/]);
    FuseReactive_bundle::WindowBase648abbf06a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[149/*"windowbase6...*/]);
    FuseReactive_bundle::WindowTimersfc99e78b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[150/*"windowtimer...*/]);
    FuseReactive_bundle::XMLHttpRequest911f2659_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[140/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[151/*"xmlhttprequ...*/]);
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    ::STRINGS[140] = uString::Const("Fuse.Reactive");
    ::STRINGS[141] = uString::Const("es6-promise-50b2740f.js");
    ::STRINGS[142] = uString::Const("eventtarget-bf1b1eff.js");
    ::STRINGS[143] = uString::Const("fetch-90f6b0d0.js");
    ::STRINGS[144] = uString::Const("file-870ea4a8.js");
    ::STRINGS[145] = uString::Const("localstorage-d30dc034.js");
    ::STRINGS[146] = uString::Const("observable-b4b458ef.js");
    ::STRINGS[147] = uString::Const("subscriberproxy-705ef316.js");
    ::STRINGS[148] = uString::Const("window-42340274.js");
    ::STRINGS[149] = uString::Const("windowbase64-2dd63ce5.js");
    ::STRINGS[150] = uString::Const("windowtimers-9fb43406.js");
    ::STRINGS[151] = uString::Const("xmlhttprequest-33b4b514.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promisea0cdfa42_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::EventTargetaaf86e32_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::fetcheb6d0143_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::File077d012d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::localStorage2ff373b9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observablefdbc69f4_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::SubscriberProxycad54389_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Window03a0dcb9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::WindowBase648abbf06a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::WindowTimersfc99e78b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::XMLHttpRequest911f2659_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promisea0cdfa42_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::EventTargetaaf86e32_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::fetcheb6d0143_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::File077d012d_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::localStorage2ff373b9_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observablefdbc69f4_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::SubscriberProxycad54389_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Window03a0dcb9_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::WindowBase648abbf06a_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::WindowTimersfc99e78b_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::XMLHttpRequest911f2659_;
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/package
// --------------------------------------------------------------

// public static generated class FuseThemes_bundle :0
// {
// static FuseThemes_bundle() :0
static void FuseThemes_bundle__cctor__fn(uType* __type)
{
    FuseThemes_bundle::RobotoRegularf37b616b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[152/*"Fuse.Themes"*/]))->GetFile(::STRINGS[10/*"roboto-regu...*/]);
}

uClassType* FuseThemes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseThemes_bundle", options);
    type->fp_cctor_ = FuseThemes_bundle__cctor__fn;
    ::STRINGS[152] = uString::Const("Fuse.Themes");
    ::STRINGS[10] = uString::Const("roboto-regular-f5456817.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseThemes_bundle::RobotoRegularf37b616b_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseThemes_bundle::RobotoRegularf37b616b_;
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno#1
// --------------------------------------------------------------

// internal sealed class FuseThemes_FuseControlsScrollView_KeepFocusInView_Property :118
// {
::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseControlsScrollView_KeepFocusInView_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnSet_fn;
    ::TYPES[14] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseThemes_FuseControlsScrollView_KeepFocusInView_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj) :121
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__ctor_1_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj) :121
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, FuseThemes_FuseControlsScrollView_KeepFocusInView_Property** __retval)
{
    *__retval = FuseThemes_FuseControlsScrollView_KeepFocusInView_Property::New1(obj);
}

// protected override sealed bool OnGet() :122
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnGet_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// protected override sealed void OnSet(bool v, object origin) :123
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnSet_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public FuseThemes_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj) [instance] :121
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property::ctor_1(::g::Fuse::Controls::ScrollView* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj) [static] :121
FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* FuseThemes_FuseControlsScrollView_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollView* obj)
{
    FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* obj1 = (FuseThemes_FuseControlsScrollView_KeepFocusInView_Property*)uNew(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno#1
// --------------------------------------------------------------

// internal sealed class FuseThemes_FuseControlsScrollView_UserScroll_Property :111
// {
::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseControlsScrollView_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseControlsScrollView_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseControlsScrollView_UserScroll_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseControlsScrollView_UserScroll_Property__OnSet_fn;
    ::TYPES[14] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseThemes_FuseControlsScrollView_UserScroll_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj) :114
void FuseThemes_FuseControlsScrollView_UserScroll_Property__ctor_1_fn(FuseThemes_FuseControlsScrollView_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj) :114
void FuseThemes_FuseControlsScrollView_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, FuseThemes_FuseControlsScrollView_UserScroll_Property** __retval)
{
    *__retval = FuseThemes_FuseControlsScrollView_UserScroll_Property::New1(obj);
}

// protected override sealed bool OnGet() :115
void FuseThemes_FuseControlsScrollView_UserScroll_Property__OnGet_fn(FuseThemes_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// protected override sealed void OnSet(bool v, object origin) :116
void FuseThemes_FuseControlsScrollView_UserScroll_Property__OnSet_fn(FuseThemes_FuseControlsScrollView_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public FuseThemes_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj) [instance] :114
void FuseThemes_FuseControlsScrollView_UserScroll_Property::ctor_1(::g::Fuse::Controls::ScrollView* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj) [static] :114
FuseThemes_FuseControlsScrollView_UserScroll_Property* FuseThemes_FuseControlsScrollView_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView* obj)
{
    FuseThemes_FuseControlsScrollView_UserScroll_Property* obj1 = (FuseThemes_FuseControlsScrollView_UserScroll_Property*)uNew(FuseThemes_FuseControlsScrollView_UserScroll_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno#1
// --------------------------------------------------------------

// internal sealed class FuseThemes_FuseGesturesScroller_UserScroll_Property :97
// {
::g::Uno::UX::Property_type* FuseThemes_FuseGesturesScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseGesturesScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseGesturesScroller_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseGesturesScroller_UserScroll_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseGesturesScroller_UserScroll_Property__OnSet_fn;
    ::TYPES[15] = ::g::Fuse::Gestures::Scroller_typeof();
    type->SetFields(2,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::FuseThemes_FuseGesturesScroller_UserScroll_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj) :100
void FuseThemes_FuseGesturesScroller_UserScroll_Property__ctor_1_fn(FuseThemes_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj) :100
void FuseThemes_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, FuseThemes_FuseGesturesScroller_UserScroll_Property** __retval)
{
    *__retval = FuseThemes_FuseGesturesScroller_UserScroll_Property::New1(obj);
}

// protected override sealed bool OnGet() :101
void FuseThemes_FuseGesturesScroller_UserScroll_Property__OnGet_fn(FuseThemes_FuseGesturesScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// protected override sealed void OnSet(bool v, object origin) :102
void FuseThemes_FuseGesturesScroller_UserScroll_Property__OnSet_fn(FuseThemes_FuseGesturesScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public FuseThemes_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj) [instance] :100
void FuseThemes_FuseGesturesScroller_UserScroll_Property::ctor_1(::g::Fuse::Gestures::Scroller* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj) [static] :100
FuseThemes_FuseGesturesScroller_UserScroll_Property* FuseThemes_FuseGesturesScroller_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj)
{
    FuseThemes_FuseGesturesScroller_UserScroll_Property* obj1 = (FuseThemes_FuseGesturesScroller_UserScroll_Property*)uNew(FuseThemes_FuseGesturesScroller_UserScroll_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno#1
// --------------------------------------------------------------

// internal sealed class FuseThemes_FuseTriggersWhileTrue_Value_Property :104
// {
::g::Uno::UX::Property_type* FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseTriggersWhileTrue_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseTriggersWhileTrue_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseTriggersWhileTrue_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseTriggersWhileTrue_Value_Property__OnSet_fn;
    ::TYPES[13] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::FuseThemes_FuseTriggersWhileTrue_Value_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj) :107
void FuseThemes_FuseTriggersWhileTrue_Value_Property__ctor_1_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj) :107
void FuseThemes_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, FuseThemes_FuseTriggersWhileTrue_Value_Property** __retval)
{
    *__retval = FuseThemes_FuseTriggersWhileTrue_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :108
void FuseThemes_FuseTriggersWhileTrue_Value_Property__OnGet_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :109
void FuseThemes_FuseTriggersWhileTrue_Value_Property__OnSet_fn(FuseThemes_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public FuseThemes_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj) [instance] :107
void FuseThemes_FuseTriggersWhileTrue_Value_Property::ctor_1(::g::Fuse::Triggers::WhileTrue* obj)
{
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj) [static] :107
FuseThemes_FuseTriggersWhileTrue_Value_Property* FuseThemes_FuseTriggersWhileTrue_Value_Property::New1(::g::Fuse::Triggers::WhileTrue* obj)
{
    FuseThemes_FuseTriggersWhileTrue_Value_Property* obj1 = (FuseThemes_FuseTriggersWhileTrue_Value_Property*)uNew(FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/.uno/package
// -------------------------------------------------------------

// public static generated class FuseVideo_bundle :0
// {
// static FuseVideo_bundle() :0
static void FuseVideo_bundle__cctor__fn(uType* __type)
{
    FuseVideo_bundle::Scale9Rectanglea63d6a3e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[153/*"uniform flo...*/], ::STRINGS[154/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[18/*"i"*/], ::STRINGS[19/*"j"*/], ::STRINGS[20/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[37/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[51/*"o"*/], ::STRINGS[53/*"q"*/]));
    FuseVideo_bundle::VideoDrawElement369fdefc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[155/*"uniform mat...*/], ::STRINGS[156/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[17/*"g"*/]));
}

uClassType* FuseVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseVideo_bundle", options);
    type->fp_cctor_ = FuseVideo_bundle__cctor__fn;
    ::STRINGS[153] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[154] = uString::Const("uniform samplerExternalOES q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[19] = uString::Const("j");
    ::STRINGS[20] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[37] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[51] = uString::Const("o");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[155] = uString::Const("uniform mat4 e,b;uniform vec2 c,d;attribute vec2 a;varying vec2 f;void main(){f=(a*c)+d;gl_Position=b*(e*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[156] = uString::Const("uniform samplerExternalOES g;varying vec2 f;void main(){gl_FragColor=vec4(texture2D(g,vec2(f.x,f.y)).xyz,1.);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseVideo_bundle::Scale9Rectanglea63d6a3e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseVideo_bundle::VideoDrawElement369fdefc_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseVideo_bundle::Scale9Rectanglea63d6a3e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseVideo_bundle::VideoDrawElement369fdefc_;
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/.uno/package
// ----------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShader06541a00_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[157/*"uniform mat...*/], ::STRINGS[158/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"i"*/]));
    UnoCore_bundle::SpriteFontShaderf730f5ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[159/*"uniform mat...*/], ::STRINGS[160/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[17/*"g"*/]));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    ::STRINGS[157] = uString::Const("uniform mat4 d;attribute vec2 a,b;attribute vec4 c;varying vec2 g;varying vec4 h;void main(){g=b;h=c;gl_Position=d*vec4(a,float(0),float(1));}");
    ::STRINGS[158] = uString::Const("uniform float e,f;uniform sampler2D i;varying vec2 g;varying vec4 h;void main(){float j=smoothstep(e,f,texture2D(i,g).x);if (j<.15) discard;gl_FragColor=h*vec4(float(1),float(1),float(1),j);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[18] = uString::Const("i");
    ::STRINGS[159] = uString::Const("uniform mat4 d;attribute vec2 a,c;attribute vec4 b;varying vec2 e;varying vec4 f;void main(){e=c;f=b;gl_Position=d*vec4(a,float(0),float(1));}");
    ::STRINGS[160] = uString::Const("uniform sampler2D g;varying vec2 e;varying vec4 f;void main(){gl_FragColor=f*vec4(float(1),float(1),float(1),texture2D(g,e).x);}");
    ::STRINGS[17] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShader06541a00_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShaderf730f5ae_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShader06541a00_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShaderf730f5ae_;
// }

} // ::g
