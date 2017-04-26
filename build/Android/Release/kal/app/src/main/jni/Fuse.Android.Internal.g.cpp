// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.Internal.Bitmap.h>
#include <Fuse.Android.Internal.Canvas.h>
#include <Fuse.Android.Internal.GLUtils.h>
#include <Fuse.Android.Internal.StaticLayout.Alignment.h>
#include <Fuse.Android.Internal.StaticLayout.h>
#include <Fuse.Android.Internal.TextPaint.h>
#include <Fuse.Android.Internal.TextUtils.h>
#include <Fuse.Android.Internal.TextUtils.TruncateAt.h>
#include <Fuse.Android.Typeface.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Android{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#3
// -------------------------------------------------------------------

// public enum StaticLayout.Alignment :158
uEnumType* StaticLayout__Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.Internal.StaticLayout.Alignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Normal", 1LL,
        "Opposite", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class Bitmap :14
// {
uType* Bitmap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.Bitmap", options);
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Internal::Bitmap, _handle), 0);
    return type;
}

// public Bitmap(Java.Object handle) :23
void Bitmap__ctor__fn(Bitmap* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public static Fuse.Android.Internal.Bitmap CreateBitmapARGB8888(int width, int height) :33
void Bitmap__CreateBitmapARGB8888_fn(int* width, int* height, Bitmap** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888(*width, *height);
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) :50
void Bitmap__CreateBitmapARGB8888Impl_fn(int* width, int* height, ::g::Java::Object** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888Impl(*width, *height);
}

// public void EraseColor(float4 color) :28
void Bitmap__EraseColor_fn(Bitmap* __this, ::g::Uno::Float4* color)
{
    __this->EraseColor(*color);
}

// private static void EraseColor(Java.Object handle, int color) :56
void Bitmap__EraseColor1_fn(::g::Java::Object* handle, int* color)
{
    Bitmap::EraseColor1(handle, *color);
}

// public Java.Object get_Handle() :18
void Bitmap__get_Handle_fn(Bitmap* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Bitmap New(Java.Object handle) :23
void Bitmap__New1_fn(::g::Java::Object* handle, Bitmap** __retval)
{
    *__retval = Bitmap::New1(handle);
}

// public void Recycle() :38
void Bitmap__Recycle_fn(Bitmap* __this)
{
    __this->Recycle();
}

// private static void Recycle(Java.Object handle) :44
void Bitmap__Recycle1_fn(::g::Java::Object* handle)
{
    Bitmap::Recycle1(handle);
}

// public Bitmap(Java.Object handle) [instance] :23
void Bitmap::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void EraseColor(float4 color) [instance] :28
void Bitmap::EraseColor(::g::Uno::Float4 color)
{
    Bitmap::EraseColor1(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(color));
}

// public Java.Object get_Handle() [instance] :18
::g::Java::Object* Bitmap::Handle()
{
    return _handle;
}

// public void Recycle() [instance] :38
void Bitmap::Recycle()
{
    Bitmap::Recycle1(Handle());
}

// public static Fuse.Android.Internal.Bitmap CreateBitmapARGB8888(int width, int height) [static] :33
Bitmap* Bitmap::CreateBitmapARGB8888(int width, int height)
{
    return Bitmap::New1(Bitmap::CreateBitmapARGB8888Impl(width, height));
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) [static] :50
::g::Java::Object* Bitmap::CreateBitmapARGB8888Impl(int width, int height)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmapARGB8888Impl56", "(II)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(jint)width,(jint)height);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void EraseColor(Java.Object handle, int color) [static] :56
void Bitmap::EraseColor1(::g::Java::Object* handle, int color)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EraseColor157", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Bitmap New(Java.Object handle) [static] :23
Bitmap* Bitmap::New1(::g::Java::Object* handle)
{
    Bitmap* obj1 = (Bitmap*)uNew(Bitmap_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// private static void Recycle(Java.Object handle) [static] :44
void Bitmap::Recycle1(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Recycle158", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#1
// -------------------------------------------------------------------

// internal sealed extern class Canvas :78
// {
uType* Canvas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Canvas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.Canvas", options);
    ::TYPES[0] = ::g::Fuse::Android::Internal::Bitmap_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Internal::Canvas, _handle), 0);
    return type;
}

// public Canvas(Fuse.Android.Internal.Bitmap bitmap) :92
void Canvas__ctor__fn(Canvas* __this, ::g::Fuse::Android::Internal::Bitmap* bitmap)
{
    __this->ctor_(bitmap);
}

// public Canvas(Java.Object handle) :87
void Canvas__ctor_1_fn(Canvas* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private static Java.Object Create(Java.Object bitmapHandle) :106
void Canvas__Create_fn(::g::Java::Object* bitmapHandle, ::g::Java::Object** __retval)
{
    *__retval = Canvas::Create(bitmapHandle);
}

// public Java.Object get_Handle() :82
void Canvas__get_Handle_fn(Canvas* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Canvas New(Fuse.Android.Internal.Bitmap bitmap) :92
void Canvas__New1_fn(::g::Fuse::Android::Internal::Bitmap* bitmap, Canvas** __retval)
{
    *__retval = Canvas::New1(bitmap);
}

// public void Translate(float dx, float dy) :94
void Canvas__Translate_fn(Canvas* __this, float* dx, float* dy)
{
    __this->Translate(*dx, *dy);
}

// private static void Translate(Java.Object handle, float dx, float dy) :100
void Canvas__Translate1_fn(::g::Java::Object* handle, float* dx, float* dy)
{
    Canvas::Translate1(handle, *dx, *dy);
}

// public Canvas(Fuse.Android.Internal.Bitmap bitmap) [instance] :92
void Canvas::ctor_(::g::Fuse::Android::Internal::Bitmap* bitmap)
{
    ctor_1(Canvas::Create(uPtr(bitmap)->Handle()));
}

// public Canvas(Java.Object handle) [instance] :87
void Canvas::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :82
::g::Java::Object* Canvas::Handle()
{
    return _handle;
}

// public void Translate(float dx, float dy) [instance] :94
void Canvas::Translate(float dx, float dy)
{
    Canvas::Translate1(Handle(), dx, dy);
}

// private static Java.Object Create(Java.Object bitmapHandle) [static] :106
::g::Java::Object* Canvas::Create(::g::Java::Object* bitmapHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create59", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Canvas New(Fuse.Android.Internal.Bitmap bitmap) [static] :92
Canvas* Canvas::New1(::g::Fuse::Android::Internal::Bitmap* bitmap)
{
    Canvas* obj2 = (Canvas*)uNew(Canvas_typeof());
    obj2->ctor_(bitmap);
    return obj2;
}

// private static void Translate(Java.Object handle, float dx, float dy) [static] :100
void Canvas::Translate1(::g::Java::Object* handle, float dx, float dy)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Translate160", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jfloat)dx,(jfloat)dy);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#2
// -------------------------------------------------------------------

// internal sealed extern class GLUtils :127
// {
uType* GLUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GLUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.GLUtils", options);
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Android::Internal::Bitmap_typeof();
    return type;
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) :135
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border)
{
    GLUtils::TexImage2D(*target, *level, bitmap, *border);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Internal.Bitmap bitmap, int border) :129
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Internal::Bitmap* bitmap, int* border)
{
    GLUtils::TexImage2D1(*target, *level, bitmap, *border);
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) [static] :135
void GLUtils::TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "TexImage2D61", "(IILjava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(jint)target,(jint)level,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)border);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Internal.Bitmap bitmap, int border) [static] :129
void GLUtils::TexImage2D1(int target, int level, ::g::Fuse::Android::Internal::Bitmap* bitmap, int border)
{
    GLUtils::TexImage2D(target, level, uPtr(bitmap)->Handle(), border);
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#3
// -------------------------------------------------------------------

// internal sealed extern class StaticLayout :156
// {
uType* StaticLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StaticLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.StaticLayout", options);
    ::TYPES[2] = ::g::Fuse::Android::Internal::TextPaint_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Android::Internal::Canvas_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Internal::StaticLayout, _handle), 0);
    return type;
}

// public StaticLayout(Java.Object handle) :172
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public StaticLayout(string text, Fuse.Android.Internal.TextPaint paint, int width, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :177
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::Internal::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad)
{
    __this->ctor_1(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.Internal.TextPaint paint, int outerWidth, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.Internal.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :188
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::Internal::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith)
{
    __this->ctor_2(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) :335
void StaticLayout__Create_fn(uString* text, int* bufStart, int* bufEnd, ::g::Java::Object* paintHandle, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create(text, *bufStart, *bufEnd, paintHandle, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) :315
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create1(text, paintHandle, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public void Draw(Fuse.Android.Internal.Canvas canvas) :248
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Internal::Canvas* canvas)
{
    __this->Draw(canvas);
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) :254
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    StaticLayout::Draw1(layoutHandle, canvasHandle);
}

// public int get_EllipsizedWidth() :215
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->EllipsizedWidth();
}

// public static float GetDesiredWidth(string text, Fuse.Android.Internal.TextPaint paint) :203
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::Internal::TextPaint* paint, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidth(text, paint);
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) :302
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidthImpl(text, paintHandle);
}

// private static int GetEllipsizedWidth(Java.Object handle) :272
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetEllipsizedWidth(handle);
}

// private static int GetHeight(Java.Object handle) :260
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetHeight(handle);
}

// public int GetLineBaseline(int line) :243
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineBaseline(*line);
}

// private static int GetLineBaseline(Java.Object handle, int line) :278
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineBaseline1(handle, *line);
}

// private static int GetLineCount(Java.Object handle) :309
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetLineCount(handle);
}

// public int GetLineEnd(int line) :233
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineEnd(*line);
}

// private static int GetLineEnd(Java.Object handle, int line) :296
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineEnd1(handle, *line);
}

// public float GetLineLeft(int line) :238
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int* line, float* __retval)
{
    *__retval = __this->GetLineLeft(*line);
}

// private static float GetLineLeft(Java.Object handle, int line) :284
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int* line, float* __retval)
{
    *__retval = StaticLayout::GetLineLeft1(handle, *line);
}

// public int GetLineStart(int line) :228
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineStart(*line);
}

// private static int GetLineStart(Java.Object handle, int line) :290
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineStart1(handle, *line);
}

// private static int GetWidth(Java.Object handle) :266
void StaticLayout__GetWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetWidth(handle);
}

// public Java.Object get_Handle() :167
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public int get_Height() :220
void StaticLayout__get_Height_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public int get_LineCount() :210
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public StaticLayout New(string text, Fuse.Android.Internal.TextPaint paint, int width, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :177
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::Internal::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval)
{
    *__retval = StaticLayout::New2(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.Internal.TextPaint paint, int outerWidth, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.Internal.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :188
void StaticLayout__New3_fn(uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::Internal::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, StaticLayout** __retval)
{
    *__retval = StaticLayout::New3(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// public int get_Width() :225
void StaticLayout__get_Width_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->Width();
}

// public StaticLayout(Java.Object handle) [instance] :172
void StaticLayout::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public StaticLayout(string text, Fuse.Android.Internal.TextPaint paint, int width, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [instance] :177
void StaticLayout::ctor_1(uString* text, ::g::Fuse::Android::Internal::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    ctor_(StaticLayout::Create1(text, uPtr(paint)->Handle(), width, align, spacingMult, spacingAdd, includePad));
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.Internal.TextPaint paint, int outerWidth, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.Internal.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [instance] :188
void StaticLayout::ctor_2(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::Internal::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    ctor_(StaticLayout::Create(text, bufStart, bufEnd, uPtr(paint)->Handle(), outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith));
}

// public void Draw(Fuse.Android.Internal.Canvas canvas) [instance] :248
void StaticLayout::Draw(::g::Fuse::Android::Internal::Canvas* canvas)
{
    StaticLayout::Draw1(Handle(), uPtr(canvas)->Handle());
}

// public int get_EllipsizedWidth() [instance] :215
int StaticLayout::EllipsizedWidth()
{
    return StaticLayout::GetEllipsizedWidth(Handle());
}

// public int GetLineBaseline(int line) [instance] :243
int StaticLayout::GetLineBaseline(int line)
{
    return StaticLayout::GetLineBaseline1(Handle(), line);
}

// public int GetLineEnd(int line) [instance] :233
int StaticLayout::GetLineEnd(int line)
{
    return StaticLayout::GetLineEnd1(Handle(), line);
}

// public float GetLineLeft(int line) [instance] :238
float StaticLayout::GetLineLeft(int line)
{
    return StaticLayout::GetLineLeft1(Handle(), line);
}

// public int GetLineStart(int line) [instance] :228
int StaticLayout::GetLineStart(int line)
{
    return StaticLayout::GetLineStart1(Handle(), line);
}

// public Java.Object get_Handle() [instance] :167
::g::Java::Object* StaticLayout::Handle()
{
    return _handle;
}

// public int get_Height() [instance] :220
int StaticLayout::Height()
{
    return StaticLayout::GetHeight(Handle());
}

// public int get_LineCount() [instance] :210
int StaticLayout::LineCount()
{
    return StaticLayout::GetLineCount(Handle());
}

// public int get_Width() [instance] :225
int StaticLayout::Width()
{
    return StaticLayout::GetWidth(Handle());
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) [static] :335
::g::Java::Object* StaticLayout::Create(uString* text, int bufStart, int bufEnd, ::g::Java::Object* paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create62", "(Ljava/lang/String;IILjava/lang/Object;IIFFZII)Ljava/lang/Object;");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_text,(jint)bufStart,(jint)bufEnd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)outerWidth,(jint)align,(jfloat)spacingMult,(jfloat)spacingAdd,(jboolean)includePad,(jint)truncateAt,(jint)ellipsizedWith);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) [static] :315
::g::Java::Object* StaticLayout::Create1(uString* text, ::g::Java::Object* paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create163", "(Ljava/lang/String;Ljava/lang/Object;IIFFZ)Ljava/lang/Object;");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_text,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)width,(jint)align,(jfloat)spacingMult,(jfloat)spacingAdd,(jboolean)includePad);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) [static] :254
void StaticLayout::Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Draw164", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)layoutHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)canvasHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static float GetDesiredWidth(string text, Fuse.Android.Internal.TextPaint paint) [static] :203
float StaticLayout::GetDesiredWidth(uString* text, ::g::Fuse::Android::Internal::TextPaint* paint)
{
    return StaticLayout::GetDesiredWidthImpl(text, uPtr(paint)->Handle());
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) [static] :302
float StaticLayout::GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDesiredWidthImpl65", "(Ljava/lang/String;Ljava/lang/Object;)F");
        jstring _text = JniHelper::UnoToJavaString(text);
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,_text,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        float __result = (float)__jresult;
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetEllipsizedWidth(Java.Object handle) [static] :272
int StaticLayout::GetEllipsizedWidth(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEllipsizedWidth66", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :260
int StaticLayout::GetHeight(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight67", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineBaseline(Java.Object handle, int line) [static] :278
int StaticLayout::GetLineBaseline1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineBaseline168", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineCount(Java.Object handle) [static] :309
int StaticLayout::GetLineCount(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineCount69", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineEnd(Java.Object handle, int line) [static] :296
int StaticLayout::GetLineEnd1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineEnd170", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static float GetLineLeft(Java.Object handle, int line) [static] :284
float StaticLayout::GetLineLeft1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineLeft171", "(Ljava/lang/Object;I)F");
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)line);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineStart(Java.Object handle, int line) [static] :290
int StaticLayout::GetLineStart1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineStart172", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetWidth(Java.Object handle) [static] :266
int StaticLayout::GetWidth(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWidth73", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public StaticLayout New(string text, Fuse.Android.Internal.TextPaint paint, int width, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [static] :177
StaticLayout* StaticLayout::New2(uString* text, ::g::Fuse::Android::Internal::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    StaticLayout* obj2 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj2->ctor_1(text, paint, width, align, spacingMult, spacingAdd, includePad);
    return obj2;
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.Internal.TextPaint paint, int outerWidth, Fuse.Android.Internal.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.Internal.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [static] :188
StaticLayout* StaticLayout::New3(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::Internal::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    StaticLayout* obj3 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj3->ctor_2(text, bufStart, bufEnd, paint, outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#4
// -------------------------------------------------------------------

// internal sealed extern class TextPaint :381
// {
uType* TextPaint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TextPaint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.TextPaint", options);
    type->fp_ctor_ = (void*)TextPaint__New1_fn;
    ::TYPES[4] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[6] = ::g::Fuse::Android::Typeface_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Internal::TextPaint, _handle), 0);
    return type;
}

// public TextPaint() :390
void TextPaint__ctor__fn(TextPaint* __this)
{
    __this->ctor_();
}

// public TextPaint(Java.Object handle) :392
void TextPaint__ctor_1_fn(TextPaint* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void set_AntiAlias(bool value) :399
void TextPaint__set_AntiAlias_fn(TextPaint* __this, bool* value)
{
    __this->AntiAlias(*value);
}

// public void set_Color(float4 value) :421
void TextPaint__set_Color_fn(TextPaint* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private static Java.Object Create() :460
void TextPaint__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextPaint::Create();
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) :431
void TextPaint__GetTextBounds_fn(::g::Java::Object* handle, uString* text, int* start, int* end, uArray* r)
{
    TextPaint::GetTextBounds(handle, text, *start, *end, r);
}

// public Uno.Rect GetTextBounds(string text, int start, int end) :402
void TextPaint__GetTextBounds1_fn(TextPaint* __this, uString* text, int* start, int* end, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetTextBounds1(text, *start, *end);
}

// public Java.Object get_Handle() :385
void TextPaint__get_Handle_fn(TextPaint* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public TextPaint New() :390
void TextPaint__New1_fn(TextPaint** __retval)
{
    *__retval = TextPaint::New1();
}

// private static void SetAntiAlias(Java.Object handle, bool value) :442
void TextPaint__SetAntiAlias_fn(::g::Java::Object* handle, bool* value)
{
    TextPaint::SetAntiAlias(handle, *value);
}

// private static void SetColor(Java.Object handle, int color) :425
void TextPaint__SetColor_fn(::g::Java::Object* handle, int* color)
{
    TextPaint::SetColor(handle, *color);
}

// private static void SetTextSize(Java.Object handle, float textSize) :454
void TextPaint__SetTextSize_fn(::g::Java::Object* handle, float* textSize)
{
    TextPaint::SetTextSize(handle, *textSize);
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) :448
void TextPaint__SetTypeface_fn(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    TextPaint::SetTypeface(paintHandle, typefaceHandle);
}

// public void set_TextSize(float value) :416
void TextPaint__set_TextSize_fn(TextPaint* __this, float* value)
{
    __this->TextSize(*value);
}

// public void set_Typeface(Fuse.Android.Typeface value) :411
void TextPaint__set_Typeface_fn(TextPaint* __this, ::g::Fuse::Android::Typeface* value)
{
    __this->Typeface(value);
}

// public TextPaint() [instance] :390
void TextPaint::ctor_()
{
    ctor_1(TextPaint::Create());
}

// public TextPaint(Java.Object handle) [instance] :392
void TextPaint::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_AntiAlias(bool value) [instance] :399
void TextPaint::AntiAlias(bool value)
{
    TextPaint::SetAntiAlias(Handle(), value);
}

// public void set_Color(float4 value) [instance] :421
void TextPaint::Color(::g::Uno::Float4 value)
{
    TextPaint::SetColor(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(value));
}

// public Uno.Rect GetTextBounds(string text, int start, int end) [instance] :402
::g::Uno::Rect TextPaint::GetTextBounds1(uString* text, int start, int end)
{
    uArray* r = uArray::New(::TYPES[4/*int[]*/], 4);
    TextPaint::GetTextBounds(Handle(), text, start, end, r);
    return ::g::Uno::Rect__New1((float)r->Item<int>(0), (float)r->Item<int>(1), (float)r->Item<int>(2), (float)r->Item<int>(3));
}

// public Java.Object get_Handle() [instance] :385
::g::Java::Object* TextPaint::Handle()
{
    return _handle;
}

// public void set_TextSize(float value) [instance] :416
void TextPaint::TextSize(float value)
{
    TextPaint::SetTextSize(Handle(), value);
}

// public void set_Typeface(Fuse.Android.Typeface value) [instance] :411
void TextPaint::Typeface(::g::Fuse::Android::Typeface* value)
{
    TextPaint::SetTypeface(Handle(), uPtr(value)->Handle());
}

// private static Java.Object Create() [static] :460
::g::Java::Object* TextPaint::Create()
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create74", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) [static] :431
void TextPaint::GetTextBounds(::g::Java::Object* handle, uString* text, int start, int end, uArray* r)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTextBounds75", "(Ljava/lang/Object;Ljava/lang/String;IILcom/uno/IntArray;)V");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject _r = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(r);
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),_text,(jint)start,(jint)end,_r);
        
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        if (_r!=NULL) { _jni->DeleteLocalRef(_r); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextPaint New() [static] :390
TextPaint* TextPaint::New1()
{
    TextPaint* obj1 = (TextPaint*)uNew(TextPaint_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetAntiAlias(Java.Object handle, bool value) [static] :442
void TextPaint::SetAntiAlias(::g::Java::Object* handle, bool value)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAntiAlias76", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jboolean)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetColor(Java.Object handle, int color) [static] :425
void TextPaint::SetColor(::g::Java::Object* handle, int color)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetColor77", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextSize(Java.Object handle, float textSize) [static] :454
void TextPaint::SetTextSize(::g::Java::Object* handle, float textSize)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextSize78", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jfloat)textSize);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) [static] :448
void TextPaint::SetTypeface(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTypeface79", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)typefaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#5
// -------------------------------------------------------------------

// internal sealed extern class TextUtils :482
// {
uType* TextUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Internal.TextUtils", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#5
// -------------------------------------------------------------------

// public enum TextUtils.TruncateAt :484
uEnumType* TextUtils__TruncateAt_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.Internal.TextUtils.TruncateAt", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "End", 0LL,
        "Marquee", 1LL,
        "Middle", 2LL,
        "Start", 3LL);
    return type;
}

}}}} // ::g::Fuse::Android::Internal
