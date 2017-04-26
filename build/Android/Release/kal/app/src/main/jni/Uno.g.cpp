// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Bootstrapper.h>
#include <cmath>
#include <uBase/String.h>
#include <uBase/Traits.h>
#include <uBase/Unicode.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Color.h>
#include <Uno.ColorHelper.h>
#include <Uno.Comparison-1.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.FormatException.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.GC.h>
#include <Uno.Generic.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.InvalidCastException.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.NullReferenceException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.OverflowException.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <Uno.Runtime.Implementation.ArraySortImpl.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <Uno.Runtime.Implementation.Internal.ArrayList-1.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.Vector.h>
#include <Uno.WeakReference-1.h>
#include <Uno/Support.h>
static uString* STRINGS[41];
static uType* TYPES[37];

namespace g{
namespace Uno{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno
// --------------------------------------------------------------

// public delegate void Action() :8
uDelegateType* Action_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno
// --------------------------------------------------------------

// public delegate void Action<T>(T arg) :11
uDelegateType* Action1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`1", 1, 1);
    type->SetSignature(uVoid_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno
// --------------------------------------------------------------

// public delegate void Action<T1, T2>(T1 arg1, T2 arg2) :14
uDelegateType* Action2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`2", 2, 2);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno
// --------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :20
uDelegateType* Action4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`4", 4, 4);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno
// -------------------------------------------------------------------------

// public sealed class AggregateException :9
// {
::g::Uno::Exception_type* AggregateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(AggregateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.AggregateException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[0] = uString::Const("One or more errors occurred.");
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[1] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetFields(3,
        ::g::Uno::Exception_typeof()->Array(), offsetof(::g::Uno::AggregateException, _innerExceptions), 0);
    return type;
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) :36
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions)
{
    __this->ctor_5(message, innerExceptions);
}

// public AggregateException(Uno.Exception[] innerExceptions) :26
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions)
{
    __this->ctor_6(innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() :14
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval)
{
    *__retval = __this->InnerExceptions();
}

// public AggregateException New(Uno.Exception[] innerExceptions) :26
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New7(innerExceptions);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) [instance] :36
void AggregateException::ctor_5(uString* message, uArray* innerExceptions)
{
    ctor_1(message);
    _innerExceptions = innerExceptions;
}

// public AggregateException(Uno.Exception[] innerExceptions) [instance] :26
void AggregateException::ctor_6(uArray* innerExceptions)
{
    ctor_5(::STRINGS[0/*"One or more...*/], innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() [instance] :14
::g::Uno::Collections::ReadOnlyCollection* AggregateException::InnerExceptions()
{
    ::g::Uno::Runtime::Implementation::Internal::ArrayList* wrapper = (::g::Uno::Runtime::Implementation::Internal::ArrayList*)::g::Uno::Runtime::Implementation::Internal::ArrayList::New1(::TYPES[0/*Uno.Runtime.Implementation.Internal.ArrayList<Uno.Exception>*/], _innerExceptions);
    return (::g::Uno::Collections::ReadOnlyCollection*)::g::Uno::Collections::ReadOnlyCollection::New1(::TYPES[1/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], (uObject*)wrapper);
}

// public AggregateException New(Uno.Exception[] innerExceptions) [static] :26
AggregateException* AggregateException::New7(uArray* innerExceptions)
{
    AggregateException* obj2 = (AggregateException*)uNew(AggregateException_typeof());
    obj2->ctor_6(innerExceptions);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#1
// ----------------------------------------------------------------

// public abstract class Application :71
// {
uType* Application_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Application", options);
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Uno::Application, _ClearColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Application, _ClearDepth), 0,
        ::g::Uno::Graphics::GraphicsContext_typeof(), offsetof(::g::Uno::Application, _GraphicsContext), 0,
        ::g::Uno::Platform::Window_typeof(), offsetof(::g::Uno::Application, _Window), 0,
        Application_typeof(), (uintptr_t)&::g::Uno::Application::_Current_, uFieldFlagsStatic);
    return type;
}

// protected Application() :108
void Application__ctor__fn(Application* __this)
{
    __this->ctor_();
}

// public generated float4 get_ClearColor() :93
void Application__get_ClearColor_fn(Application* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public generated void set_ClearColor(float4 value) :94
void Application__set_ClearColor_fn(Application* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// public generated float get_ClearDepth() :99
void Application__get_ClearDepth_fn(Application* __this, float* __retval)
{
    *__retval = __this->ClearDepth();
}

// protected generated void set_ClearDepth(float value) :100
void Application__set_ClearDepth_fn(Application* __this, float* value)
{
    __this->ClearDepth(*value);
}

// public static generated Uno.Application get_Current() :75
void Application__get_Current_fn(Application** __retval)
{
    *__retval = Application::Current();
}

// internal static generated void set_Current(Uno.Application value) :76
void Application__set_Current_fn(Application* value)
{
    Application::Current(value);
}

// public void Draw() :131
void Application__Draw_fn(Application* __this)
{
    __this->Draw();
}

// public generated Uno.Graphics.GraphicsContext get_GraphicsContext() :87
void Application__get_GraphicsContext_fn(Application* __this, ::g::Uno::Graphics::GraphicsContext** __retval)
{
    *__retval = __this->GraphicsContext();
}

// private generated void set_GraphicsContext(Uno.Graphics.GraphicsContext value) :88
void Application__set_GraphicsContext_fn(Application* __this, ::g::Uno::Graphics::GraphicsContext* value)
{
    __this->GraphicsContext(value);
}

// public void Load() :123
void Application__Load_fn(Application* __this)
{
    __this->Load();
}

// public bool get_NeedsRedraw() :105
void Application__get_NeedsRedraw_fn(Application* __this, bool* __retval)
{
    *__retval = __this->NeedsRedraw();
}

// public void Update() :127
void Application__Update_fn(Application* __this)
{
    __this->Update();
}

// public generated Uno.Platform.Window get_Window() :81
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval)
{
    *__retval = __this->Window();
}

// private generated void set_Window(Uno.Platform.Window value) :82
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value)
{
    __this->Window(value);
}

uSStrong<Application*> Application::_Current_;

// protected Application() [instance] :108
void Application::ctor_()
{
    ::g::Android::Bootstrapper::_RegisterTypes();

    if (Application::Current() == NULL)
        Application::Current(this);

    Window(::g::Uno::Platform::Window::New1());
    GraphicsContext(::g::Uno::Graphics::GraphicsContext::New1());
    ClearColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ClearDepth(1.0f);
}

// public generated float4 get_ClearColor() [instance] :93
::g::Uno::Float4 Application::ClearColor()
{
    return _ClearColor;
}

// public generated void set_ClearColor(float4 value) [instance] :94
void Application::ClearColor(::g::Uno::Float4 value)
{
    _ClearColor = value;
}

// public generated float get_ClearDepth() [instance] :99
float Application::ClearDepth()
{
    return _ClearDepth;
}

// protected generated void set_ClearDepth(float value) [instance] :100
void Application::ClearDepth(float value)
{
    _ClearDepth = value;
}

// public void Draw() [instance] :131
void Application::Draw()
{
}

// public generated Uno.Graphics.GraphicsContext get_GraphicsContext() [instance] :87
::g::Uno::Graphics::GraphicsContext* Application::GraphicsContext()
{
    return _GraphicsContext;
}

// private generated void set_GraphicsContext(Uno.Graphics.GraphicsContext value) [instance] :88
void Application::GraphicsContext(::g::Uno::Graphics::GraphicsContext* value)
{
    _GraphicsContext = value;
}

// public void Load() [instance] :123
void Application::Load()
{
}

// public bool get_NeedsRedraw() [instance] :105
bool Application::NeedsRedraw()
{
    return true;
}

// public void Update() [instance] :127
void Application::Update()
{
}

// public generated Uno.Platform.Window get_Window() [instance] :81
::g::Uno::Platform::Window* Application::Window()
{
    return _Window;
}

// private generated void set_Window(Uno.Platform.Window value) [instance] :82
void Application::Window(::g::Uno::Platform::Window* value)
{
    _Window = value;
}

// public static generated Uno.Application get_Current() [static] :75
Application* Application::Current()
{
    return Application::_Current();
}

// internal static generated void set_Current(Uno.Application value) [static] :76
void Application::Current(Application* value)
{
    Application::_Current() = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#1
// ---------------------------------------------------------------------------

// public class ArgumentException :52
// {
::g::Uno::Exception_type* ArgumentException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[1] = uString::Const(": ");
    type->SetFields(3);
    return type;
}

// public ArgumentException(string message) :54
void ArgumentException__ctor_3_fn(ArgumentException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ArgumentException(string message, string paramName) :59
void ArgumentException__ctor_4_fn(ArgumentException* __this, uString* message, uString* paramName)
{
    __this->ctor_4(message, paramName);
}

// public ArgumentException New(string message) :54
void ArgumentException__New4_fn(uString* message, ArgumentException** __retval)
{
    *__retval = ArgumentException::New4(message);
}

// public ArgumentException New(string message, string paramName) :59
void ArgumentException__New5_fn(uString* message, uString* paramName, ArgumentException** __retval)
{
    *__retval = ArgumentException::New5(message, paramName);
}

// public ArgumentException(string message) [instance] :54
void ArgumentException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ArgumentException(string message, string paramName) [instance] :59
void ArgumentException::ctor_4(uString* message, uString* paramName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(paramName, ::STRINGS[1/*": "*/]), message));
}

// public ArgumentException New(string message) [static] :54
ArgumentException* ArgumentException::New4(uString* message)
{
    ArgumentException* obj1 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj1->ctor_3(message);
    return obj1;
}

// public ArgumentException New(string message, string paramName) [static] :59
ArgumentException* ArgumentException::New5(uString* message, uString* paramName)
{
    ArgumentException* obj2 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj2->ctor_4(message, paramName);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#2
// ---------------------------------------------------------------------------

// public sealed class ArgumentNullException :74
// {
::g::Uno::Exception_type* ArgumentNullException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentNullException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentNullException", options);
    type->SetBase(::g::Uno::ArgumentException_typeof());
    ::STRINGS[2] = uString::Const("value was null");
    type->SetFields(3);
    return type;
}

// public ArgumentNullException(string paramName) :76
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentNullException New(string paramName) :76
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval)
{
    *__retval = ArgumentNullException::New6(paramName);
}

// public ArgumentNullException(string paramName) [instance] :76
void ArgumentNullException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[2/*"value was n...*/], paramName);
}

// public ArgumentNullException New(string paramName) [static] :76
ArgumentNullException* ArgumentNullException::New6(uString* paramName)
{
    ArgumentNullException* obj1 = (ArgumentNullException*)uNew(ArgumentNullException_typeof());
    obj1->ctor_5(paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#3
// ---------------------------------------------------------------------------

// public sealed class ArgumentOutOfRangeException :91
// {
::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentOutOfRangeException", options);
    type->SetBase(::g::Uno::ArgumentException_typeof());
    ::STRINGS[3] = uString::Const("value out of range");
    type->SetFields(3);
    return type;
}

// public ArgumentOutOfRangeException(string paramName) :98
void ArgumentOutOfRangeException__ctor_5_fn(ArgumentOutOfRangeException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) :93
void ArgumentOutOfRangeException__ctor_6_fn(ArgumentOutOfRangeException* __this, uString* message, uString* paramName)
{
    __this->ctor_6(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) :98
void ArgumentOutOfRangeException__New6_fn(uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New6(paramName);
}

// public ArgumentOutOfRangeException New(string message, string paramName) :93
void ArgumentOutOfRangeException__New7_fn(uString* message, uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New7(message, paramName);
}

// public ArgumentOutOfRangeException(string paramName) [instance] :98
void ArgumentOutOfRangeException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[3/*"value out o...*/], paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) [instance] :93
void ArgumentOutOfRangeException::ctor_6(uString* message, uString* paramName)
{
    ctor_4(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) [static] :98
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New6(uString* paramName)
{
    ArgumentOutOfRangeException* obj2 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj2->ctor_5(paramName);
    return obj2;
}

// public ArgumentOutOfRangeException New(string message, string paramName) [static] :93
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New7(uString* message, uString* paramName)
{
    ArgumentOutOfRangeException* obj1 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj1->ctor_6(message, paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#2
// ----------------------------------------------------------------

// public static class Array :145
// {
uClassType* Array_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Array", options);
    ::TYPES[3] = ::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof();
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ArraySortImpl_typeof();
    return type;
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :152
void Array__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    Array::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) :147
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int* length)
{
    Array::Copy1(__type, sourceArray, destinationArray, *length);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :164
void Array__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    Array::Sort(__type, elements, *index, *length, comparison);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :152
void Array::Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uType* __types[] = {
        ::TYPES[3/*Uno.Runtime.Implementation.ArrayCopyImpl*/]->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    ::g::Uno::Runtime::Implementation::ArrayCopyImpl::Copy(__types[0], sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) [static] :147
void Array::Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int length)
{
    uType* __types[] = {
        ::TYPES[3/*Uno.Runtime.Implementation.ArrayCopyImpl*/]->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    ::g::Uno::Runtime::Implementation::ArrayCopyImpl::Copy(__types[0], sourceArray, 0, destinationArray, 0, length);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :164
void Array::Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        ::TYPES[4/*Uno.Runtime.Implementation.ArraySortImpl*/]->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    ::g::Uno::Runtime::Implementation::ArraySortImpl::Sort(__types[0], elements, index, length, comparison);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#7
// ----------------------------------------------------------------

// public intrinsic struct Bool :266
// {
uStructType* Bool_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(bool);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Bool", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Bool__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Bool__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Bool__ToString_fn;
    ::STRINGS[4] = uString::Const("String");
    ::STRINGS[5] = uString::Const("true");
    ::STRINGS[6] = uString::Const("false");
    ::STRINGS[7] = uString::Const("Unable to convert string to bool");
    return type;
}

// public override sealed bool Equals(object o) :269
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Bool_typeof(), *__this, U_ALLOCA(Bool_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :275
void Bool__GetHashCode_fn(bool* __this, uType* __type, int* __retval)
{
    return *__retval = *__this ? 1 : 0, void();
}

// public static bool Parse(string str) :296
void Bool__Parse_fn(uString* str, bool* __retval)
{
    *__retval = Bool::Parse(str);
}

// public override sealed string ToString() :286
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval)
{
    return *__retval = uString::Const(*__this ? "True" : "False"), void();
}

// public static bool Parse(string str) [static] :296
bool Bool::Parse(uString* str)
{
    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"String"*/]));

    uString* trimmedStr = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(str))));

    if (::g::Uno::String::op_Equality(trimmedStr, ::STRINGS[5/*"true"*/]))
        return true;

    if (::g::Uno::String::op_Equality(trimmedStr, ::STRINGS[6/*"false"*/]))
        return false;

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Unable to c...*/]));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#8
// ----------------------------------------------------------------

// public sealed class Buffer :346
// {
uType* Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Buffer", options);
    ::STRINGS[8] = uString::Const("Buffer is read only");
    ::TYPES[5] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Byte4_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::Buffer, _data), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Buffer, _isReadOnly), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Buffer, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Buffer, _sizeInBytes), 0);
    return type;
}

// public Buffer(byte[] data) :371
void Buffer__ctor__fn(Buffer* __this, uArray* data)
{
    __this->ctor_(data);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :363
void Buffer__ctor_1_fn(Buffer* __this, uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly)
{
    __this->ctor_1(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer(int sizeInBytes) :376
void Buffer__ctor_2_fn(Buffer* __this, int* sizeInBytes)
{
    __this->ctor_2(*sizeInBytes);
}

// public byte GetByte(int offset) :460
void Buffer__GetByte_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->GetByte(*offset);
}

// internal byte[] get_GetHandle() :393
void Buffer__get_GetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->GetHandle();
}

// public byte get_Item(int offset) :419
void Buffer__get_Item_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->Item(*offset);
}

// public void set_Item(int offset, byte value) :420
void Buffer__set_Item_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Item(*offset, *value);
}

// public Buffer New(byte[] data) :371
void Buffer__New1_fn(uArray* data, Buffer** __retval)
{
    *__retval = Buffer::New1(data);
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :363
void Buffer__New2_fn(uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly, Buffer** __retval)
{
    *__retval = Buffer::New2(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer New(int sizeInBytes) :376
void Buffer__New3_fn(int* sizeInBytes, Buffer** __retval)
{
    *__retval = Buffer::New3(*sizeInBytes);
}

// public void Set(int offset, byte value) :466
void Buffer__Set_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Set(*offset, *value);
}

// public void Set(int offset, byte4 value) :489
void Buffer__Set2_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* value)
{
    __this->Set2(*offset, *value);
}

// public void Set(int offset, float value, [bool littleEndian]) :660
void Buffer__Set4_fn(Buffer* __this, int* offset, float* value, bool* littleEndian)
{
    __this->Set4(*offset, *value, *littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) :671
void Buffer__Set5_fn(Buffer* __this, int* offset, ::g::Uno::Float2* value, bool* littleEndian)
{
    __this->Set5(*offset, *value, *littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) :683
void Buffer__Set6_fn(Buffer* __this, int* offset, ::g::Uno::Float3* value, bool* littleEndian)
{
    __this->Set6(*offset, *value, *littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) :696
void Buffer__Set8_fn(Buffer* __this, int* offset, ::g::Uno::Float4* value, bool* littleEndian)
{
    __this->Set8(*offset, *value, *littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) :540
void Buffer__Set23_fn(Buffer* __this, int* offset, uint16_t* value, bool* littleEndian)
{
    __this->Set23(*offset, *value, *littleEndian);
}

// internal byte[] get_SetHandle() :398
void Buffer__get_SetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->SetHandle();
}

// public int get_SizeInBytes() :388
void Buffer__get_SizeInBytes_fn(Buffer* __this, int* __retval)
{
    *__retval = __this->SizeInBytes();
}

// public Buffer(byte[] data) [instance] :371
void Buffer::ctor_(uArray* data)
{
    ctor_1(data, 0, uPtr(data)->Length(), true);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [instance] :363
void Buffer::ctor_1(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    _data = data;
    _offset = offset;
    _sizeInBytes = sizeInBytes;
    _isReadOnly = isReadOnly;
}

// public Buffer(int sizeInBytes) [instance] :376
void Buffer::ctor_2(int sizeInBytes)
{
    ctor_1(uArray::New(::TYPES[5/*byte[]*/], sizeInBytes), 0, sizeInBytes, false);
}

// public byte GetByte(int offset) [instance] :460
uint8_t Buffer::GetByte(int offset)
{
    return uPtr(GetHandle())->Item<uint8_t>(_offset + offset);
}

// internal byte[] get_GetHandle() [instance] :393
uArray* Buffer::GetHandle()
{
    return _data;
}

// public byte get_Item(int offset) [instance] :419
uint8_t Buffer::Item(int offset)
{
    return GetByte(offset);
}

// public void set_Item(int offset, byte value) [instance] :420
void Buffer::Item(int offset, uint8_t value)
{
    Set(offset, value);
}

// public void Set(int offset, byte value) [instance] :466
void Buffer::Set(int offset, uint8_t value)
{
    uPtr(SetHandle())->Item<uint8_t>(_offset + offset) = value;
}

// public void Set(int offset, byte4 value) [instance] :489
void Buffer::Set2(int offset, ::g::Uno::Byte4 value)
{
    Set(offset, value.X);
    Set(offset + 1, value.Y);
    Set(offset + 2, value.Z);
    Set(offset + 3, value.W);
}

// public void Set(int offset, float value, [bool littleEndian]) [instance] :660
void Buffer::Set4(int offset, float value, bool littleEndian)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(SetHandle(), _offset + offset, value, littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) [instance] :671
void Buffer::Set5(int offset, ::g::Uno::Float2 value, bool littleEndian)
{
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) [instance] :683
void Buffer::Set6(int offset, ::g::Uno::Float3 value, bool littleEndian)
{
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) [instance] :696
void Buffer::Set8(int offset, ::g::Uno::Float4 value, bool littleEndian)
{
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
    Set4(offset + 12, value.W, littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) [instance] :540
void Buffer::Set23(int offset, uint16_t value, bool littleEndian)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(SetHandle(), _offset + offset, value, littleEndian);
}

// internal byte[] get_SetHandle() [instance] :398
uArray* Buffer::SetHandle()
{
    if (_isReadOnly)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[8/*"Buffer is r...*/]));

    return _data;
}

// public int get_SizeInBytes() [instance] :388
int Buffer::SizeInBytes()
{
    return _sizeInBytes;
}

// public Buffer New(byte[] data) [static] :371
Buffer* Buffer::New1(uArray* data)
{
    Buffer* obj2 = (Buffer*)uNew(Buffer_typeof());
    obj2->ctor_(data);
    return obj2;
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [static] :363
Buffer* Buffer::New2(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    Buffer* obj1 = (Buffer*)uNew(Buffer_typeof());
    obj1->ctor_1(data, offset, sizeInBytes, isReadOnly);
    return obj1;
}

// public Buffer New(int sizeInBytes) [static] :376
Buffer* Buffer::New3(int sizeInBytes)
{
    Buffer* obj3 = (Buffer*)uNew(Buffer_typeof());
    obj3->ctor_2(sizeInBytes);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#10
// -----------------------------------------------------------------

// public intrinsic struct Byte :800
// {
uStructType* Byte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte__ToString_fn;
    ::STRINGS[9] = uString::Const("Value was either too large or too small for an unsigned byte");
    ::STRINGS[10] = uString::Const("Unable to convert string to unsigned byte");
    return type;
}

// public override sealed bool Equals(object o) :806
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint8_t>(Byte_typeof(), *__this, U_ALLOCA(Byte_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :812
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :823
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#12
// -----------------------------------------------------------------

// public intrinsic struct Byte4 :981
// {
uStructType* Byte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Byte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte4", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte4__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[10] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::g::Uno::Byte_typeof(), offsetof(::g::Uno::Byte4, X), 0,
        ::g::Uno::Byte_typeof(), offsetof(::g::Uno::Byte4, Y), 0,
        ::g::Uno::Byte_typeof(), offsetof(::g::Uno::Byte4, Z), 0,
        ::g::Uno::Byte_typeof(), offsetof(::g::Uno::Byte4, W), 0);
    return type;
}

// public Byte4(byte x, byte y, byte z, byte w) :1016
void Byte4__ctor_1_fn(Byte4* __this, uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public override sealed bool Equals(object o) :1042
void Byte4__Equals_fn(Byte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Byte4_typeof(), *__this, U_ALLOCA(Byte4_typeof()->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :1043
void Byte4__GetHashCode_fn(Byte4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Byte4_typeof(), *__this, U_ALLOCA(Byte4_typeof()->ObjectSize)), &ret8), ret8), void();
}

// public Byte4 New(byte x, byte y, byte z, byte w) :1016
void Byte4__New2_fn(uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w, Byte4* __retval)
{
    *__retval = Byte4__New2(*x, *y, *z, *w);
}

// public override sealed string ToString() :1044
void Byte4__ToString_fn(Byte4* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[10/*byte*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[10/*byte*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Byte::ToString(__this->Z, ::TYPES[10/*byte*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Byte::ToString(__this->W, ::TYPES[10/*byte*/])), void();
}

// public Byte4(byte x, byte y, byte z, byte w) [instance] :1016
void Byte4::ctor_1(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Byte4 New(byte x, byte y, byte z, byte w) [static] :1016
Byte4 Byte4__New2(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    Byte4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#13
// -----------------------------------------------------------------

// public intrinsic struct Char :1062
// {
uStructType* Char_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uChar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Char", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Char__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Char__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Char__ToString_fn;
    ::STRINGS[12] = uString::Const(" \341\232\200\342\200\200\342\200\201\342\200\202\342\200\203\342\200\204\342\200\205\342\200\206\342\200\207\342\200\210\342\200\211\342\200\212\342\200\257\342\201\237\343\200\200\342\200\250\342\200\251\t\n"
        "\v\f\r\302\205\302\240");
    return type;
}

// public override sealed bool Equals(object o) :1068
void Char__Equals_fn(uChar* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uChar>(Char_typeof(), *__this, U_ALLOCA(Char_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :1074
void Char__GetHashCode_fn(uChar* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public static bool IsWhiteSpace(char c) :1148
void Char__IsWhiteSpace_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsWhiteSpace(*c);
}

// public static char ToLower(char c) :1132
void Char__ToLower_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToLower(*c);
}

// public override sealed string ToString() :1085
void Char__ToString_fn(uChar* __this, uType* __type, uString** __retval)
{
    uString* result = uString::New(1);
    result->_ptr[0] = *__this;
    return *__retval = result, void();
}

// public static char ToUpper(char c) :1116
void Char__ToUpper_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToUpper(*c);
}

// public static bool IsWhiteSpace(char c) [static] :1148
bool Char::IsWhiteSpace(uChar c)
{
    uString* whitespace = ::STRINGS[12/*" \u1680\u20...*/];
    return ::g::Uno::String::IndexOf(uPtr(whitespace), c, 0) != -1;
}

// public static char ToLower(char c) [static] :1132
uChar Char::ToLower(uChar c)
{
    return uBase::Unicode::ToLower(c);
}

// public static char ToUpper(char c) [static] :1116
uChar Char::ToUpper(uChar c)
{
    return uBase::Unicode::ToUpper(c);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#15
// -----------------------------------------------------------------

// public static class Color :1326
// {
// static Color() :1326
static void Color__cctor__fn(uType* __type)
{
    Color::ToYCbCrMat_ = ::g::Uno::Float3x3__New1(0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color::ToYCbCrMatInv_ = ::g::Uno::Float3x3__New1(1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

uClassType* Color_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Color", options);
    type->fp_cctor_ = Color__cctor__fn;
    ::STRINGS[13] = uString::Const("hex");
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Uno::Int4_typeof();
    ::TYPES[13] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&::g::Uno::Color::ToYCbCrMat_, uFieldFlagsStatic,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&::g::Uno::Color::ToYCbCrMatInv_, uFieldFlagsStatic);
    return type;
}

// public static float4 FromHex(string hex) :1477
void Color__FromHex_fn(uString* hex, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromHex(hex);
}

// public static float4 FromRgba32(int4 rgba) :1358
void Color__FromRgba32_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromRgba32(*rgba);
}

// public static int4 Rgba32FromHex(string hex) :1434
void Color__Rgba32FromHex_fn(uString* hex, ::g::Uno::Int4* __retval)
{
    *__retval = Color::Rgba32FromHex(hex);
}

::g::Uno::Float3x3 Color::ToYCbCrMat_;
::g::Uno::Float3x3 Color::ToYCbCrMatInv_;

// public static float4 FromHex(string hex) [static] :1477
::g::Uno::Float4 Color::FromHex(uString* hex)
{
    Color_typeof()->Init();
    return Color::FromRgba32(Color::Rgba32FromHex(hex));
}

// public static float4 FromRgba32(int4 rgba) [static] :1358
::g::Uno::Float4 Color::FromRgba32(::g::Uno::Int4 rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__New2((float)rgba.X / 255.0f, (float)rgba.Y / 255.0f, (float)rgba.Z / 255.0f, (float)rgba.W / 255.0f);
}

// public static int4 Rgba32FromHex(string hex) [static] :1434
::g::Uno::Int4 Color::Rgba32FromHex(uString* hex)
{
    Color_typeof()->Init();

    if ((uPtr(hex)->Length() > 0) && (uPtr(hex)->Item(0) == '#'))
        hex = ::g::Uno::String::Substring(uPtr(hex), 1);

    if (hex->Length() == 3)
    {
        int r = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(uPtr(hex), 0, 1), 16);
        int g = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 1, 1), 16);
        int b = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 2, 1), 16);
        int a = 15;
        return ::g::Uno::Int4__New2((r << 4) | r, (g << 4) | g, (b << 4) | b, (a << 4) | a);
    }
    else if (hex->Length() == 4)
    {
        int r1 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(uPtr(hex), 0, 1), 16);
        int g1 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 1, 1), 16);
        int b1 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 2, 1), 16);
        int a1 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 3, 1), 16);
        return ::g::Uno::Int4__New2((r1 << 4) | r1, (g1 << 4) | g1, (b1 << 4) | b1, (a1 << 4) | a1);
    }
    else if (hex->Length() == 6)
    {
        int r2 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(uPtr(hex), 0, 2), 16);
        int g2 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 2, 2), 16);
        int b2 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 4, 2), 16);
        int a2 = 255;
        return ::g::Uno::Int4__New2(r2, g2, b2, a2);
    }
    else if (hex->Length() == 8)
    {
        int r3 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(uPtr(hex), 0, 2), 16);
        int g3 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 2, 2), 16);
        int b3 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 4, 2), 16);
        int a3 = ::g::Uno::ColorHelper::ParseBase(::g::Uno::String::Substring1(hex, 6, 2), 16);
        return ::g::Uno::Int4__New2(r3, g3, b3, a3);
    }
    else
        U_THROW(::g::Uno::ArgumentException::New5(hex, ::STRINGS[13/*"hex"*/]));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#16
// -----------------------------------------------------------------

// internal static class ColorHelper :1560
// {
uClassType* ColorHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.ColorHelper", options);
    ::STRINGS[14] = uString::Const("charBaseValue: ");
    ::STRINGS[15] = uString::Const("base");
    ::STRINGS[16] = uString::Const("str.Length");
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::String_typeof();
    return type;
}

// private static int BaseValue(char c) :1597
void ColorHelper__BaseValue_fn(uChar* c, int* __retval)
{
    *__retval = ColorHelper::BaseValue(*c);
}

// public static int ParseBase(string str, int radix) :1562
void ColorHelper__ParseBase_fn(uString* str, int* radix, int* __retval)
{
    *__retval = ColorHelper::ParseBase(str, *radix);
}

// private static int BaseValue(char c) [static] :1597
int ColorHelper::BaseValue(uChar c)
{
    if ((c >= '0') && (c <= '9'))
        return (int)c - 48;
    else if ((c >= 'a') && (c <= 'z'))
        return ((int)c - 97) + 10;
    else if ((c >= 'A') && (c <= 'Z'))
        return ((int)c - 65) + 10;

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[14/*"charBaseVal...*/], uBox<uChar>(::g::Uno::Char_typeof(), c))));
}

// public static int ParseBase(string str, int radix) [static] :1562
int ColorHelper::ParseBase(uString* str, int radix)
{
    if ((radix < 2) || (radix > 36))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[15/*"base"*/]));

    if (uPtr(str)->Length() < 1)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[16/*"str.Length"*/]));

    int at = 0;
    bool neg = false;

    if (uPtr(str)->Item(0) == '-')
    {
        neg = true;
        at++;
    }
    else if (uPtr(str)->Item(0) == '+')
        at++;

    int value = 0;

    while (at < uPtr(str)->Length())
    {
        int v = ColorHelper::BaseValue(uPtr(str)->Item(at));

        if (v >= radix)
            U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(str));

        value = value * radix;
        value = value + v;
        at++;
    }

    if (neg)
        value = -value;

    return value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#17
// -----------------------------------------------------------------

// public delegate int Comparison<T>(T a, T b) :1619
uDelegateType* Comparison_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Comparison`1", 2, 1);
    type->SetSignature(::g::Uno::Int_typeof(),
        type->T(0),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#18
// -----------------------------------------------------------------

// public sealed class DateTime :1629
// {
uType* DateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.DateTime", options);
    ::TYPES[16] = ::g::Uno::Time::ZonedDateTime_typeof();
    ::TYPES[17] = ::g::Uno::Time::DateTimeZone_typeof();
    return type;
}

// public static Uno.Time.ZonedDateTime get_Now() :1633
void DateTime__get_Now_fn(::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = DateTime::Now();
}

// public static Uno.Time.ZonedDateTime get_UtcNow() :1641
void DateTime__get_UtcNow_fn(::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = DateTime::UtcNow();
}

// public static Uno.Time.ZonedDateTime get_Now() [static] :1633
::g::Uno::Time::ZonedDateTime* DateTime::Now()
{
    return ::g::Uno::Time::ZonedDateTime::Now();
}

// public static Uno.Time.ZonedDateTime get_UtcNow() [static] :1641
::g::Uno::Time::ZonedDateTime* DateTime::UtcNow()
{
    return uPtr(::g::Uno::Time::ZonedDateTime::Now())->WithZone(::g::Uno::Time::DateTimeZone::Utc());
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#19
// -----------------------------------------------------------------

// public class Delegate :1660
// {
uType* Delegate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Delegate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Delegate", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Delegate__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Delegate__GetHashCode_fn;
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    return type;
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) :1666
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Combine(source, value);
}

// public override sealed bool Equals(object other) :1832
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval)
{
    return *__retval = uIs(other, Delegate_typeof()) && Delegate::EqualsImpl(__this, uAs<uDelegate*>(other, Delegate_typeof())), void();
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) :1800
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::EqualsImpl(left, right);
}

// public override sealed int GetHashCode() :1837
void Delegate__GetHashCode_fn(uDelegate* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) :1822
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Equality(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) :1827
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Inequality(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) :1714
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Remove(source, value);
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) [static] :1666
uDelegate* Delegate::Combine(uDelegate* source, uDelegate* value)
{
    if (!value)
        return source;
    if (!source)
        return value;
    if (source->__type != value->__type)
        U_THROW_ICE();
    
    uDelegate copy;
    uDelegate *prev = &copy;
    
    for (uDelegate* d = value; d != NULL; d = d->_prev)
        prev = prev->_prev = d->Copy();
    
    prev->_prev = source;
    return copy._prev;
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) [static] :1800
bool Delegate::EqualsImpl(uDelegate* left, uDelegate* right)
{
    return left == right || (
            left != NULL && right != NULL &&
            left->__type == right->__type &&
            left->_func == right->_func &&
            left->_this == right->_this &&
            ::g::Uno::Object::Equals1(left->_prev, right->_prev)
        );
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) [static] :1822
bool Delegate::op_Equality(uDelegate* left, uDelegate* right)
{
    return Delegate::EqualsImpl(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) [static] :1827
bool Delegate::op_Inequality(uDelegate* left, uDelegate* right)
{
    return !Delegate::EqualsImpl(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) [static] :1714
uDelegate* Delegate::Remove(uDelegate* source, uDelegate* value)
{
    if (source == NULL || value == NULL)
        return source;
    if (value->__type != source->__type)
        U_THROW_ICE();
    
    for (uDelegate *first = source; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = value; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                d->_func != last->_func ||
                d->_this != last->_this)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = source; e != first; e = e->_prev)
                prev = prev->_prev = e->Copy();
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return source;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#20
// -----------------------------------------------------------------

// public intrinsic struct Double :1860
// {
uStructType* Double_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(double);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Double", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Double__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Double__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Double__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :1869
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Double_typeof(), *__this, U_ALLOCA(Double_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :1875
void Double__GetHashCode_fn(double* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static double Parse(string str) :1900
void Double__Parse_fn(uString* str, double* __retval)
{
    *__retval = Double::Parse(str);
}

// public override sealed string ToString() :1886
void Double__ToString_fn(double* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, double& res) :1937
void Double__TryParse_fn(uString* str, double* res, bool* __retval)
{
    *__retval = Double::TryParse(str, res);
}

// public static double Parse(string str) [static] :1900
double Double::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToDouble();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, double& res) [static] :1937
bool Double::TryParse(uString* str, double* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToDouble(res);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#21
// -----------------------------------------------------------------

// public static class Enum :2018
// {
uClassType* Enum_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Enum", options);
    ::STRINGS[17] = uString::Const("Unable to parse enum '");
    ::STRINGS[18] = uString::Const("'");
    return type;
}

// public static object Parse(Uno.Type type, string str) :2033
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval)
{
    *__retval = Enum::Parse(type, str);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) :2020
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval)
{
    *__retval = Enum::Parse1(type, str, *ignoreCase);
}

// public static object Parse(Uno.Type type, string str) [static] :2033
uObject* Enum::Parse(uType* type, uString* str)
{
    return Enum::Parse1(type, str, false);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) [static] :2020
uObject* Enum::Parse1(uType* type, uString* str, bool ignoreCase)
{
    uPtr(type);
    int64_t result;
    if (uEnum::TryParse(type, str, ignoreCase, &result))
        return uBoxPtr(type, &result);
    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[17/*"Unable to p...*/], str), ::STRINGS[18/*"'"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#23
// -----------------------------------------------------------------

// public class EventArgs :2107
// {
// static EventArgs() :2107
static void EventArgs__cctor__fn(uType* __type)
{
    EventArgs::Empty_ = EventArgs::New1();
}

uType* EventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.EventArgs", options);
    type->fp_ctor_ = (void*)EventArgs__New1_fn;
    type->fp_cctor_ = EventArgs__cctor__fn;
    type->SetFields(0,
        EventArgs_typeof(), (uintptr_t)&::g::Uno::EventArgs::Empty_, uFieldFlagsStatic);
    return type;
}

// public generated EventArgs() :2107
void EventArgs__ctor__fn(EventArgs* __this)
{
    __this->ctor_();
}

// public generated EventArgs New() :2107
void EventArgs__New1_fn(EventArgs** __retval)
{
    *__retval = EventArgs::New1();
}

uSStrong<EventArgs*> EventArgs::Empty_;

// public generated EventArgs() [instance] :2107
void EventArgs::ctor_()
{
}

// public generated EventArgs New() [static] :2107
EventArgs* EventArgs::New1()
{
    EventArgs* obj1 = (EventArgs*)uNew(EventArgs_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#24
// -----------------------------------------------------------------

// public delegate void EventHandler(object sender, Uno.EventArgs args) :2121
uDelegateType* EventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#24
// -----------------------------------------------------------------

// public delegate void EventHandler<TEventArgs>(object sender, TEventArgs args) :2124
uDelegateType* EventHandler1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#4
// ---------------------------------------------------------------------------

// public class Exception :113
// {
Exception_type* Exception_typeof()
{
    static uSStrong<Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Exception);
    options.TypeSize = sizeof(Exception_type);
    type = (Exception_type*)uClassType::New("Uno.Exception", options);
    type->fp_ctor_ = (void*)Exception__New1_fn;
    type->fp_get_Message = Exception__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Exception__ToString_fn;
    ::STRINGS[19] = uString::Const("");
    ::STRINGS[1] = uString::Const(": ");
    ::STRINGS[20] = uString::Const("\n"
        "");
    ::STRINGS[21] = uString::Const("Uno.Exception.StackTrace is not supported in this build configuration");
    ::TYPES[15] = uObject_typeof();
    type->SetFields(0,
        Exception_typeof(), offsetof(::g::Uno::Exception, _inner), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Exception, _message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Exception, _trace), 0);
    return type;
}

// public Exception() :133
void Exception__ctor__fn(Exception* __this)
{
    __this->ctor_();
}

// public Exception(string message) :138
void Exception__ctor_1_fn(Exception* __this, uString* message)
{
    __this->ctor_1(message);
}

// public Exception(string message, Uno.Exception inner) :143
void Exception__ctor_2_fn(Exception* __this, uString* message, Exception* inner)
{
    __this->ctor_2(message, inner);
}

// public virtual string get_Message() :118
void Exception__get_Message_fn(Exception* __this, uString** __retval)
{
    return *__retval = __this->_message, void();
}

// public Exception New() :133
void Exception__New1_fn(Exception** __retval)
{
    *__retval = Exception::New1();
}

// public Exception New(string message) :138
void Exception__New2_fn(uString* message, Exception** __retval)
{
    *__retval = Exception::New2(message);
}

// public string get_StackTrace() :130
void Exception__get_StackTrace_fn(Exception* __this, uString** __retval)
{
    *__retval = __this->StackTrace();
}

// public override sealed string ToString() :152
void Exception__ToString_fn(Exception* __this, uString** __retval)
{
    if (::g::Uno::String::IsNullOrEmpty(__this->_trace))
        return *__retval = __this->_message, void();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(::g::Uno::Object::GetType(__this), ::STRINGS[1/*": "*/]), __this->_message), ::STRINGS[20/*"\n"*/]), __this->_trace), void();
}

// public Exception() [instance] :133
void Exception::ctor_()
{
    ctor_1(::STRINGS[19/*""*/]);
}

// public Exception(string message) [instance] :138
void Exception::ctor_1(uString* message)
{
    ctor_2(message, NULL);
}

// public Exception(string message, Uno.Exception inner) [instance] :143
void Exception::ctor_2(uString* message, Exception* inner)
{
    _message = message;
    _inner = inner;
    _trace = uGetStackTrace();
}

// public string get_StackTrace() [instance] :130
uString* Exception::StackTrace()
{
    uString* ind1 = _trace;
    return (ind1 != NULL) ? ind1 : ::STRINGS[21/*"Uno.Excepti...*/];
}

// public Exception New() [static] :133
Exception* Exception::New1()
{
    Exception* obj2 = (Exception*)uNew(Exception_typeof());
    obj2->ctor_();
    return obj2;
}

// public Exception New(string message) [static] :138
Exception* Exception::New2(uString* message)
{
    Exception* obj3 = (Exception*)uNew(Exception_typeof());
    obj3->ctor_1(message);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#27
// -----------------------------------------------------------------

// public intrinsic struct Float :2169
// {
uStructType* Float_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(float);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :2180
void Float__Equals_fn(float* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float_typeof(), *__this, U_ALLOCA(Float_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2186
void Float__GetHashCode_fn(float* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static bool IsInfinity(float f) :2316
void Float__IsInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsInfinity(*f);
}

// public static bool IsNegativeInfinity(float f) :2306
void Float__IsNegativeInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNegativeInfinity(*f);
}

// public static bool IsPositiveInfinity(float f) :2311
void Float__IsPositiveInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsPositiveInfinity(*f);
}

// public static float Parse(string str) :2211
void Float__Parse_fn(uString* str, float* __retval)
{
    *__retval = Float::Parse(str);
}

// public override sealed string ToString() :2197
void Float__ToString_fn(float* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool IsInfinity(float f) [static] :2316
bool Float::IsInfinity(float f)
{
    return Float::IsNegativeInfinity(f) || Float::IsPositiveInfinity(f);
}

// public static bool IsNegativeInfinity(float f) [static] :2306
bool Float::IsNegativeInfinity(float f)
{
    return f == -FLT_INF;
}

// public static bool IsPositiveInfinity(float f) [static] :2311
bool Float::IsPositiveInfinity(float f)
{
    return f == FLT_INF;
}

// public static float Parse(string str) [static] :2211
float Float::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToFloat();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#28
// -----------------------------------------------------------------

// public intrinsic struct Float2 :2331
// {
uStructType* Float2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Float2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[19] = ::g::Uno::Generic_typeof()->MakeMethod(1, Float2_typeof());
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[20] = ::g::Uno::Int2_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2, X), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2, Y), 0);
    return type;
}

// public Float2(float xy) :2352
void Float2__ctor__fn(Float2* __this, float* xy)
{
    __this->ctor_(*xy);
}

// public Float2(float x, float y) :2353
void Float2__ctor_1_fn(Float2* __this, float* x, float* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :2383
void Float2__Equals_fn(Float2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float2_typeof(), *__this, U_ALLOCA(Float2_typeof()->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2384
void Float2__GetHashCode_fn(Float2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float2_typeof(), *__this, U_ALLOCA(Float2_typeof()->ObjectSize)), &ret4), ret4), void();
}

// public float get_Item(int index) :2338
void Float2__get_Item_fn(Float2* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :2344
void Float2__set_Item_fn(Float2* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float2 New(float xy) :2352
void Float2__New1_fn(float* xy, Float2* __retval)
{
    *__retval = Float2__New1(*xy);
}

// public Float2 New(float x, float y) :2353
void Float2__New2_fn(float* x, float* y, Float2* __retval)
{
    *__retval = Float2__New2(*x, *y);
}

// public static operator +(float a, float2 b) :2367
void Float2__op_Addition_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition(*a, *b);
}

// public static operator +(float2 a, float b) :2362
void Float2__op_Addition1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Addition1(*a, *b);
}

// public static operator +(float2 a, float2 b) :2357
void Float2__op_Addition2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition2(*a, *b);
}

// public static operator /(float2 a, float b) :2365
void Float2__op_Division1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Division1(*a, *b);
}

// public static operator /(float2 a, float2 b) :2360
void Float2__op_Division2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Division2(*a, *b);
}

// public static operator ==(float2 a, float2 b) :2372
void Float2__op_Equality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Equality(*a, *b);
}

// public static implicit operator float2(int2 a) :2381
void Float2__op_Implicit1_fn(::g::Uno::Int2* a, Float2* __retval)
{
    *__retval = Float2__op_Implicit1(*a);
}

// public static operator !=(float2 a, float2 b) :2373
void Float2__op_Inequality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Inequality(*a, *b);
}

// public static operator *(float a, float2 b) :2369
void Float2__op_Multiply_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply(*a, *b);
}

// public static operator *(float2 a, float b) :2364
void Float2__op_Multiply1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply1(*a, *b);
}

// public static operator *(float2 a, float2 b) :2359
void Float2__op_Multiply2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply2(*a, *b);
}

// public static operator -(float2 a, float b) :2363
void Float2__op_Subtraction1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction1(*a, *b);
}

// public static operator -(float2 a, float2 b) :2358
void Float2__op_Subtraction2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction2(*a, *b);
}

// public static operator -(float2 a) :2355
void Float2__op_UnaryNegation_fn(Float2* a, Float2* __retval)
{
    *__retval = Float2__op_UnaryNegation(*a);
}

// public override sealed string ToString() :2385
void Float2__ToString_fn(Float2* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[11/*float*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[11/*float*/])), void();
}

// public Float2(float xy) [instance] :2352
void Float2::ctor_(float xy)
{
    X = (Y = xy);
}

// public Float2(float x, float y) [instance] :2353
void Float2::ctor_1(float x, float y)
{
    X = x;
    Y = y;
}

// public float get_Item(int index) [instance] :2338
float Float2::Item(int index)
{
    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :2344
void Float2::Item(int index, float value)
{
    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float2 New(float xy) [static] :2352
Float2 Float2__New1(float xy)
{
    Float2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Float2 New(float x, float y) [static] :2353
Float2 Float2__New2(float x, float y)
{
    Float2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(float a, float2 b) [static] :2367
Float2 Float2__op_Addition(float a, Float2 b)
{
    return Float2__New2(a + b.X, a + b.Y);
}

// public static operator +(float2 a, float b) [static] :2362
Float2 Float2__op_Addition1(Float2 a, float b)
{
    return Float2__New2(a.X + b, a.Y + b);
}

// public static operator +(float2 a, float2 b) [static] :2357
Float2 Float2__op_Addition2(Float2 a, Float2 b)
{
    return Float2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(float2 a, float b) [static] :2365
Float2 Float2__op_Division1(Float2 a, float b)
{
    return Float2__New2(a.X / b, a.Y / b);
}

// public static operator /(float2 a, float2 b) [static] :2360
Float2 Float2__op_Division2(Float2 a, Float2 b)
{
    return Float2__New2(a.X / b.X, a.Y / b.Y);
}

// public static operator ==(float2 a, float2 b) [static] :2372
bool Float2__op_Equality(Float2 a, Float2 b)
{
    bool ret5;
    return (::g::Uno::Generic__Equals_fn(::TYPES[19/*Uno.Generic.Equals<float2>*/], uCRef(a), uCRef(b), &ret5), ret5);
}

// public static implicit operator float2(int2 a) [static] :2381
Float2 Float2__op_Implicit1(::g::Uno::Int2 a)
{
    return Float2__New2((float)a.X, (float)a.Y);
}

// public static operator !=(float2 a, float2 b) [static] :2373
bool Float2__op_Inequality(Float2 a, Float2 b)
{
    bool ret6;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[19/*Uno.Generic.Equals<float2>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static operator *(float a, float2 b) [static] :2369
Float2 Float2__op_Multiply(float a, Float2 b)
{
    return Float2__New2(a * b.X, a * b.Y);
}

// public static operator *(float2 a, float b) [static] :2364
Float2 Float2__op_Multiply1(Float2 a, float b)
{
    return Float2__New2(a.X * b, a.Y * b);
}

// public static operator *(float2 a, float2 b) [static] :2359
Float2 Float2__op_Multiply2(Float2 a, Float2 b)
{
    return Float2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(float2 a, float b) [static] :2363
Float2 Float2__op_Subtraction1(Float2 a, float b)
{
    return Float2__New2(a.X - b, a.Y - b);
}

// public static operator -(float2 a, float2 b) [static] :2358
Float2 Float2__op_Subtraction2(Float2 a, Float2 b)
{
    return Float2__New2(a.X - b.X, a.Y - b.Y);
}

// public static operator -(float2 a) [static] :2355
Float2 Float2__op_UnaryNegation(Float2 a)
{
    return Float2__New2(-a.X, -a.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#29
// -----------------------------------------------------------------

// public intrinsic struct Float2x2 :2397
// {
uStructType* Float2x2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Float2x2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2x2", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2x2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2x2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2x2__ToString_fn;
    ::STRINGS[22] = uString::Const(",");
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2x2, M11), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2x2, M12), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2x2, M21), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float2x2, M22), 0);
    return type;
}

// public Float2x2(float m11, float m12, float m21, float m22) :2425
void Float2x2__ctor__fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22)
{
    __this->ctor_(*m11, *m12, *m21, *m22);
}

// public Float2x2(float2 a, float2 b) :2433
void Float2x2__ctor_1_fn(Float2x2* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b)
{
    __this->ctor_1(*a, *b);
}

// public override sealed bool Equals(object o) :2489
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float2x2_typeof(), *__this, U_ALLOCA(Float2x2_typeof()->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2490
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float2x2_typeof(), *__this, U_ALLOCA(Float2x2_typeof()->ObjectSize)), &ret4), ret4), void();
}

// public Float2x2 New(float m11, float m12, float m21, float m22) :2425
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval)
{
    *__retval = Float2x2__New1(*m11, *m12, *m21, *m22);
}

// public Float2x2 New(float2 a, float2 b) :2433
void Float2x2__New2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, Float2x2* __retval)
{
    *__retval = Float2x2__New2(*a, *b);
}

// public override sealed string ToString() :2491
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[11/*float*/]), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[11/*float*/])), void();
}

// public Float2x2(float m11, float m12, float m21, float m22) [instance] :2425
void Float2x2::ctor_(float m11, float m12, float m21, float m22)
{
    M11 = m11;
    M12 = m12;
    M21 = m21;
    M22 = m22;
}

// public Float2x2(float2 a, float2 b) [instance] :2433
void Float2x2::ctor_1(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    M11 = a.X;
    M12 = a.Y;
    M21 = b.X;
    M22 = b.Y;
}

// public Float2x2 New(float m11, float m12, float m21, float m22) [static] :2425
Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22)
{
    Float2x2 obj1;
    obj1.ctor_(m11, m12, m21, m22);
    return obj1;
}

// public Float2x2 New(float2 a, float2 b) [static] :2433
Float2x2 Float2x2__New2(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    Float2x2 obj2;
    obj2.ctor_1(a, b);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#30
// -----------------------------------------------------------------

// public intrinsic struct Float3 :2508
// {
uStructType* Float3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Float3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Uno::Generic_typeof()->MakeMethod(1, Float3_typeof());
    ::TYPES[11] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3, X), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3, Y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3, Z), 0);
    return type;
}

// public Float3(float xyz) :2531
void Float3__ctor__fn(Float3* __this, float* xyz)
{
    __this->ctor_(*xyz);
}

// public Float3(float x, float y, float z) :2532
void Float3__ctor_1_fn(Float3* __this, float* x, float* y, float* z)
{
    __this->ctor_1(*x, *y, *z);
}

// public Float3(float2 xy, float z) :2533
void Float3__ctor_3_fn(Float3* __this, ::g::Uno::Float2* xy, float* z)
{
    __this->ctor_3(*xy, *z);
}

// public override sealed bool Equals(object o) :2558
void Float3__Equals_fn(Float3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float3_typeof(), *__this, U_ALLOCA(Float3_typeof()->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :2559
void Float3__GetHashCode_fn(Float3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float3_typeof(), *__this, U_ALLOCA(Float3_typeof()->ObjectSize)), &ret6), ret6), void();
}

// public Float3 New(float xyz) :2531
void Float3__New1_fn(float* xyz, Float3* __retval)
{
    *__retval = Float3__New1(*xyz);
}

// public Float3 New(float x, float y, float z) :2532
void Float3__New2_fn(float* x, float* y, float* z, Float3* __retval)
{
    *__retval = Float3__New2(*x, *y, *z);
}

// public Float3 New(float2 xy, float z) :2533
void Float3__New4_fn(::g::Uno::Float2* xy, float* z, Float3* __retval)
{
    *__retval = Float3__New4(*xy, *z);
}

// public static operator +(float3 a, float3 b) :2536
void Float3__op_Addition2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Addition2(*a, *b);
}

// public static operator /(float3 a, float b) :2544
void Float3__op_Division1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Division1(*a, *b);
}

// public static operator !=(float3 a, float3 b) :2552
void Float3__op_Inequality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Inequality(*a, *b);
}

// public static operator *(float3 a, float b) :2543
void Float3__op_Multiply1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply1(*a, *b);
}

// public static operator *(float3 a, float3 b) :2538
void Float3__op_Multiply2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply2(*a, *b);
}

// public static operator -(float3 a, float3 b) :2537
void Float3__op_Subtraction2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Subtraction2(*a, *b);
}

// public static operator -(float3 a) :2554
void Float3__op_UnaryNegation_fn(Float3* a, Float3* __retval)
{
    *__retval = Float3__op_UnaryNegation(*a);
}

// public override sealed string ToString() :2560
void Float3__ToString_fn(Float3* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[11/*float*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[11/*float*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[11/*float*/])), void();
}

// public Float3(float xyz) [instance] :2531
void Float3::ctor_(float xyz)
{
    X = (Y = (Z = xyz));
}

// public Float3(float x, float y, float z) [instance] :2532
void Float3::ctor_1(float x, float y, float z)
{
    X = x;
    Y = y;
    Z = z;
}

// public Float3(float2 xy, float z) [instance] :2533
void Float3::ctor_3(::g::Uno::Float2 xy, float z)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
}

// public Float3 New(float xyz) [static] :2531
Float3 Float3__New1(float xyz)
{
    Float3 obj1;
    obj1.ctor_(xyz);
    return obj1;
}

// public Float3 New(float x, float y, float z) [static] :2532
Float3 Float3__New2(float x, float y, float z)
{
    Float3 obj2;
    obj2.ctor_1(x, y, z);
    return obj2;
}

// public Float3 New(float2 xy, float z) [static] :2533
Float3 Float3__New4(::g::Uno::Float2 xy, float z)
{
    Float3 obj3;
    obj3.ctor_3(xy, z);
    return obj3;
}

// public static operator +(float3 a, float3 b) [static] :2536
Float3 Float3__op_Addition2(Float3 a, Float3 b)
{
    return Float3__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

// public static operator /(float3 a, float b) [static] :2544
Float3 Float3__op_Division1(Float3 a, float b)
{
    return Float3__New2(a.X / b, a.Y / b, a.Z / b);
}

// public static operator !=(float3 a, float3 b) [static] :2552
bool Float3__op_Inequality(Float3 a, Float3 b)
{
    bool ret8;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[21/*Uno.Generic.Equals<float3>*/], uCRef(a), uCRef(b), &ret8), ret8);
}

// public static operator *(float3 a, float b) [static] :2543
Float3 Float3__op_Multiply1(Float3 a, float b)
{
    return Float3__New2(a.X * b, a.Y * b, a.Z * b);
}

// public static operator *(float3 a, float3 b) [static] :2538
Float3 Float3__op_Multiply2(Float3 a, Float3 b)
{
    return Float3__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

// public static operator -(float3 a, float3 b) [static] :2537
Float3 Float3__op_Subtraction2(Float3 a, Float3 b)
{
    return Float3__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

// public static operator -(float3 a) [static] :2554
Float3 Float3__op_UnaryNegation(Float3 a)
{
    return Float3__op_Multiply1(a, -1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#31
// -----------------------------------------------------------------

// public intrinsic struct Float3x3 :2572
// {
uStructType* Float3x3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ValueSize = sizeof(Float3x3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3x3", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3x3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3x3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3x3__ToString_fn;
    ::STRINGS[22] = uString::Const(",");
    ::TYPES[11] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M11), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M12), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M13), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M21), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M22), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M23), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M31), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M32), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float3x3, M33), 0);
    return type;
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :2603
void Float3x3__ctor__fn(Float3x3* __this, float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33)
{
    __this->ctor_(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed bool Equals(object o) :2690
void Float3x3__Equals_fn(Float3x3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float3x3_typeof(), *__this, U_ALLOCA(Float3x3_typeof()->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2691
void Float3x3__GetHashCode_fn(Float3x3* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float3x3_typeof(), *__this, U_ALLOCA(Float3x3_typeof()->ObjectSize)), &ret4), ret4), void();
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :2603
void Float3x3__New1_fn(float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33, Float3x3* __retval)
{
    *__retval = Float3x3__New1(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed string ToString() :2693
void Float3x3__ToString_fn(Float3x3* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[11/*float*/]), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[11/*float*/])), ::g::Uno::Float::ToString(__this->M13, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[11/*float*/])), ::g::Uno::Float::ToString(__this->M23, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[11/*float*/])), ::g::Uno::Float::ToString(__this->M33, ::TYPES[11/*float*/])), void();
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [instance] :2603
void Float3x3::ctor_(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M31 = m31;
    M32 = m32;
    M33 = m33;
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [static] :2603
Float3x3 Float3x3__New1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 obj1;
    obj1.ctor_(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#32
// -----------------------------------------------------------------

// public intrinsic struct Float4 :2710
// {
uStructType* Float4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Float4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[22] = ::g::Uno::Generic_typeof()->MakeMethod(1, Float4_typeof());
    ::TYPES[11] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4, X), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4, Y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4, Z), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4, W), 0);
    return type;
}

// public Float4(float xyzw) :2740
void Float4__ctor__fn(Float4* __this, float* xyzw)
{
    __this->ctor_(*xyzw);
}

// public Float4(float x, float y, float z, float w) :2741
void Float4__ctor_1_fn(Float4* __this, float* x, float* y, float* z, float* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Float4(float2 xy, float z, float w) :2742
void Float4__ctor_5_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w)
{
    __this->ctor_5(*xy, *z, *w);
}

// public Float4(float2 xy, float2 zw) :2745
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public Float4(float3 xyz, float w) :2746
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w)
{
    __this->ctor_7(*xyz, *w);
}

// public override sealed bool Equals(object o) :2774
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float4_typeof(), *__this, U_ALLOCA(Float4_typeof()->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :2775
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float4_typeof(), *__this, U_ALLOCA(Float4_typeof()->ObjectSize)), &ret10), ret10), void();
}

// public static float4 get_Identity() :2714
void Float4__get_Identity_fn(Float4* __retval)
{
    *__retval = Float4__Identity();
}

// public float get_Item(int index) :2722
void Float4__get_Item_fn(Float4* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :2730
void Float4__set_Item_fn(Float4* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float4 New(float xyzw) :2740
void Float4__New1_fn(float* xyzw, Float4* __retval)
{
    *__retval = Float4__New1(*xyzw);
}

// public Float4 New(float x, float y, float z, float w) :2741
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New2(*x, *y, *z, *w);
}

// public Float4 New(float2 xy, float z, float w) :2742
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New6(*xy, *z, *w);
}

// public Float4 New(float2 xy, float2 zw) :2745
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval)
{
    *__retval = Float4__New7(*xy, *zw);
}

// public Float4 New(float3 xyz, float w) :2746
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval)
{
    *__retval = Float4__New8(*xyz, *w);
}

// public static operator +(float4 a, float4 b) :2750
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition2(*a, *b);
}

// public static operator /(float4 a, float b) :2758
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Division1(*a, *b);
}

// public static operator !=(float4 a, float4 b) :2766
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Inequality(*a, *b);
}

// public static operator *(float4 a, float b) :2757
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply1(*a, *b);
}

// public static operator *(float4 a, float4 b) :2752
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply2(*a, *b);
}

// public static operator -(float4 a, float4 b) :2751
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Subtraction2(*a, *b);
}

// public override sealed string ToString() :2776
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[11/*float*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[11/*float*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[11/*float*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->W, ::TYPES[11/*float*/])), void();
}

// public Float4(float xyzw) [instance] :2740
void Float4::ctor_(float xyzw)
{
    X = (Y = (Z = (W = xyzw)));
}

// public Float4(float x, float y, float z, float w) [instance] :2741
void Float4::ctor_1(float x, float y, float z, float w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Float4(float2 xy, float z, float w) [instance] :2742
void Float4::ctor_5(::g::Uno::Float2 xy, float z, float w)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
    W = w;
}

// public Float4(float2 xy, float2 zw) [instance] :2745
void Float4::ctor_6(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public Float4(float3 xyz, float w) [instance] :2746
void Float4::ctor_7(::g::Uno::Float3 xyz, float w)
{
    X = xyz.X;
    Y = xyz.Y;
    Z = xyz.Z;
    W = w;
}

// public float get_Item(int index) [instance] :2722
float Float4::Item(int index)
{
    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :2730
void Float4::Item(int index, float value)
{
    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4 New(float xyzw) [static] :2740
Float4 Float4__New1(float xyzw)
{
    Float4 obj1;
    obj1.ctor_(xyzw);
    return obj1;
}

// public Float4 New(float x, float y, float z, float w) [static] :2741
Float4 Float4__New2(float x, float y, float z, float w)
{
    Float4 obj2;
    obj2.ctor_1(x, y, z, w);
    return obj2;
}

// public Float4 New(float2 xy, float z, float w) [static] :2742
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w)
{
    Float4 obj3;
    obj3.ctor_5(xy, z, w);
    return obj3;
}

// public Float4 New(float2 xy, float2 zw) [static] :2745
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    Float4 obj6;
    obj6.ctor_6(xy, zw);
    return obj6;
}

// public Float4 New(float3 xyz, float w) [static] :2746
Float4 Float4__New8(::g::Uno::Float3 xyz, float w)
{
    Float4 obj7;
    obj7.ctor_7(xyz, w);
    return obj7;
}

// public static operator +(float4 a, float4 b) [static] :2750
Float4 Float4__op_Addition2(Float4 a, Float4 b)
{
    return Float4__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

// public static operator /(float4 a, float b) [static] :2758
Float4 Float4__op_Division1(Float4 a, float b)
{
    return Float4__New2(a.X / b, a.Y / b, a.Z / b, a.W / b);
}

// public static operator !=(float4 a, float4 b) [static] :2766
bool Float4__op_Inequality(Float4 a, Float4 b)
{
    bool ret12;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[22/*Uno.Generic.Equals<float4>*/], uCRef(a), uCRef(b), &ret12), ret12);
}

// public static operator *(float4 a, float b) [static] :2757
Float4 Float4__op_Multiply1(Float4 a, float b)
{
    return Float4__New2(a.X * b, a.Y * b, a.Z * b, a.W * b);
}

// public static operator *(float4 a, float4 b) [static] :2752
Float4 Float4__op_Multiply2(Float4 a, Float4 b)
{
    return Float4__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z, a.W * b.W);
}

// public static operator -(float4 a, float4 b) [static] :2751
Float4 Float4__op_Subtraction2(Float4 a, Float4 b)
{
    return Float4__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z, a.W - b.W);
}

// public static float4 get_Identity() [static] :2714
Float4 Float4__Identity()
{
    return Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#33
// -----------------------------------------------------------------

// public intrinsic struct Float4x4 :2789
// {
uStructType* Float4x4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ValueSize = sizeof(Float4x4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4x4", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4x4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4x4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4x4__ToString_fn;
    ::STRINGS[22] = uString::Const(",");
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M11), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M12), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M13), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M14), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M21), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M22), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M23), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M24), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M31), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M32), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M33), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M34), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M41), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M42), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M43), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Float4x4, M44), 0);
    return type;
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :2823
void Float4x4__ctor__fn(Float4x4* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->ctor_(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public override sealed bool Equals(object o) :2949
void Float4x4__Equals_fn(Float4x4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret4;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Float4x4_typeof(), *__this, U_ALLOCA(Float4x4_typeof()->ObjectSize)), o, &ret4), ret4), void();
}

// public override sealed int GetHashCode() :2950
void Float4x4__GetHashCode_fn(Float4x4* __this, uType* __type, int* __retval)
{
    int ret5;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Float4x4_typeof(), *__this, U_ALLOCA(Float4x4_typeof()->ObjectSize)), &ret5), ret5), void();
}

// public static float4x4 get_Identity() :2793
void Float4x4__get_Identity_fn(Float4x4* __retval)
{
    *__retval = Float4x4__Identity();
}

// public float4 get_Item(int index) :2805
void Float4x4__get_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float4 value) :2813
void Float4x4__set_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* value)
{
    __this->Item(*index, *value);
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :2823
void Float4x4__New1_fn(float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44, Float4x4* __retval)
{
    *__retval = Float4x4__New1(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public override sealed string ToString() :2952
void Float4x4__ToString_fn(Float4x4* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[11/*float*/]), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M13, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M14, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M23, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M24, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M33, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M34, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M41, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M42, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M43, ::TYPES[11/*float*/])), ::STRINGS[22/*","*/]), ::g::Uno::Float::ToString(__this->M44, ::TYPES[11/*float*/])), void();
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :2823
void Float4x4::ctor_(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M14 = m14;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M24 = m24;
    M31 = m31;
    M32 = m32;
    M33 = m33;
    M34 = m34;
    M41 = m41;
    M42 = m42;
    M43 = m43;
    M44 = m44;
}

// public float4 get_Item(int index) [instance] :2805
::g::Uno::Float4 Float4x4::Item(int index)
{
    if (index == 0)
        return ::g::Uno::Float4__New2(M11, M12, M13, M14);
    else if (index == 1)
        return ::g::Uno::Float4__New2(M21, M22, M23, M24);
    else if (index == 2)
        return ::g::Uno::Float4__New2(M31, M32, M33, M34);
    else if (index == 3)
        return ::g::Uno::Float4__New2(M41, M42, M43, M44);
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float4 value) [instance] :2813
void Float4x4::Item(int index, ::g::Uno::Float4 value)
{
    if (index == 0)
    {
        M11 = value.X;
        M12 = value.Y;
        M13 = value.Z;
        M14 = value.W;
    }
    else if (index == 1)
    {
        M21 = value.X;
        M22 = value.Y;
        M23 = value.Z;
        M24 = value.W;
    }
    else if (index == 2)
    {
        M31 = value.X;
        M32 = value.Y;
        M33 = value.Z;
        M34 = value.W;
    }
    else if (index == 3)
    {
        M41 = value.X;
        M42 = value.Y;
        M43 = value.Z;
        M44 = value.W;
    }
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :2823
Float4x4 Float4x4__New1(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 obj1;
    obj1.ctor_(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return obj1;
}

// public static float4x4 get_Identity() [static] :2793
Float4x4 Float4x4__Identity()
{
    return Float4x4__New1(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#5
// ---------------------------------------------------------------------------

// public sealed class FormatException :170
// {
::g::Uno::Exception_type* FormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.FormatException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    return type;
}

// public FormatException(string message) :172
void FormatException__ctor_3_fn(FormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public FormatException New(string message) :172
void FormatException__New4_fn(uString* message, FormatException** __retval)
{
    *__retval = FormatException::New4(message);
}

// public FormatException(string message) [instance] :172
void FormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public FormatException New(string message) [static] :172
FormatException* FormatException::New4(uString* message)
{
    FormatException* obj1 = (FormatException*)uNew(FormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#34
// -----------------------------------------------------------------

// public delegate TResult Func<TResult>() :2970
uDelegateType* Func_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#34
// -----------------------------------------------------------------

// public delegate TResult Func<T, TResult>(T arg) :2973
uDelegateType* Func1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`2", 1, 2);
    type->SetSignature(type->T(1),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#34
// -----------------------------------------------------------------

// public delegate TResult Func<T1, T2, TResult>(T1 arg1, T2 arg2) :2976
uDelegateType* Func2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`3", 2, 3);
    type->SetSignature(type->T(2),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#35
// -----------------------------------------------------------------

// public static class GC :3029
// {
uClassType* GC_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.GC", options);
    return type;
}

// public static void SuppressFinalize(object obj) :3031
void GC__SuppressFinalize_fn(uObject* obj)
{
    GC::SuppressFinalize(obj);
}

// public static void SuppressFinalize(object obj) [static] :3031
void GC::SuppressFinalize(uObject* obj)
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#36
// -----------------------------------------------------------------

// public static class Generic :3046
// {
uClassType* Generic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Generic", options);
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof();
    return type;
}

// public static bool Equals<T>(T left, T right) :3048
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[23/*Uno.Runtime.Implementation.GenericEqualsImpl*/]->MakeMethod(1, __type->U(0)),
    };
    bool ret1;
    return *__retval = (::g::Uno::Runtime::Implementation::GenericEqualsImpl__Equals_fn(__types[1], left, right, &ret1), ret1), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#37
// -----------------------------------------------------------------

// public abstract interface IDisposable :3073
// {
uInterfaceType* IDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.IDisposable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#6
// ---------------------------------------------------------------------------

// public sealed class IndexOutOfRangeException :187
// {
::g::Uno::Exception_type* IndexOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IndexOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IndexOutOfRangeException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)IndexOutOfRangeException__New4_fn;
    ::STRINGS[23] = uString::Const("Index out of range");
    type->SetFields(3);
    return type;
}

// public IndexOutOfRangeException() :189
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this)
{
    __this->ctor_3();
}

// public IndexOutOfRangeException New() :189
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval)
{
    *__retval = IndexOutOfRangeException::New4();
}

// public IndexOutOfRangeException() [instance] :189
void IndexOutOfRangeException::ctor_3()
{
    ctor_1(::STRINGS[23/*"Index out o...*/]);
}

// public IndexOutOfRangeException New() [static] :189
IndexOutOfRangeException* IndexOutOfRangeException::New4()
{
    IndexOutOfRangeException* obj1 = (IndexOutOfRangeException*)uNew(IndexOutOfRangeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#38
// -----------------------------------------------------------------

// public intrinsic struct Int :3095
// {
uStructType* Int_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3101
void Int__Equals_fn(int* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int>(Int_typeof(), *__this, U_ALLOCA(Int_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3107
void Int__GetHashCode_fn(int* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static int Parse(string str) :3132
void Int__Parse_fn(uString* str, int* __retval)
{
    *__retval = Int::Parse(str);
}

// public override sealed string ToString() :3118
void Int__ToString_fn(int* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, int& res) :3169
void Int__TryParse_fn(uString* str, int* res, bool* __retval)
{
    *__retval = Int::TryParse(str, res);
}

// public static int Parse(string str) [static] :3132
int Int::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToInt();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, int& res) [static] :3169
bool Int::TryParse(uString* str, int* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToInt(res);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#39
// -----------------------------------------------------------------

// public intrinsic struct Int2 :3239
// {
uStructType* Int2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Int2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int2", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int2__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[24] = ::g::Uno::Generic_typeof()->MakeMethod(1, Int2_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int2, X), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int2, Y), 0);
    return type;
}

// public Int2(int xy) :3260
void Int2__ctor__fn(Int2* __this, int* xy)
{
    __this->ctor_(*xy);
}

// public Int2(int x, int y) :3261
void Int2__ctor_1_fn(Int2* __this, int* x, int* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :3284
void Int2__Equals_fn(Int2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Int2_typeof(), *__this, U_ALLOCA(Int2_typeof()->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :3285
void Int2__GetHashCode_fn(Int2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Int2_typeof(), *__this, U_ALLOCA(Int2_typeof()->ObjectSize)), &ret4), ret4), void();
}

// public Int2 New(int xy) :3260
void Int2__New1_fn(int* xy, Int2* __retval)
{
    *__retval = Int2__New1(*xy);
}

// public Int2 New(int x, int y) :3261
void Int2__New2_fn(int* x, int* y, Int2* __retval)
{
    *__retval = Int2__New2(*x, *y);
}

// public static operator +(int2 a, int2 b) :3263
void Int2__op_Addition1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Addition1(*a, *b);
}

// public static explicit operator int2(float2 v) :3282
void Int2__op_Explicit_fn(::g::Uno::Float2* v, Int2* __retval)
{
    *__retval = Int2__op_Explicit(*v);
}

// public static operator !=(int2 a, int2 b) :3274
void Int2__op_Inequality_fn(Int2* a, Int2* b, bool* __retval)
{
    *__retval = Int2__op_Inequality(*a, *b);
}

// public static operator *(int2 a, int b) :3270
void Int2__op_Multiply_fn(Int2* a, int* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply(*a, *b);
}

// public static operator -(int2 a, int2 b) :3264
void Int2__op_Subtraction1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Subtraction1(*a, *b);
}

// public override sealed string ToString() :3286
void Int2__ToString_fn(Int2* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), void();
}

// public Int2(int xy) [instance] :3260
void Int2::ctor_(int xy)
{
    X = (Y = xy);
}

// public Int2(int x, int y) [instance] :3261
void Int2::ctor_1(int x, int y)
{
    X = x;
    Y = y;
}

// public Int2 New(int xy) [static] :3260
Int2 Int2__New1(int xy)
{
    Int2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Int2 New(int x, int y) [static] :3261
Int2 Int2__New2(int x, int y)
{
    Int2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(int2 a, int2 b) [static] :3263
Int2 Int2__op_Addition1(Int2 a, Int2 b)
{
    return Int2__New2(a.X + b.X, a.Y + b.Y);
}

// public static explicit operator int2(float2 v) [static] :3282
Int2 Int2__op_Explicit(::g::Uno::Float2 v)
{
    return Int2__New2((int)v.X, (int)v.Y);
}

// public static operator !=(int2 a, int2 b) [static] :3274
bool Int2__op_Inequality(Int2 a, Int2 b)
{
    bool ret6;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[24/*Uno.Generic.Equals<int2>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static operator *(int2 a, int b) [static] :3270
Int2 Int2__op_Multiply(Int2 a, int b)
{
    return Int2__New2(a.X * b, a.Y * b);
}

// public static operator -(int2 a, int2 b) [static] :3264
Int2 Int2__op_Subtraction1(Int2 a, Int2 b)
{
    return Int2__New2(a.X - b.X, a.Y - b.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#40
// -----------------------------------------------------------------

// public intrinsic struct Int3 :3298
// {
uStructType* Int3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Int3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int3", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int3__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int3, X), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int3, Y), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int3, Z), 0);
    return type;
}

// public override sealed bool Equals(object o) :3341
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Int3_typeof(), *__this, U_ALLOCA(Int3_typeof()->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :3342
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Int3_typeof(), *__this, U_ALLOCA(Int3_typeof()->ObjectSize)), &ret6), ret6), void();
}

// public override sealed string ToString() :3339
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[14/*int*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#41
// -----------------------------------------------------------------

// public intrinsic struct Int4 :3355
// {
uStructType* Int4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Int4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int4", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int4__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[20] = ::g::Uno::Int2_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int4, X), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int4, Y), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int4, Z), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Int4, W), 0);
    return type;
}

// public Int4(int x, int y, int z, int w) :3380
void Int4__ctor_1_fn(Int4* __this, int* x, int* y, int* z, int* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Int4(int2 xy, int2 zw) :3384
void Int4__ctor_6_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public override sealed bool Equals(object o) :3408
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(Int4_typeof(), *__this, U_ALLOCA(Int4_typeof()->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :3409
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(Int4_typeof(), *__this, U_ALLOCA(Int4_typeof()->ObjectSize)), &ret10), ret10), void();
}

// public int get_Item(int index) :3362
void Int4__get_Item_fn(Int4* __this, int* index, int* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, int value) :3370
void Int4__set_Item_fn(Int4* __this, int* index, int* value)
{
    __this->Item(*index, *value);
}

// public Int4 New(int x, int y, int z, int w) :3380
void Int4__New2_fn(int* x, int* y, int* z, int* w, Int4* __retval)
{
    *__retval = Int4__New2(*x, *y, *z, *w);
}

// public Int4 New(int2 xy, int2 zw) :3384
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval)
{
    *__retval = Int4__New7(*xy, *zw);
}

// public override sealed string ToString() :3410
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[14/*int*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->W, ::TYPES[14/*int*/])), void();
}

// public Int4(int x, int y, int z, int w) [instance] :3380
void Int4::ctor_1(int x, int y, int z, int w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Int4(int2 xy, int2 zw) [instance] :3384
void Int4::ctor_6(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public int get_Item(int index) [instance] :3362
int Int4::Item(int index)
{
    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, int value) [instance] :3370
void Int4::Item(int index, int value)
{
    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Int4 New(int x, int y, int z, int w) [static] :3380
Int4 Int4__New2(int x, int y, int z, int w)
{
    Int4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}

// public Int4 New(int2 xy, int2 zw) [static] :3384
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    Int4 obj5;
    obj5.ctor_6(xy, zw);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#42
// -----------------------------------------------------------------

// public intrinsic struct IntPtr :3427
// {
uStructType* IntPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IntPtr", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))IntPtr__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))IntPtr__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))IntPtr__ToString_fn;
    type->SetFields(0,
        IntPtr_typeof(), (uintptr_t)&::g::Uno::IntPtr::Zero_, uFieldFlagsStatic);
    return type;
}

// public override sealed bool Equals(object o) :3485
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(IntPtr_typeof(), *__this, U_ALLOCA(IntPtr_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3491
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) :3450
void IntPtr__op_Equality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Equality(*left, *right);
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) :3462
void IntPtr__op_Inequality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Inequality(*left, *right);
}

// public override sealed string ToString() :3506
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

void* IntPtr::Zero_;

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) [static] :3450
bool IntPtr::op_Equality(void* left, void* right)
{
    return left == right;
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) [static] :3462
bool IntPtr::op_Inequality(void* left, void* right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#7
// ---------------------------------------------------------------------------

// public sealed class InvalidCastException :204
// {
::g::Uno::Exception_type* InvalidCastException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidCastException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidCastException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidCastException__New4_fn;
    ::STRINGS[24] = uString::Const("Invalid cast");
    type->SetFields(3);
    return type;
}

// public InvalidCastException() :206
void InvalidCastException__ctor_3_fn(InvalidCastException* __this)
{
    __this->ctor_3();
}

// public InvalidCastException New() :206
void InvalidCastException__New4_fn(InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New4();
}

// public InvalidCastException() [instance] :206
void InvalidCastException::ctor_3()
{
    ctor_1(::STRINGS[24/*"Invalid cast"*/]);
}

// public InvalidCastException New() [static] :206
InvalidCastException* InvalidCastException::New4()
{
    InvalidCastException* obj1 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#8
// ---------------------------------------------------------------------------

// public sealed class InvalidOperationException :221
// {
::g::Uno::Exception_type* InvalidOperationException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidOperationException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidOperationException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidOperationException__New4_fn;
    ::STRINGS[25] = uString::Const("Invalid operation");
    type->SetFields(3);
    return type;
}

// public InvalidOperationException() :223
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this)
{
    __this->ctor_3();
}

// public InvalidOperationException(string message) :228
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidOperationException New() :223
void InvalidOperationException__New4_fn(InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New4();
}

// public InvalidOperationException New(string message) :228
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New5(message);
}

// public InvalidOperationException() [instance] :223
void InvalidOperationException::ctor_3()
{
    ctor_1(::STRINGS[25/*"Invalid ope...*/]);
}

// public InvalidOperationException(string message) [instance] :228
void InvalidOperationException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidOperationException New() [static] :223
InvalidOperationException* InvalidOperationException::New4()
{
    InvalidOperationException* obj1 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidOperationException New(string message) [static] :228
InvalidOperationException* InvalidOperationException::New5(uString* message)
{
    InvalidOperationException* obj2 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#43
// -----------------------------------------------------------------

// public intrinsic struct Long :3539
// {
uStructType* Long_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Long", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Long__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Long__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Long__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3545
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int64_t>(Long_typeof(), *__this, U_ALLOCA(Long_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3551
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public override sealed string ToString() :3562
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#44
// -----------------------------------------------------------------

// public static class Math :3685
// {
uClassType* Math_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Math", options);
    ::TYPES[25] = ::g::Uno::Double_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    ::TYPES[26] = ::g::Uno::Long_typeof();
    return type;
}

// public static double Abs(double x) :3918
void Math__Abs_fn(double* x, double* __retval)
{
    *__retval = Math::Abs(*x);
}

// public static float Abs(float x) :3919
void Math__Abs1_fn(float* x, float* __retval)
{
    *__retval = Math::Abs1(*x);
}

// public static float2 Abs(float2 a) :3920
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Abs2(*a);
}

// public static int Abs(int x) :3923
void Math__Abs5_fn(int* x, int* __retval)
{
    *__retval = Math::Abs5(*x);
}

// public static float Acos(float radians) :3788
void Math__Acos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Acos1(*radians);
}

// public static double Asin(double radians) :3763
void Math__Asin_fn(double* radians, double* __retval)
{
    *__retval = Math::Asin(*radians);
}

// public static float Asin(float radians) :3770
void Math__Asin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Asin1(*radians);
}

// public static float Atan2(float y, float x) :3824
void Math__Atan22_fn(float* y, float* x, float* __retval)
{
    *__retval = Math::Atan22(*y, *x);
}

// public static double Ceil(double x) :3957
void Math__Ceil_fn(double* x, double* __retval)
{
    *__retval = Math::Ceil(*x);
}

// public static float Ceil(float x) :3964
void Math__Ceil1_fn(float* x, float* __retval)
{
    *__retval = Math::Ceil1(*x);
}

// public static float2 Ceil(float2 v) :3970
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Ceil2(*v);
}

// public static double Clamp(double x, double minimum, double maximum) :4021
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval)
{
    *__retval = Math::Clamp(*x, *minimum, *maximum);
}

// public static float Clamp(float x, float minimum, float maximum) :4022
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval)
{
    *__retval = Math::Clamp1(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) :4024
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp3(*x, *minimum, *maximum);
}

// public static int Clamp(int x, int minimum, int maximum) :4029
void Math__Clamp8_fn(int* x, int* minimum, int* maximum, int* __retval)
{
    *__retval = Math::Clamp8(*x, *minimum, *maximum);
}

// public static float Cos(float radians) :3734
void Math__Cos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Cos1(*radians);
}

// public static float DegreesToRadians(float degrees) :3697
void Math__DegreesToRadians1_fn(float* degrees, float* __retval)
{
    *__retval = Math::DegreesToRadians1(*degrees);
}

// public static float Exp(float x) :3856
void Math__Exp1_fn(float* x, float* __retval)
{
    *__retval = Math::Exp1(*x);
}

// public static double Floor(double x) :3939
void Math__Floor_fn(double* x, double* __retval)
{
    *__retval = Math::Floor(*x);
}

// public static float Floor(float x) :3946
void Math__Floor1_fn(float* x, float* __retval)
{
    *__retval = Math::Floor1(*x);
}

// public static float2 Floor(float2 v) :3952
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Floor2(*v);
}

// public static bool IsPow2(int x) :4175
void Math__IsPow2_fn(int* x, bool* __retval)
{
    *__retval = Math::IsPow2(*x);
}

// public static float Lerp(float a, float b, float t) :4038
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval)
{
    *__retval = Math::Lerp1(*a, *b, *t);
}

// public static float2 Lerp(float2 a, float2 b, float t) :4039
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Lerp2(*a, *b, *t);
}

// public static float3 Lerp(float3 a, float3 b, float t) :4041
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Lerp4(*a, *b, *t);
}

// public static float4 Lerp(float4 a, float4 b, float t) :4043
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Lerp6(*a, *b, *t);
}

// public static float Log(float x) :3869
void Math__Log1_fn(float* x, float* __retval)
{
    *__retval = Math::Log1(*x);
}

// public static double Max(double a, double b) :3989
void Math__Max_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Max(*a, *b);
}

// public static float Max(float a, float b) :3990
void Math__Max1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Max1(*a, *b);
}

// public static float2 Max(float2 a, float b) :3991
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max2(*a, *b);
}

// public static float2 Max(float2 a, float2 b) :3992
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max3(*a, *b);
}

// public static float3 Max(float3 a, float3 b) :3994
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max5(*a, *b);
}

// public static float4 Max(float4 a, float4 b) :3996
void Math__Max7_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Max7(*a, *b);
}

// public static int Max(int a, int b) :3997
void Math__Max8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Max8(*a, *b);
}

// public static double Min(double a, double b) :4005
void Math__Min_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Min(*a, *b);
}

// public static float Min(float a, float b) :4006
void Math__Min1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Min1(*a, *b);
}

// public static float2 Min(float2 a, float2 b) :4008
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min3(*a, *b);
}

// public static float3 Min(float3 a, float3 b) :4010
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min5(*a, *b);
}

// public static int Min(int a, int b) :4013
void Math__Min8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Min8(*a, *b);
}

// public static double Mod(double x, double y) :3980
void Math__Mod_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Mod(*x, *y);
}

// public static float Mod(float x, float y) :3981
void Math__Mod1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Mod1(*x, *y);
}

// public static int NextPow2(int x) :4164
void Math__NextPow2_fn(int* x, int* __retval)
{
    *__retval = Math::NextPow2(*x);
}

// public static double Pow(double x, double y) :3838
void Math__Pow_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Pow(*x, *y);
}

// public static float Pow(float x, float y) :3845
void Math__Pow1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Pow1(*x, *y);
}

// public static float RadiansToDegrees(float radians) :3703
void Math__RadiansToDegrees1_fn(float* radians, float* __retval)
{
    *__retval = Math::RadiansToDegrees1(*radians);
}

// public static double Round(double x) :4103
void Math__Round_fn(double* x, double* __retval)
{
    *__retval = Math::Round(*x);
}

// public static double Round(double d, int decimals) :4114
void Math__Round1_fn(double* d, int* decimals, double* __retval)
{
    *__retval = Math::Round1(*d, *decimals);
}

// public static float Round(float x) :4104
void Math__Round2_fn(float* x, float* __retval)
{
    *__retval = Math::Round2(*x);
}

// public static float2 Round(float2 x) :4105
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Round4(*x);
}

// public static float Saturate(float x) :4098
void Math__Saturate1_fn(float* x, float* __retval)
{
    *__retval = Math::Saturate1(*x);
}

// public static double Sin(double radians) :3709
void Math__Sin_fn(double* radians, double* __retval)
{
    *__retval = Math::Sin(*radians);
}

// public static float Sin(float radians) :3716
void Math__Sin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Sin1(*radians);
}

// public static double Sqrt(double x) :3892
void Math__Sqrt_fn(double* x, double* __retval)
{
    *__retval = Math::Sqrt(*x);
}

// public static float Sqrt(float x) :3899
void Math__Sqrt1_fn(float* x, float* __retval)
{
    *__retval = Math::Sqrt1(*x);
}

// public static float2 Sqrt(float2 x) :3905
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Sqrt2(*x);
}

// public static float Tan(float radians) :3752
void Math__Tan1_fn(float* radians, float* __retval)
{
    *__retval = Math::Tan1(*radians);
}

// public static double Abs(double x) [static] :3918
double Math::Abs(double x)
{
    return (x >= 0.0) ? x : -x;
}

// public static float Abs(float x) [static] :3919
float Math::Abs1(float x)
{
    return (x >= 0.0f) ? x : -x;
}

// public static float2 Abs(float2 a) [static] :3920
::g::Uno::Float2 Math::Abs2(::g::Uno::Float2 a)
{
    return ::g::Uno::Float2__New2(Math::Abs1(a.X), Math::Abs1(a.Y));
}

// public static int Abs(int x) [static] :3923
int Math::Abs5(int x)
{
    return (x >= 0) ? x : -x;
}

// public static float Acos(float radians) [static] :3788
float Math::Acos1(float radians)
{
    return acosf(radians);
}

// public static double Asin(double radians) [static] :3763
double Math::Asin(double radians)
{
    return asin(radians);
}

// public static float Asin(float radians) [static] :3770
float Math::Asin1(float radians)
{
    return asinf(radians);
}

// public static float Atan2(float y, float x) [static] :3824
float Math::Atan22(float y, float x)
{
    return atan2f(y, x);
}

// public static double Ceil(double x) [static] :3957
double Math::Ceil(double x)
{
    return ceil(x);
}

// public static float Ceil(float x) [static] :3964
float Math::Ceil1(float x)
{
    return ceilf(x);
}

// public static float2 Ceil(float2 v) [static] :3970
::g::Uno::Float2 Math::Ceil2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Ceil1(v.X), Math::Ceil1(v.Y));
}

// public static double Clamp(double x, double minimum, double maximum) [static] :4021
double Math::Clamp(double x, double minimum, double maximum)
{
    return Math::Max(Math::Min(x, maximum), minimum);
}

// public static float Clamp(float x, float minimum, float maximum) [static] :4022
float Math::Clamp1(float x, float minimum, float maximum)
{
    return Math::Max1(Math::Min1(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) [static] :4024
::g::Uno::Float2 Math::Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum)
{
    return Math::Max3(Math::Min3(x, maximum), minimum);
}

// public static int Clamp(int x, int minimum, int maximum) [static] :4029
int Math::Clamp8(int x, int minimum, int maximum)
{
    return Math::Max8(Math::Min8(x, maximum), minimum);
}

// public static float Cos(float radians) [static] :3734
float Math::Cos1(float radians)
{
    return cosf(radians);
}

// public static float DegreesToRadians(float degrees) [static] :3697
float Math::DegreesToRadians1(float degrees)
{
    return degrees * 0.0174532924f;
}

// public static float Exp(float x) [static] :3856
float Math::Exp1(float x)
{
    return Math::Pow1(2.71828175f, x);
}

// public static double Floor(double x) [static] :3939
double Math::Floor(double x)
{
    return floor(x);
}

// public static float Floor(float x) [static] :3946
float Math::Floor1(float x)
{
    return floorf(x);
}

// public static float2 Floor(float2 v) [static] :3952
::g::Uno::Float2 Math::Floor2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Floor1(v.X), Math::Floor1(v.Y));
}

// public static bool IsPow2(int x) [static] :4175
bool Math::IsPow2(int x)
{
    return x == (x & -x);
}

// public static float Lerp(float a, float b, float t) [static] :4038
float Math::Lerp1(float a, float b, float t)
{
    return a + ((b - a) * t);
}

// public static float2 Lerp(float2 a, float2 b, float t) [static] :4039
::g::Uno::Float2 Math::Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t)
{
    return ::g::Uno::Float2__op_Addition2(a, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction2(b, a), t));
}

// public static float3 Lerp(float3 a, float3 b, float t) [static] :4041
::g::Uno::Float3 Math::Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t)
{
    return ::g::Uno::Float3__op_Addition2(a, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Subtraction2(b, a), t));
}

// public static float4 Lerp(float4 a, float4 b, float t) [static] :4043
::g::Uno::Float4 Math::Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t)
{
    return ::g::Uno::Float4__op_Addition2(a, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Subtraction2(b, a), t));
}

// public static float Log(float x) [static] :3869
float Math::Log1(float x)
{
    return logf(x);
}

// public static double Max(double a, double b) [static] :3989
double Math::Max(double a, double b)
{
    return (a > b) ? a : b;
}

// public static float Max(float a, float b) [static] :3990
float Math::Max1(float a, float b)
{
    return (a > b) ? a : b;
}

// public static float2 Max(float2 a, float b) [static] :3991
::g::Uno::Float2 Math::Max2(::g::Uno::Float2 a, float b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b));
}

// public static float2 Max(float2 a, float2 b) [static] :3992
::g::Uno::Float2 Math::Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y));
}

// public static float3 Max(float3 a, float3 b) [static] :3994
::g::Uno::Float3 Math::Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z));
}

// public static float4 Max(float4 a, float4 b) [static] :3996
::g::Uno::Float4 Math::Max7(::g::Uno::Float4 a, ::g::Uno::Float4 b)
{
    return ::g::Uno::Float4__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z), Math::Max1(a.W, b.W));
}

// public static int Max(int a, int b) [static] :3997
int Math::Max8(int a, int b)
{
    return (a > b) ? a : b;
}

// public static double Min(double a, double b) [static] :4005
double Math::Min(double a, double b)
{
    return (a < b) ? a : b;
}

// public static float Min(float a, float b) [static] :4006
float Math::Min1(float a, float b)
{
    return (a < b) ? a : b;
}

// public static float2 Min(float2 a, float2 b) [static] :4008
::g::Uno::Float2 Math::Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y));
}

// public static float3 Min(float3 a, float3 b) [static] :4010
::g::Uno::Float3 Math::Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y), Math::Min1(a.Z, b.Z));
}

// public static int Min(int a, int b) [static] :4013
int Math::Min8(int a, int b)
{
    return (a < b) ? a : b;
}

// public static double Mod(double x, double y) [static] :3980
double Math::Mod(double x, double y)
{
    return x - (y * Math::Floor(x / y));
}

// public static float Mod(float x, float y) [static] :3981
float Math::Mod1(float x, float y)
{
    return x - (y * Math::Floor1(x / y));
}

// public static int NextPow2(int x) [static] :4164
int Math::NextPow2(int x)
{
    int y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

// public static double Pow(double x, double y) [static] :3838
double Math::Pow(double x, double y)
{
    return pow(x, y);
}

// public static float Pow(float x, float y) [static] :3845
float Math::Pow1(float x, float y)
{
    return powf(x, y);
}

// public static float RadiansToDegrees(float radians) [static] :3703
float Math::RadiansToDegrees1(float radians)
{
    return radians * 57.2957764f;
}

// public static double Round(double x) [static] :4103
double Math::Round(double x)
{
    return Math::Floor(x + 0.5);
}

// public static double Round(double d, int decimals) [static] :4114
double Math::Round1(double d, int decimals)
{
    int64_t multiplier = (int64_t)Math::Pow1(10.0f, (float)decimals);
    int64_t intPart = (int64_t)d;
    double decimalPart = Math::Round((d - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

// public static float Round(float x) [static] :4104
float Math::Round2(float x)
{
    return Math::Floor1(x + 0.5f);
}

// public static float2 Round(float2 x) [static] :4105
::g::Uno::Float2 Math::Round4(::g::Uno::Float2 x)
{
    return Math::Floor2(::g::Uno::Float2__op_Addition1(x, 0.5f));
}

// public static float Saturate(float x) [static] :4098
float Math::Saturate1(float x)
{
    return Math::Clamp1(x, 0.0f, 1.0f);
}

// public static double Sin(double radians) [static] :3709
double Math::Sin(double radians)
{
    return sin(radians);
}

// public static float Sin(float radians) [static] :3716
float Math::Sin1(float radians)
{
    return sinf(radians);
}

// public static double Sqrt(double x) [static] :3892
double Math::Sqrt(double x)
{
    return sqrt(x);
}

// public static float Sqrt(float x) [static] :3899
float Math::Sqrt1(float x)
{
    return sqrtf(x);
}

// public static float2 Sqrt(float2 x) [static] :3905
::g::Uno::Float2 Math::Sqrt2(::g::Uno::Float2 x)
{
    return ::g::Uno::Float2__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y));
}

// public static float Tan(float radians) [static] :3752
float Math::Tan1(float radians)
{
    return tanf(radians);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#45
// -----------------------------------------------------------------

// public static class Matrix :4193
// {
uClassType* Matrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Matrix", options);
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[27] = ::g::Uno::Float4x4_typeof();
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    return type;
}

// public static bool Decompose(float4x4 value, float3& scale, float4& rotationQuaternion, float3& translation) :4698
void Matrix__Decompose_fn(::g::Uno::Float4x4* value, ::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation, bool* __retval)
{
    *__retval = Matrix::Decompose(*value, scale, rotationQuaternion, translation);
}

// public static float4x4 Invert(float4x4 value) :4597
void Matrix__Invert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Invert2(*value);
}

// public static float4x4 Mul(float4x4 left, float4x4 right) :4548
void Matrix__Mul8_fn(::g::Uno::Float4x4* left, ::g::Uno::Float4x4* right, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul8(*left, *right);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) :4521
void Matrix__Mul9_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul9(*a, *b, *c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) :4520
void Matrix__Mul10_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* d, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul10(*a, *b, *c, *d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) :4397
void Matrix__RotationAxis_fn(::g::Uno::Float3* axisNormalized, float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationAxis(*axisNormalized, *angleRadians);
}

// public static float4x4 RotationQuaternion(float4 rotation) :4443
void Matrix__RotationQuaternion_fn(::g::Uno::Float4* rotation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationQuaternion(*rotation);
}

// public static float4x4 RotationZ(float angleRadians) :4438
void Matrix__RotationZ_fn(float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationZ(*angleRadians);
}

// public static float4x4 Scaling(float scale) :4379
void Matrix__Scaling_fn(float* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling(*scale);
}

// public static float4x4 Scaling(float x, float y, float z) :4370
void Matrix__Scaling1_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling1(*x, *y, *z);
}

// public static float4x4 Scaling(float3 scale) :4361
void Matrix__Scaling2_fn(::g::Uno::Float3* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling2(*scale);
}

// public static float4x4 Shear(float2 angle) :4388
void Matrix__Shear_fn(::g::Uno::Float2* angle, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Shear(*angle);
}

// public static float4x4 Translation(float x, float y, float z) :4502
void Matrix__Translation_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation(*x, *y, *z);
}

// public static float4x4 Translation(float3 offset) :4493
void Matrix__Translation1_fn(::g::Uno::Float3* offset, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation1(*offset);
}

// public static bool Decompose(float4x4 value, float3& scale, float4& rotationQuaternion, float3& translation) [static] :4698
bool Matrix::Decompose(::g::Uno::Float4x4 value, ::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation)
{
    (*translation).X = value.M41;
    (*translation).Y = value.M42;
    (*translation).Z = value.M43;
    (*scale).X = ::g::Uno::Math::Sqrt1(((value.M11 * value.M11) + (value.M12 * value.M12)) + (value.M13 * value.M13));
    (*scale).Y = ::g::Uno::Math::Sqrt1(((value.M21 * value.M21) + (value.M22 * value.M22)) + (value.M23 * value.M23));
    (*scale).Z = ::g::Uno::Math::Sqrt1(((value.M31 * value.M31) + (value.M32 * value.M32)) + (value.M33 * value.M33));

    if (((::g::Uno::Math::Abs1((*scale).X) < 1e-05f) || (::g::Uno::Math::Abs1((*scale).Y) < 1e-05f)) || (::g::Uno::Math::Abs1((*scale).Z) < 1e-05f))
    {
        *rotationQuaternion = ::g::Uno::Float4__Identity();
        return false;
    }

    ::g::Uno::Float3x3 rotationMatrix = ::g::Uno::Float3x3__New1(value.M11 / (*scale).X, value.M12 / (*scale).X, value.M13 / (*scale).X, value.M21 / (*scale).Y, value.M22 / (*scale).Y, value.M23 / (*scale).Y, value.M31 / (*scale).Z, value.M32 / (*scale).Z, value.M33 / (*scale).Z);
    *rotationQuaternion = ::g::Uno::Quaternion::RotationMatrix(rotationMatrix);
    return true;
}

// public static float4x4 Invert(float4x4 value) [static] :4597
::g::Uno::Float4x4 Matrix::Invert2(::g::Uno::Float4x4 value)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);

    if (::g::Uno::Math::Abs1(det) <= 1e-05f)
        return ::g::Uno::Float4x4__Identity();

    det = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    ::g::Uno::Float4x4 result;
    result.M11 = (d11 * det);
    result.M12 = (-d21 * det);
    result.M13 = (d31 * det);
    result.M14 = (-d41 * det);
    result.M21 = (-d12 * det);
    result.M22 = (d22 * det);
    result.M23 = (-d32 * det);
    result.M24 = (d42 * det);
    result.M31 = (d13 * det);
    result.M32 = (-d23 * det);
    result.M33 = (d33 * det);
    result.M34 = (-d43 * det);
    result.M41 = (-d14 * det);
    result.M42 = (d24 * det);
    result.M43 = (-d34 * det);
    result.M44 = (d44 * det);
    return result;
}

// public static float4x4 Mul(float4x4 left, float4x4 right) [static] :4548
::g::Uno::Float4x4 Matrix::Mul8(::g::Uno::Float4x4 left, ::g::Uno::Float4x4 right)
{
    ::g::Uno::Float4x4 result;
    result.M11 = ((((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41));
    result.M12 = ((((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42));
    result.M13 = ((((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43));
    result.M14 = ((((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44));
    result.M21 = ((((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41));
    result.M22 = ((((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42));
    result.M23 = ((((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43));
    result.M24 = ((((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44));
    result.M31 = ((((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41));
    result.M32 = ((((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42));
    result.M33 = ((((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43));
    result.M34 = ((((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44));
    result.M41 = ((((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41));
    result.M42 = ((((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42));
    result.M43 = ((((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43));
    result.M44 = ((((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44));
    return result;
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) [static] :4521
::g::Uno::Float4x4 Matrix::Mul9(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c)
{
    return Matrix::Mul8(Matrix::Mul8(a, b), c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) [static] :4520
::g::Uno::Float4x4 Matrix::Mul10(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c, ::g::Uno::Float4x4 d)
{
    return Matrix::Mul8(Matrix::Mul9(a, b, c), d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) [static] :4397
::g::Uno::Float4x4 Matrix::RotationAxis(::g::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::g::Uno::Vector::Normalize1(axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::g::Uno::Math::Cos1(angleRadians);
    float s = ::g::Uno::Math::Sin1(angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (xx + (c * (1.0f - xx)));
    result.M12 = ((xy - (c * xy)) + (s * z));
    result.M13 = ((xz - (c * xz)) - (s * y));
    result.M21 = ((xy - (c * xy)) - (s * z));
    result.M22 = (yy + (c * (1.0f - yy)));
    result.M23 = ((yz - (c * yz)) + (s * x));
    result.M31 = ((xz - (c * xz)) + (s * y));
    result.M32 = ((yz - (c * yz)) - (s * x));
    result.M33 = (zz + (c * (1.0f - zz)));
    return result;
}

// public static float4x4 RotationQuaternion(float4 rotation) [static] :4443
::g::Uno::Float4x4 Matrix::RotationQuaternion(::g::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (1.0f - (2.0f * (yy + zz)));
    result.M12 = (2.0f * (xy + zw));
    result.M13 = (2.0f * (zx - yw));
    result.M21 = (2.0f * (xy - zw));
    result.M22 = (1.0f - (2.0f * (zz + xx)));
    result.M23 = (2.0f * (yz + xw));
    result.M31 = (2.0f * (zx + yw));
    result.M32 = (2.0f * (yz - xw));
    result.M33 = (1.0f - (2.0f * (yy + xx)));
    return result;
}

// public static float4x4 RotationZ(float angleRadians) [static] :4438
::g::Uno::Float4x4 Matrix::RotationZ(float angleRadians)
{
    return Matrix::RotationAxis(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), angleRadians);
}

// public static float4x4 Scaling(float scale) [static] :4379
::g::Uno::Float4x4 Matrix::Scaling(float scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

// public static float4x4 Scaling(float x, float y, float z) [static] :4370
::g::Uno::Float4x4 Matrix::Scaling1(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

// public static float4x4 Scaling(float3 scale) [static] :4361
::g::Uno::Float4x4 Matrix::Scaling2(::g::Uno::Float3 scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

// public static float4x4 Shear(float2 angle) [static] :4388
::g::Uno::Float4x4 Matrix::Shear(::g::Uno::Float2 angle)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M12 = ::g::Uno::Math::Tan1(angle.Y);
    result.M21 = ::g::Uno::Math::Tan1(angle.X);
    return result;
}

// public static float4x4 Translation(float x, float y, float z) [static] :4502
::g::Uno::Float4x4 Matrix::Translation(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

// public static float4x4 Translation(float3 offset) [static] :4493
::g::Uno::Float4x4 Matrix::Translation1(::g::Uno::Float3 offset)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#9
// ---------------------------------------------------------------------------

// public sealed class NotImplementedException :243
// {
::g::Uno::Exception_type* NotImplementedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NotImplementedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotImplementedException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)NotImplementedException__New4_fn;
    ::STRINGS[26] = uString::Const("Not implemented");
    type->SetFields(3);
    return type;
}

// public NotImplementedException() :245
void NotImplementedException__ctor_3_fn(NotImplementedException* __this)
{
    __this->ctor_3();
}

// public NotImplementedException New() :245
void NotImplementedException__New4_fn(NotImplementedException** __retval)
{
    *__retval = NotImplementedException::New4();
}

// public NotImplementedException() [instance] :245
void NotImplementedException::ctor_3()
{
    ctor_1(::STRINGS[26/*"Not impleme...*/]);
}

// public NotImplementedException New() [static] :245
NotImplementedException* NotImplementedException::New4()
{
    NotImplementedException* obj1 = (NotImplementedException*)uNew(NotImplementedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#10
// ----------------------------------------------------------------------------

// public sealed class NotSupportedException :260
// {
::g::Uno::Exception_type* NotSupportedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NotSupportedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotSupportedException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)NotSupportedException__New4_fn;
    ::STRINGS[27] = uString::Const("Method not supported");
    type->SetFields(3);
    return type;
}

// public NotSupportedException() :262
void NotSupportedException__ctor_3_fn(NotSupportedException* __this)
{
    __this->ctor_3();
}

// public NotSupportedException New() :262
void NotSupportedException__New4_fn(NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New4();
}

// public NotSupportedException() [instance] :262
void NotSupportedException::ctor_3()
{
    ctor_1(::STRINGS[27/*"Method not ...*/]);
}

// public NotSupportedException New() [static] :262
NotSupportedException* NotSupportedException::New4()
{
    NotSupportedException* obj1 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#11
// ----------------------------------------------------------------------------

// public sealed class NullReferenceException :282
// {
::g::Uno::Exception_type* NullReferenceException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NullReferenceException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NullReferenceException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)NullReferenceException__New4_fn;
    ::STRINGS[28] = uString::Const("Object reference was null");
    type->SetFields(3);
    return type;
}

// public NullReferenceException() :284
void NullReferenceException__ctor_3_fn(NullReferenceException* __this)
{
    __this->ctor_3();
}

// public NullReferenceException New() :284
void NullReferenceException__New4_fn(NullReferenceException** __retval)
{
    *__retval = NullReferenceException::New4();
}

// public NullReferenceException() [instance] :284
void NullReferenceException::ctor_3()
{
    ctor_1(::STRINGS[28/*"Object refe...*/]);
}

// public NullReferenceException New() [static] :284
NullReferenceException* NullReferenceException::New4()
{
    NullReferenceException* obj1 = (NullReferenceException*)uNew(NullReferenceException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#46
// -----------------------------------------------------------------

// public intrinsic class Object :4769
// {
// public virtual bool Equals(object o) :4809
void Object__Equals_fn(uObject* __this, uObject* o, bool* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = __this == o || (
                o != NULL && (
                    o->__type == __this->__type || (
                        o->__type->Type == uTypeTypeEnum &&
                        o->__type->Base == __this->__type
                    )
                ) &&
                memcmp((const uint8_t*)__this + sizeof(uObject), (const uint8_t*)o + sizeof(uObject), __this->__type->ValueSize) == 0
            ), void();
    default:
        return *__retval = __this == o, void();
    }
}

// public static bool Equals(object left, object right) :4851
void Object__Equals1_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::Equals1(left, right);
}

// public virtual int GetHashCode() :4789
void Object__GetHashCode_fn(uObject* __this, int* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this + sizeof(uObject), (int)__this->__type->ValueSize), void();
    default:
        return *__retval = (int)uBase::Default::Hash(__this), void();
    }
}

// public Uno.Type GetType() :4776
void Object__GetType_fn(uObject* __this, uType** __retval)
{
    *__retval = Object::GetType(__this);
}

// public Object New() :4771
void Object__New_fn(uObject** __retval)
{
    *__retval = Object::New();
}

// public static bool ReferenceEquals(object left, object right) :4863
void Object__ReferenceEquals_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::ReferenceEquals(left, right);
}

// public virtual string ToString() :4837
void Object__ToString_fn(uObject* __this, uString** __retval)
{
    return *__retval = __this->__type->Type == uTypeTypeEnum
        ? uEnum::GetString(__this->__type, (uint8_t*)__this + sizeof(uObject))
        : uString::Const(__this->__type->FullName), void();
}

// public Uno.Type GetType() [instance] :4776
uType* Object::GetType(uObject* __this)
{
    return __this->__type;
}

// public static bool Equals(object left, object right) [static] :4851
bool Object::Equals1(uObject* left, uObject* right)
{
    if (left == right)
        return true;

    if ((left == NULL) || (right == NULL))
        return false;

    return Object::Equals(uPtr(left), right);
}

// public Object New() [static] :4771
uObject* Object::New()
{
    uObject* obj1 = (uObject*)uNew(uObject_typeof());
    return obj1;
}

// public static bool ReferenceEquals(object left, object right) [static] :4863
bool Object::ReferenceEquals(uObject* left, uObject* right)
{
    return left == right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#12
// ----------------------------------------------------------------------------

// public sealed class ObjectDisposedException :299
// {
::g::Uno::Exception_type* ObjectDisposedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ObjectDisposedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ObjectDisposedException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[29] = uString::Const("Attempt to access disposed object: ");
    type->SetFields(3);
    return type;
}

// public ObjectDisposedException(string objectName) :301
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName)
{
    __this->ctor_3(objectName);
}

// public ObjectDisposedException New(string objectName) :301
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval)
{
    *__retval = ObjectDisposedException::New4(objectName);
}

// public ObjectDisposedException(string objectName) [instance] :301
void ObjectDisposedException::ctor_3(uString* objectName)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[29/*"Attempt to ...*/], objectName));
}

// public ObjectDisposedException New(string objectName) [static] :301
ObjectDisposedException* ObjectDisposedException::New4(uString* objectName)
{
    ObjectDisposedException* obj1 = (ObjectDisposedException*)uNew(ObjectDisposedException_typeof());
    obj1->ctor_3(objectName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Exceptions/$.uno#13
// ----------------------------------------------------------------------------

// public sealed class OverflowException :316
// {
::g::Uno::Exception_type* OverflowException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OverflowException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.OverflowException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    return type;
}

// public OverflowException(string message) :318
void OverflowException__ctor_3_fn(OverflowException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public OverflowException New(string message) :318
void OverflowException__New4_fn(uString* message, OverflowException** __retval)
{
    *__retval = OverflowException::New4(message);
}

// public OverflowException(string message) [instance] :318
void OverflowException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public OverflowException New(string message) [static] :318
OverflowException* OverflowException::New4(uString* message)
{
    OverflowException* obj1 = (OverflowException*)uNew(OverflowException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#47
// -----------------------------------------------------------------

// public delegate bool Predicate<T>(T arg) :4878
uDelegateType* Predicate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Predicate`1", 1, 1);
    type->SetSignature(::g::Uno::Bool_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#48
// -----------------------------------------------------------------

// public static class Quaternion :4891
// {
uClassType* Quaternion_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Quaternion", options);
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[28] = ::g::Uno::Float3x3_typeof();
    return type;
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) :5021
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle(*pitch, *yaw, *roll);
}

// public static float4 FromEulerAngle(float3 v) :5016
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle1(*v);
}

// public static float4 FromEulerAngleDegrees(float pitch, float yaw, float roll) :5049
void Quaternion__FromEulerAngleDegrees_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngleDegrees(*pitch, *yaw, *roll);
}

// public static float4 FromEulerAngleDegrees(float3 v) :5044
void Quaternion__FromEulerAngleDegrees1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngleDegrees1(*v);
}

// private static float NormalizeAngleDegrees(float angle) :5104
void Quaternion__NormalizeAngleDegrees_fn(float* angle, float* __retval)
{
    *__retval = Quaternion::NormalizeAngleDegrees(*angle);
}

// private static float3 NormalizeAnglesDegrees(float3 angles) :5096
void Quaternion__NormalizeAnglesDegrees_fn(::g::Uno::Float3* angles, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::NormalizeAnglesDegrees(*angles);
}

// public static float4 RotationMatrix(float3x3 matrix) :5113
void Quaternion__RotationMatrix_fn(::g::Uno::Float3x3* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::RotationMatrix(*matrix);
}

// public static float3 ToEulerAngle(float4 q1) :5057
void Quaternion__ToEulerAngle_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::ToEulerAngle(*q1);
}

// public static float3 ToEulerAngleDegrees(float4 q1) :5088
void Quaternion__ToEulerAngleDegrees_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::ToEulerAngleDegrees(*q1);
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) [static] :5021
::g::Uno::Float4 Quaternion::FromEulerAngle(float pitch, float yaw, float roll)
{
    float tmp = pitch;
    pitch = yaw;
    yaw = tmp;
    float rollOver2 = roll * 0.5f;
    float sinRollOver2 = ::g::Uno::Math::Sin1(rollOver2);
    float cosRollOver2 = ::g::Uno::Math::Cos1(rollOver2);
    float yawOver2 = yaw * 0.5f;
    float sinYawOver2 = ::g::Uno::Math::Sin1(yawOver2);
    float cosYawOver2 = ::g::Uno::Math::Cos1(yawOver2);
    float pitchOver2 = pitch * 0.5f;
    float sinPitchOver2 = ::g::Uno::Math::Sin1(pitchOver2);
    float cosPitchOver2 = ::g::Uno::Math::Cos1(pitchOver2);
    ::g::Uno::Float4 result;
    result.W = (((cosPitchOver2 * cosYawOver2) * cosRollOver2) + ((sinPitchOver2 * sinYawOver2) * sinRollOver2));
    result.X = (((cosPitchOver2 * sinYawOver2) * cosRollOver2) + ((sinPitchOver2 * cosYawOver2) * sinRollOver2));
    result.Y = (((sinPitchOver2 * cosYawOver2) * cosRollOver2) - ((cosPitchOver2 * sinYawOver2) * sinRollOver2));
    result.Z = (((cosPitchOver2 * cosYawOver2) * sinRollOver2) - ((sinPitchOver2 * sinYawOver2) * cosRollOver2));
    return result;
}

// public static float4 FromEulerAngle(float3 v) [static] :5016
::g::Uno::Float4 Quaternion::FromEulerAngle1(::g::Uno::Float3 v)
{
    return Quaternion::FromEulerAngle(v.X, v.Y, v.Z);
}

// public static float4 FromEulerAngleDegrees(float pitch, float yaw, float roll) [static] :5049
::g::Uno::Float4 Quaternion::FromEulerAngleDegrees(float pitch, float yaw, float roll)
{
    return Quaternion::FromEulerAngle(::g::Uno::Math::DegreesToRadians1(pitch), ::g::Uno::Math::DegreesToRadians1(yaw), ::g::Uno::Math::DegreesToRadians1(roll));
}

// public static float4 FromEulerAngleDegrees(float3 v) [static] :5044
::g::Uno::Float4 Quaternion::FromEulerAngleDegrees1(::g::Uno::Float3 v)
{
    return Quaternion::FromEulerAngleDegrees(v.X, v.Y, v.Z);
}

// private static float NormalizeAngleDegrees(float angle) [static] :5104
float Quaternion::NormalizeAngleDegrees(float angle)
{
    while (angle > 360.0f)
        angle = angle - 360.0f;

    while (angle < 0.0f)
        angle = angle + 360.0f;

    return angle;
}

// private static float3 NormalizeAnglesDegrees(float3 angles) [static] :5096
::g::Uno::Float3 Quaternion::NormalizeAnglesDegrees(::g::Uno::Float3 angles)
{
    angles.X = Quaternion::NormalizeAngleDegrees(angles.X);
    angles.Y = Quaternion::NormalizeAngleDegrees(angles.Y);
    angles.Z = Quaternion::NormalizeAngleDegrees(angles.Z);
    return angles;
}

// public static float4 RotationMatrix(float3x3 matrix) [static] :5113
::g::Uno::Float4 Quaternion::RotationMatrix(::g::Uno::Float3x3 matrix)
{
    float sqrt;
    float halff;
    float scale = (matrix.M11 + matrix.M22) + matrix.M33;
    ::g::Uno::Float4 result;

    if (scale > 0.0f)
    {
        sqrt = ::g::Uno::Math::Sqrt1(scale + 1.0f);
        result.W = (sqrt * 0.5f);
        sqrt = 0.5f / sqrt;
        result.X = ((matrix.M23 - matrix.M32) * sqrt);
        result.Y = ((matrix.M31 - matrix.M13) * sqrt);
        result.Z = ((matrix.M12 - matrix.M21) * sqrt);
    }
    else if ((matrix.M11 >= matrix.M22) && (matrix.M11 >= matrix.M33))
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M11) - matrix.M22) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = (0.5f * sqrt);
        result.Y = ((matrix.M12 + matrix.M21) * halff);
        result.Z = ((matrix.M13 + matrix.M31) * halff);
        result.W = ((matrix.M23 - matrix.M32) * halff);
    }
    else if (matrix.M22 > matrix.M33)
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M22) - matrix.M11) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = ((matrix.M21 + matrix.M12) * halff);
        result.Y = (0.5f * sqrt);
        result.Z = ((matrix.M32 + matrix.M23) * halff);
        result.W = ((matrix.M31 - matrix.M13) * halff);
    }
    else
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M33) - matrix.M11) - matrix.M22);
        halff = 0.5f / sqrt;
        result.X = ((matrix.M31 + matrix.M13) * halff);
        result.Y = ((matrix.M32 + matrix.M23) * halff);
        result.Z = (0.5f * sqrt);
        result.W = ((matrix.M12 - matrix.M21) * halff);
    }

    return result;
}

// public static float3 ToEulerAngle(float4 q1) [static] :5057
::g::Uno::Float3 Quaternion::ToEulerAngle(::g::Uno::Float4 q1)
{
    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = ((sqx + sqy) + sqz) + sqw;
    float test = (q1.X * q1.W) - (q1.Y * q1.Z);
    ::g::Uno::Float3 v;

    if (test > (0.4995f * unit))
    {
        v.Y = (2.0f * ::g::Uno::Math::Atan22(q1.Y, q1.X));
        v.X = 1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    if (test < (-0.4995f * unit))
    {
        v.Y = (-2.0f * ::g::Uno::Math::Atan22(q1.Y, q1.X));
        v.X = -1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    ::g::Uno::Float4 q = ::g::Uno::Float4__New2(q1.W, q1.Z, q1.X, q1.Y);
    v.Y = ::g::Uno::Math::Atan22(((2.0f * q.X) * q.W) + ((2.0f * q.Y) * q.Z), 1.0f - (2.0f * ((q.Z * q.Z) + (q.W * q.W))));
    v.X = ::g::Uno::Math::Asin1(2.0f * ((q.X * q.Z) - (q.W * q.Y)));
    v.Z = ::g::Uno::Math::Atan22(((2.0f * q.X) * q.Y) + ((2.0f * q.Z) * q.W), 1.0f - (2.0f * ((q.Y * q.Y) + (q.Z * q.Z))));
    return v;
}

// public static float3 ToEulerAngleDegrees(float4 q1) [static] :5088
::g::Uno::Float3 Quaternion::ToEulerAngleDegrees(::g::Uno::Float4 q1)
{
    ::g::Uno::Float3 v = Quaternion::ToEulerAngle(q1);
    return Quaternion::NormalizeAnglesDegrees(::g::Uno::Float3__New2(::g::Uno::Math::RadiansToDegrees1(v.X), ::g::Uno::Math::RadiansToDegrees1(v.Y), ::g::Uno::Math::RadiansToDegrees1(v.Z)));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#50
// -----------------------------------------------------------------

// public struct Rect :5334
// {
uStructType* Rect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Rect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Rect", options);
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Rect__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[29] = ::g::Uno::Recti_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Rect, Left), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Rect, Top), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Rect, Right), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Rect, Bottom), 0);
    return type;
}

// public Rect(float left, float top, float right, float bottom) :5338
void Rect__ctor__fn(Rect* __this, float* left, float* top, float* right, float* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Rect(float2 pos, float2 size) :5346
void Rect__ctor_1_fn(Rect* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->ctor_1(*pos, *size);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) :5553
void Rect__ContainingPoints_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, Rect* __retval)
{
    *__retval = Rect__ContainingPoints(*point0, *point1);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) :5569
void Rect__ContainingPoints1_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, ::g::Uno::Float2* point2, ::g::Uno::Float2* point3, Rect* __retval)
{
    *__retval = Rect__ContainingPoints1(*point0, *point1, *point2, *point3);
}

// public static bool Equals(Uno.Rect rect1, Uno.Rect rect2) :5354
void Rect__Equals2_fn(Rect* rect1, Rect* rect2, bool* __retval)
{
    *__retval = Rect__Equals2(*rect1, *rect2);
}

// public float get_Height() :5425
void Rect__get_Height_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :5426
void Rect__set_Height_fn(Rect* __this, float* value)
{
    __this->Height(*value);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) :5528
void Rect__Inflate_fn(Rect* r, float* size, Rect* __retval)
{
    *__retval = Rect__Inflate(*r, *size);
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) :5519
void Rect__Inflate1_fn(Rect* r, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__Inflate1(*r, *size);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) :5478
void Rect__Intersect_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Intersect(*a, *b);
}

// public bool Intersects(Uno.Rect r) :5454
void Rect__Intersects_fn(Rect* __this, Rect* r, bool* __retval)
{
    *__retval = __this->Intersects(*r);
}

// public bool get_IsInfinite() :5364
void Rect__get_IsInfinite_fn(Rect* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// public float2 get_LeftBottom() :5397
void Rect__get_LeftBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftBottom();
}

// public float2 get_LeftTop() :5387
void Rect__get_LeftTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftTop();
}

// public float2 get_Maximum() :5376
void Rect__get_Maximum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float2 value) :5377
void Rect__set_Maximum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Maximum(*value);
}

// public float2 get_Minimum() :5370
void Rect__get_Minimum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float2 value) :5371
void Rect__set_Minimum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Minimum(*value);
}

// public Rect New(float left, float top, float right, float bottom) :5338
void Rect__New1_fn(float* left, float* top, float* right, float* bottom, Rect* __retval)
{
    *__retval = Rect__New1(*left, *top, *right, *bottom);
}

// public Rect New(float2 pos, float2 size) :5346
void Rect__New2_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__New2(*pos, *size);
}

// public static implicit operator Uno.Rect(Uno.Recti r) :5464
void Rect__op_Implicit_fn(::g::Uno::Recti* r, Rect* __retval)
{
    *__retval = Rect__op_Implicit(*r);
}

// public float2 get_Position() :5407
void Rect__get_Position_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :5408
void Rect__set_Position_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RightBottom() :5402
void Rect__get_RightBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightBottom();
}

// public float2 get_RightTop() :5392
void Rect__get_RightTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightTop();
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) :5514
void Rect__Scale_fn(Rect* r, float* scale, Rect* __retval)
{
    *__retval = Rect__Scale(*r, *scale);
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) :5505
void Rect__Scale1_fn(Rect* r, ::g::Uno::Float2* scale, Rect* __retval)
{
    *__retval = Rect__Scale1(*r, *scale);
}

// public float2 get_Size() :5431
void Rect__get_Size_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :5432
void Rect__set_Size_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :5459
void Rect__ToString_fn(Rect* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->Left, ::TYPES[11/*float*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Top, ::TYPES[11/*float*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Right, ::TYPES[11/*float*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Float::ToString(__this->Bottom, ::TYPES[11/*float*/])), void();
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) :5487
void Rect__Transform_fn(Rect* r, ::g::Uno::Float4x4* matrix, Rect* __retval)
{
    *__retval = Rect__Transform(*r, *matrix);
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) :5496
void Rect__Translate_fn(Rect* r, ::g::Uno::Float2* offset, Rect* __retval)
{
    *__retval = Rect__Translate(*r, *offset);
}

// public static Uno.Rect Union(Uno.Rect a, Uno.Rect b) :5469
void Rect__Union_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Union(*a, *b);
}

// public float get_Width() :5419
void Rect__get_Width_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :5420
void Rect__set_Width_fn(Rect* __this, float* value)
{
    __this->Width(*value);
}

// public Rect(float left, float top, float right, float bottom) [instance] :5338
void Rect::ctor_(float left, float top, float right, float bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Rect(float2 pos, float2 size) [instance] :5346
void Rect::ctor_1(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (::g::Uno::Float::IsInfinity(size.X) ? size.X : Left + size.X);
    Bottom = (::g::Uno::Float::IsInfinity(size.Y) ? size.Y : Top + size.Y);
}

// public float get_Height() [instance] :5425
float Rect::Height()
{
    return ::g::Uno::Float::IsInfinity(Bottom) ? Bottom : Bottom - Top;
}

// public void set_Height(float value) [instance] :5426
void Rect::Height(float value)
{
    Bottom = (::g::Uno::Float::IsInfinity(value) ? value : Top + value);
}

// public bool Intersects(Uno.Rect r) [instance] :5454
bool Rect::Intersects(Rect r)
{
    return !((((r.Left > Right) || (r.Right < Left)) || (r.Top > Bottom)) || (r.Bottom < Top));
}

// public bool get_IsInfinite() [instance] :5364
bool Rect::IsInfinite()
{
    return ((::g::Uno::Float::IsInfinity(Left) || ::g::Uno::Float::IsInfinity(Top)) || ::g::Uno::Float::IsInfinity(Right)) || ::g::Uno::Float::IsInfinity(Bottom);
}

// public float2 get_LeftBottom() [instance] :5397
::g::Uno::Float2 Rect::LeftBottom()
{
    return ::g::Uno::Float2__New2(Left, Bottom);
}

// public float2 get_LeftTop() [instance] :5387
::g::Uno::Float2 Rect::LeftTop()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public float2 get_Maximum() [instance] :5376
::g::Uno::Float2 Rect::Maximum()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public void set_Maximum(float2 value) [instance] :5377
void Rect::Maximum(::g::Uno::Float2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public float2 get_Minimum() [instance] :5370
::g::Uno::Float2 Rect::Minimum()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public void set_Minimum(float2 value) [instance] :5371
void Rect::Minimum(::g::Uno::Float2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public float2 get_Position() [instance] :5407
::g::Uno::Float2 Rect::Position()
{
    return Minimum();
}

// public void set_Position(float2 value) [instance] :5408
void Rect::Position(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 sz = Size();
    Left = value.X;
    Top = value.Y;
    Size(sz);
}

// public float2 get_RightBottom() [instance] :5402
::g::Uno::Float2 Rect::RightBottom()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public float2 get_RightTop() [instance] :5392
::g::Uno::Float2 Rect::RightTop()
{
    return ::g::Uno::Float2__New2(Right, Top);
}

// public float2 get_Size() [instance] :5431
::g::Uno::Float2 Rect::Size()
{
    return ::g::Uno::Float2__New2(Width(), Height());
}

// public void set_Size(float2 value) [instance] :5432
void Rect::Size(::g::Uno::Float2 value)
{
    Width(value.X);
    Height(value.Y);
}

// public float get_Width() [instance] :5419
float Rect::Width()
{
    return ::g::Uno::Float::IsInfinity(Right) ? Right : Right - Left;
}

// public void set_Width(float value) [instance] :5420
void Rect::Width(float value)
{
    Right = (::g::Uno::Float::IsInfinity(value) ? value : Left + value);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) [static] :5553
Rect Rect__ContainingPoints(::g::Uno::Float2 point0, ::g::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) [static] :5569
Rect Rect__ContainingPoints1(::g::Uno::Float2 point0, ::g::Uno::Float2 point1, ::g::Uno::Float2 point2, ::g::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    minX = ::g::Uno::Math::Min1(minX, point2.X);
    maxX = ::g::Uno::Math::Max1(maxX, point2.X);
    minY = ::g::Uno::Math::Min1(minY, point2.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point2.Y);
    minX = ::g::Uno::Math::Min1(minX, point3.X);
    maxX = ::g::Uno::Math::Max1(maxX, point3.X);
    minY = ::g::Uno::Math::Min1(minY, point3.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point3.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static bool Equals(Uno.Rect rect1, Uno.Rect rect2) [static] :5354
bool Rect__Equals2(Rect rect1, Rect rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) [static] :5528
Rect Rect__Inflate(Rect r, float size)
{
    return Rect__Inflate1(r, ::g::Uno::Float2__New2(size, size));
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) [static] :5519
Rect Rect__Inflate1(Rect r, ::g::Uno::Float2 size)
{
    return Rect__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) [static] :5478
Rect Rect__Intersect(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Max1(a.Left, b.Left), ::g::Uno::Math::Max1(a.Top, b.Top), ::g::Uno::Math::Min1(a.Right, b.Right), ::g::Uno::Math::Min1(a.Bottom, b.Bottom));
}

// public Rect New(float left, float top, float right, float bottom) [static] :5338
Rect Rect__New1(float left, float top, float right, float bottom)
{
    Rect obj1;
    obj1.ctor_(left, top, right, bottom);
    return obj1;
}

// public Rect New(float2 pos, float2 size) [static] :5346
Rect Rect__New2(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Rect obj2;
    obj2.ctor_1(pos, size);
    return obj2;
}

// public static implicit operator Uno.Rect(Uno.Recti r) [static] :5464
Rect Rect__op_Implicit(::g::Uno::Recti r)
{
    return Rect__New1((float)r.Left, (float)r.Top, (float)r.Right, (float)r.Bottom);
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) [static] :5514
Rect Rect__Scale(Rect r, float scale)
{
    return Rect__Scale1(r, ::g::Uno::Float2__New2(scale, scale));
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) [static] :5505
Rect Rect__Scale1(Rect r, ::g::Uno::Float2 scale)
{
    return Rect__New1(r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) [static] :5487
Rect Rect__Transform(Rect r, ::g::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints1(::g::Uno::Vector::TransformCoordinate(r.LeftTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightBottom(), matrix), ::g::Uno::Vector::TransformCoordinate(r.LeftBottom(), matrix));
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) [static] :5496
Rect Rect__Translate(Rect r, ::g::Uno::Float2 offset)
{
    return Rect__New1(r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}

// public static Uno.Rect Union(Uno.Rect a, Uno.Rect b) [static] :5469
Rect Rect__Union(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Min1(a.Left, b.Left), ::g::Uno::Math::Min1(a.Top, b.Top), ::g::Uno::Math::Max1(a.Right, b.Right), ::g::Uno::Math::Max1(a.Bottom, b.Bottom));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#50
// -----------------------------------------------------------------

// public struct Recti :5596
// {
uStructType* Recti_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Recti);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Recti", options);
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Recti__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[20] = ::g::Uno::Int2_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Recti, Left), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Recti, Top), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Recti, Right), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Recti, Bottom), 0);
    return type;
}

// public Recti(int left, int top, int right, int bottom) :5600
void Recti__ctor__fn(Recti* __this, int* left, int* top, int* right, int* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Recti(int2 pos, int2 size) :5608
void Recti__ctor_1_fn(Recti* __this, ::g::Uno::Int2* pos, ::g::Uno::Int2* size)
{
    __this->ctor_1(*pos, *size);
}

// public int get_Area() :5675
void Recti__get_Area_fn(Recti* __this, int* __retval)
{
    *__retval = __this->Area();
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) :5616
void Recti__Equals2_fn(Recti* rect1, Recti* rect2, bool* __retval)
{
    *__retval = Recti__Equals2(*rect1, *rect2);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) :5755
void Recti__Inflate_fn(Recti* r, int* size, Recti* __retval)
{
    *__retval = Recti__Inflate(*r, *size);
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) :5746
void Recti__Inflate1_fn(Recti* r, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__Inflate1(*r, *size);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) :5712
void Recti__Intersect_fn(Recti* a, Recti* b, Recti* __retval)
{
    *__retval = Recti__Intersect(*a, *b);
}

// public int2 get_LeftBottom() :5653
void Recti__get_LeftBottom_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->LeftBottom();
}

// public int2 get_Maximum() :5632
void Recti__get_Maximum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(int2 value) :5633
void Recti__set_Maximum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Maximum(*value);
}

// public int2 get_Minimum() :5626
void Recti__get_Minimum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(int2 value) :5627
void Recti__set_Minimum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Minimum(*value);
}

// public Recti New(int left, int top, int right, int bottom) :5600
void Recti__New1_fn(int* left, int* top, int* right, int* bottom, Recti* __retval)
{
    *__retval = Recti__New1(*left, *top, *right, *bottom);
}

// public Recti New(int2 pos, int2 size) :5608
void Recti__New2_fn(::g::Uno::Int2* pos, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__New2(*pos, *size);
}

// public int2 get_Position() :5663
void Recti__get_Position_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int2 value) :5664
void Recti__set_Position_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Position(*value);
}

// public int2 get_RightTop() :5648
void Recti__get_RightTop_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->RightTop();
}

// public int2 get_Size() :5669
void Recti__get_Size_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(int2 value) :5670
void Recti__set_Size_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :5693
void Recti__ToString_fn(Recti* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->Left, ::TYPES[14/*int*/]), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Top, ::TYPES[14/*int*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Right, ::TYPES[14/*int*/])), ::STRINGS[11/*", "*/]), ::g::Uno::Int::ToString(__this->Bottom, ::TYPES[14/*int*/])), void();
}

// public static Uno.Recti Union(Uno.Recti a, Uno.Recti b) :5703
void Recti__Union_fn(Recti* a, Recti* b, Recti* __retval)
{
    *__retval = Recti__Union(*a, *b);
}

// public Recti(int left, int top, int right, int bottom) [instance] :5600
void Recti::ctor_(int left, int top, int right, int bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Recti(int2 pos, int2 size) [instance] :5608
void Recti::ctor_1(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (Left + size.X);
    Bottom = (Top + size.Y);
}

// public int get_Area() [instance] :5675
int Recti::Area()
{
    return (Right - Left) * (Bottom - Top);
}

// public int2 get_LeftBottom() [instance] :5653
::g::Uno::Int2 Recti::LeftBottom()
{
    return ::g::Uno::Int2__New2(Left, Bottom);
}

// public int2 get_Maximum() [instance] :5632
::g::Uno::Int2 Recti::Maximum()
{
    return ::g::Uno::Int2__New2(Right, Bottom);
}

// public void set_Maximum(int2 value) [instance] :5633
void Recti::Maximum(::g::Uno::Int2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public int2 get_Minimum() [instance] :5626
::g::Uno::Int2 Recti::Minimum()
{
    return ::g::Uno::Int2__New2(Left, Top);
}

// public void set_Minimum(int2 value) [instance] :5627
void Recti::Minimum(::g::Uno::Int2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public int2 get_Position() [instance] :5663
::g::Uno::Int2 Recti::Position()
{
    return Minimum();
}

// public void set_Position(int2 value) [instance] :5664
void Recti::Position(::g::Uno::Int2 value)
{
    ::g::Uno::Int2 dp = ::g::Uno::Int2__op_Subtraction1(value, Position());
    Left = value.X;
    Right = (Right + dp.X);
    Top = value.Y;
    Bottom = (Bottom + dp.Y);
}

// public int2 get_RightTop() [instance] :5648
::g::Uno::Int2 Recti::RightTop()
{
    return ::g::Uno::Int2__New2(Right, Top);
}

// public int2 get_Size() [instance] :5669
::g::Uno::Int2 Recti::Size()
{
    return ::g::Uno::Int2__New2(Right - Left, Bottom - Top);
}

// public void set_Size(int2 value) [instance] :5670
void Recti::Size(::g::Uno::Int2 value)
{
    Right = (Left + value.X);
    Bottom = (Top + value.Y);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) [static] :5616
bool Recti__Equals2(Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) [static] :5755
Recti Recti__Inflate(Recti r, int size)
{
    return Recti__Inflate1(r, ::g::Uno::Int2__New2(size, size));
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) [static] :5746
Recti Recti__Inflate1(Recti r, ::g::Uno::Int2 size)
{
    return Recti__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) [static] :5712
Recti Recti__Intersect(Recti a, Recti b)
{
    return Recti__New1(::g::Uno::Math::Max8(a.Left, b.Left), ::g::Uno::Math::Max8(a.Top, b.Top), ::g::Uno::Math::Min8(a.Right, b.Right), ::g::Uno::Math::Min8(a.Bottom, b.Bottom));
}

// public Recti New(int left, int top, int right, int bottom) [static] :5600
Recti Recti__New1(int left, int top, int right, int bottom)
{
    Recti obj4;
    obj4.ctor_(left, top, right, bottom);
    return obj4;
}

// public Recti New(int2 pos, int2 size) [static] :5608
Recti Recti__New2(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Recti obj5;
    obj5.ctor_1(pos, size);
    return obj5;
}

// public static Uno.Recti Union(Uno.Recti a, Uno.Recti b) [static] :5703
Recti Recti__Union(Recti a, Recti b)
{
    return Recti__New1(::g::Uno::Math::Min8(a.Left, b.Left), ::g::Uno::Math::Min8(a.Top, b.Top), ::g::Uno::Math::Max8(a.Right, b.Right), ::g::Uno::Math::Max8(a.Bottom, b.Bottom));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#51
// -----------------------------------------------------------------

// public intrinsic struct SByte :5776
// {
uStructType* SByte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :5783
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int8_t>(SByte_typeof(), *__this, U_ALLOCA(SByte_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :5789
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :5800
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#54
// -----------------------------------------------------------------

// public intrinsic struct Short :5981
// {
uStructType* Short_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short__ToString_fn;
    ::STRINGS[30] = uString::Const("Value was either too large or too small for short");
    ::STRINGS[31] = uString::Const("Unable to convert string to short");
    return type;
}

// public override sealed bool Equals(object o) :5987
void Short__Equals_fn(int16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int16_t>(Short_typeof(), *__this, U_ALLOCA(Short_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :5993
void Short__GetHashCode_fn(int16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :6004
void Short__ToString_fn(int16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#57
// -----------------------------------------------------------------

// public intrinsic sealed class String :6229
// {
// static String() :6229
static void String__cctor__fn(uType* __type)
{
    String::Empty_ = ::STRINGS[19/*""*/];
}

uType* String_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.String", options);
    type->fp_cctor_ = String__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))String__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))String__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))String__ToString_fn;
    ::STRINGS[19] = uString::Const("");
    ::STRINGS[32] = uString::Const("value");
    ::STRINGS[33] = uString::Const("startIndex");
    ::STRINGS[34] = uString::Const("str");
    ::STRINGS[35] = uString::Const("pos");
    ::STRINGS[36] = uString::Const("oldValue");
    ::TYPES[15] = uObject_typeof();
    ::TYPES[30] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[31] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof());
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[32] = String_typeof()->Array();
    ::TYPES[33] = ::g::Uno::Char_typeof()->Array()->Array();
    type->SetFields(0,
        String_typeof(), (uintptr_t)&::g::Uno::String::Empty_, uFieldFlagsStatic);
    return type;
}

// public static string Concat(object a, object b) :6445
void String__Concat_fn(uObject* a, uObject* b, uString** __retval)
{
    *__retval = String::Concat(a, b);
}

// public static string Concat(string a, string b) :6402
void String__Concat1_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::Concat1(a, b);
}

// public bool EndsWith(string value) :6536
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::EndsWith(__this, value);
}

// public override sealed bool Equals(object other) :6352
void String__Equals_fn(uString* __this, uObject* other, bool* __retval)
{
    if (other != NULL && __this->__type == other->__type)
    {
        uString* str = (uString*)other;
        return *__retval = __this->_length == str->_length && !memcmp(__this->_ptr, str->_ptr, sizeof(uChar) * __this->_length), void();
    }
    
    return *__retval = false, void();
}

// public static bool Equals(string left, string right) :6373
void String__Equals3_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::Equals3(left, right);
}

// public static string Format(string str, object[] objs) :6864
void String__Format_fn(uString* str, uArray* objs, uString** __retval)
{
    *__retval = String::Format(str, objs);
}

// public override sealed int GetHashCode() :6246
void String__GetHashCode_fn(uString* __this, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this->_ptr, sizeof(uChar) * __this->_length), void();
}

// public int IndexOf(char c, [int startIndex]) :6490
void String__IndexOf_fn(uString* __this, uChar* c, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf(__this, *c, *startIndex);
}

// public int IndexOf(string str, [int startIndex]) :6835
void String__IndexOf1_fn(uString* __this, uString* str, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf1(__this, str, *startIndex);
}

// private int IndexOfFirstNotInSet(char[] charSet) :6774
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfFirstNotInSet(__this, charSet);
}

// private int IndexOfFirstNotWhiteSpace() :6796
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfFirstNotWhiteSpace(__this);
}

// private int IndexOfLastNotInSet(char[] charSet) :6782
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfLastNotInSet(__this, charSet);
}

// private int IndexOfLastNotWhiteSpace() :6804
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfLastNotWhiteSpace(__this);
}

// public string Insert(int pos, string str) :6812
void String__Insert_fn(uString* __this, int* pos, uString* str, uString** __retval)
{
    *__retval = String::Insert(__this, *pos, str);
}

// private bool InSet(char c, char[] charSet) :6790
void String__InSet_fn(uString* __this, uChar* c, uArray* charSet, bool* __retval)
{
    *__retval = String::InSet(__this, *c, charSet);
}

// public static bool IsNullOrEmpty(string s) :6636
void String__IsNullOrEmpty_fn(uString* s, bool* __retval)
{
    *__retval = String::IsNullOrEmpty(s);
}

// public static string Join(string separator, string[] value) :6621
void String__Join_fn(uString* separator, uArray* value, uString** __retval)
{
    *__retval = String::Join(separator, value);
}

// private bool MatchesAt(string str, int pos) :6856
void String__MatchesAt_fn(uString* __this, uString* str, int* pos, bool* __retval)
{
    *__retval = String::MatchesAt(__this, str, *pos);
}

// public static operator +(object a, string b) :6460
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition(a, b);
}

// public static operator +(string a, object b) :6455
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval)
{
    *__retval = String::op_Addition1(a, b);
}

// public static operator +(string a, string b) :6450
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition2(a, b);
}

// public static operator ==(string left, string right) :6392
void String__op_Equality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Equality(left, right);
}

// public static operator !=(string left, string right) :6397
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Inequality(left, right);
}

// public string Replace(char oldChar, char newChar) :6268
void String__Replace_fn(uString* __this, uChar* oldChar, uChar* newChar, uString** __retval)
{
    *__retval = String::Replace(__this, *oldChar, *newChar);
}

// public string Replace(string oldValue, string newValue) :6279
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval)
{
    *__retval = String::Replace1(__this, oldValue, newValue);
}

// public string[] Split(char[] splitChars) :6566
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval)
{
    *__retval = String::Split(__this, splitChars);
}

// public bool StartsWith(string value) :6522
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::StartsWith(__this, value);
}

// private char[] SubCharArray(int start, int len) :6308
void String__SubCharArray_fn(uString* __this, int* start, int* len, uArray** __retval)
{
    *__retval = String::SubCharArray(__this, *start, *len);
}

// public string Substring(int start) :6485
void String__Substring_fn(uString* __this, int* start, uString** __retval)
{
    *__retval = String::Substring(__this, *start);
}

// public string Substring(int start, int len) :6465
void String__Substring1_fn(uString* __this, int* start, int* len, uString** __retval)
{
    *__retval = String::Substring1(__this, *start, *len);
}

// public char[] ToCharArray() :6561
void String__ToCharArray_fn(uString* __this, uArray** __retval)
{
    *__retval = String::ToCharArray(__this);
}

// public char[] ToCharArray(int start, int length) :6551
void String__ToCharArray1_fn(uString* __this, int* start, int* length, uArray** __retval)
{
    *__retval = String::ToCharArray1(__this, *start, *length);
}

// public string ToLower() :6318
void String__ToLower_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToLower(__this);
}

// public override sealed string ToString() :6263
void String__ToString_fn(uString* __this, uString** __retval)
{
    return *__retval = __this, void();
}

// public string ToUpper() :6335
void String__ToUpper_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToUpper(__this);
}

// public string Trim() :6698
void String__Trim_fn(uString* __this, uString** __retval)
{
    *__retval = String::Trim(__this);
}

// public string Trim(char[] trimChars) :6712
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval)
{
    *__retval = String::Trim1(__this, trimChars);
}

uSStrong<uString*> String::Empty_;

// public bool EndsWith(string value) [instance] :6536
bool String::EndsWith(uString* __this, uString* value)
{
    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[32/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    int index = __this->Length() - uPtr(value)->Length();

    for (int i = 0; i < value->Length(); i++)
        if (__this->Item(index++) != uPtr(value)->Item(i))
            return false;

    return true;
}

// public int IndexOf(char c, [int startIndex]) [instance] :6490
int String::IndexOf(uString* __this, uChar c, int startIndex)
{
    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[33/*"startIndex"*/]));

    for (int i = startIndex; i < __this->Length(); i++)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// public int IndexOf(string str, [int startIndex]) [instance] :6835
int String::IndexOf1(uString* __this, uString* str, int startIndex)
{
    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[34/*"str"*/]));

    if (String::op_Equality(str, String::Empty()))
        return 0;

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[33/*"startIndex"*/]));

    for (int hay = startIndex; hay < __this->Length(); hay++)
    {
        if (uPtr(str)->Length() > (__this->Length() - hay))
            return -1;

        if (String::MatchesAt(__this, str, hay))
            return hay;
    }

    return -1;
}

// private int IndexOfFirstNotInSet(char[] charSet) [instance] :6774
int String::IndexOfFirstNotInSet(uString* __this, uArray* charSet)
{
    for (int i = 0; i < __this->Length(); i++)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfFirstNotWhiteSpace() [instance] :6796
int String::IndexOfFirstNotWhiteSpace(uString* __this)
{
    for (int i = 0; i < __this->Length(); i++)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// private int IndexOfLastNotInSet(char[] charSet) [instance] :6782
int String::IndexOfLastNotInSet(uString* __this, uArray* charSet)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfLastNotWhiteSpace() [instance] :6804
int String::IndexOfLastNotWhiteSpace(uString* __this)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// public string Insert(int pos, string str) [instance] :6812
uString* String::Insert(uString* __this, int pos, uString* str)
{
    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[34/*"str"*/]));

    if ((pos < 0) || (pos > __this->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[35/*"pos"*/]));

    if (uPtr(str)->Length() == 0)
        return __this;

    if (__this->Length() == 0)
        return str;

    uArray* s = uArray::New(::TYPES[30/*char[]*/], __this->Length() + uPtr(str)->Length());

    for (int i = 0; i < pos; i++)
        s->Item<uChar>(i) = __this->Item(i);

    for (int i1 = 0; i1 < str->Length(); i1++)
        s->Item<uChar>(i1 + pos) = str->Item(i1);

    for (int i2 = pos; i2 < __this->Length(); i2++)
        s->Item<uChar>(i2 + str->Length()) = __this->Item(i2);

    return uString::CharArray(s);
}

// private bool InSet(char c, char[] charSet) [instance] :6790
bool String::InSet(uString* __this, uChar c, uArray* charSet)
{
    for (int i = 0; i < uPtr(charSet)->Length(); i++)
        if (uPtr(charSet)->Item<uChar>(i) == c)
            return true;

    return false;
}

// private bool MatchesAt(string str, int pos) [instance] :6856
bool String::MatchesAt(uString* __this, uString* str, int pos)
{
    for (int i = 0; i < uPtr(str)->Length(); i++)
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != uPtr(str)->Item(i)))
            return false;

    return true;
}

// public string Replace(char oldChar, char newChar) [instance] :6268
uString* String::Replace(uString* __this, uChar oldChar, uChar newChar)
{
    uArray* s = uArray::New(::TYPES[30/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        uPtr(s)->Item<uChar>(i) = __this->Item(i);

        if (s->Item<uChar>(i) == oldChar)
            s->Item<uChar>(i) = newChar;
    }

    return uString::CharArray(s);
}

// public string Replace(string oldValue, string newValue) [instance] :6279
uString* String::Replace1(uString* __this, uString* oldValue, uString* newValue)
{
    if (String::op_Equality(oldValue, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[36/*"oldValue"*/]));

    if (String::op_Equality(oldValue, String::Empty()))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[19/*""*/], ::STRINGS[36/*"oldValue"*/]));

    int index = String::IndexOf1(__this, oldValue, 0);

    if (index == -1)
        return __this;

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    int pos = 0;

    while (index != -1)
    {
        uPtr(sb)->Append(String::SubCharArray(__this, pos, index - pos));
        sb->Append1(newValue);
        pos = index + uPtr(oldValue)->Length();
        index = String::IndexOf1(__this, oldValue, pos);
    }

    sb->Append(String::SubCharArray(__this, pos, __this->Length() - pos));
    return sb->ToString();
}

// public string[] Split(char[] splitChars) [instance] :6566
uArray* String::Split(uString* __this, uArray* splitChars)
{
    if ((splitChars == NULL) || (uPtr(splitChars)->Length() == 0))
        splitChars = uArray::Init<int>(::TYPES[30/*char[]*/], 4, ' ', 9, 10, 13);

    int splitCount = 0;
    int charCount = 0;

    for (int i = 0; i < __this->Length(); i++)

        for (int k = 0; k < splitChars->Length(); k++)
            if (__this->Item(i) == splitChars->Item<uChar>(k))
                splitCount++;

    uArray* r = uArray::New(::TYPES[32/*string[]*/], splitCount + 1);
    uArray* ch = uArray::New(::TYPES[33/*char[][]*/], splitCount + 1);
    splitCount = 0;
    int start = 0;

    for (int i1 = 0; i1 < __this->Length(); i1++)
    {
        bool found = false;

        for (int k1 = 0; k1 < uPtr(splitChars)->Length(); k1++)
            if (__this->Item(i1) == uPtr(splitChars)->Item<uChar>(k1))
            {
                uPtr(ch)->Strong<uArray*>(splitCount) = uArray::New(::TYPES[30/*char[]*/], charCount);

                for (int n = 0; n < charCount; n++)
                    uPtr(ch->Strong<uArray*>(splitCount))->Item<uChar>(n) = __this->Item(start + n);

                start = i1 + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }

        if (!found)
            charCount++;
    }

    ch->Strong<uArray*>(splitCount) = uArray::New(::TYPES[30/*char[]*/], charCount);

    for (int n1 = 0; n1 < charCount; n1++)
        uPtr(ch->Strong<uArray*>(splitCount))->Item<uChar>(n1) = __this->Item(start + n1);

    for (int i2 = 0; i2 < ch->Length(); i2++)
        r->Strong<uString*>(i2) = uString::CharArray(ch->Strong<uArray*>(i2));

    return r;
}

// public bool StartsWith(string value) [instance] :6522
bool String::StartsWith(uString* __this, uString* value)
{
    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[32/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    for (int i = 0; i < uPtr(value)->Length(); i++)
        if (__this->Item(i) != uPtr(value)->Item(i))
            return false;

    return true;
}

// private char[] SubCharArray(int start, int len) [instance] :6308
uArray* String::SubCharArray(uString* __this, int start, int len)
{
    uArray* chars = uArray::New(::TYPES[30/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(chars)->Item<uChar>(i) = __this->Item(start + i);

    return chars;
}

// public string Substring(int start) [instance] :6485
uString* String::Substring(uString* __this, int start)
{
    return String::Substring1(__this, start, __this->Length() - start);
}

// public string Substring(int start, int len) [instance] :6465
uString* String::Substring1(uString* __this, int start, int len)
{
    if ((start == __this->Length()) && (len == 0))
        return String::Empty();

    uArray* s = uArray::New(::TYPES[30/*char[]*/], len);

    for (int i = 0; i < len; i++)
        s->Item<uChar>(i) = __this->Item(start + i);

    return uString::CharArray(s);
}

// public char[] ToCharArray() [instance] :6561
uArray* String::ToCharArray(uString* __this)
{
    return String::ToCharArray1(__this, 0, __this->Length());
}

// public char[] ToCharArray(int start, int length) [instance] :6551
uArray* String::ToCharArray1(uString* __this, int start, int length)
{
    uArray* result = uArray::New(::TYPES[30/*char[]*/], length);

    for (int i = 0; i < length; i++)
        result->Item<uChar>(i) = __this->Item(start + i);

    return result;
}

// public string ToLower() [instance] :6318
uString* String::ToLower(uString* __this)
{
    uArray* chars = uArray::New(::TYPES[30/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToLower(__this->Item(i));

    return uString::CharArray(chars);
}

// public string ToUpper() [instance] :6335
uString* String::ToUpper(uString* __this)
{
    uArray* chars = uArray::New(::TYPES[30/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToUpper(__this->Item(i));

    return uString::CharArray(chars);
}

// public string Trim() [instance] :6698
uString* String::Trim(uString* __this)
{
    if (String::op_Equality(__this, String::Empty()))
        return String::Empty();

    int first = String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
        return String::Empty();

    int last = String::IndexOfLastNotWhiteSpace(__this);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public string Trim(char[] trimChars) [instance] :6712
uString* String::Trim1(uString* __this, uArray* trimChars)
{
    if (String::op_Equality(__this, String::Empty()))
        return String::Empty();

    int first = String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
        return String::Empty();

    int last = String::IndexOfLastNotInSet(__this, trimChars);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public static string Concat(object a, object b) [static] :6445
uString* String::Concat(uObject* a, uObject* b)
{
    String_typeof()->Init();
    return String::Concat1((a == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(a)), (b == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(b)));
}

// public static string Concat(string a, string b) [static] :6402
uString* String::Concat1(uString* a, uString* b)
{
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(a, NULL) && ::g::Uno::Object::ReferenceEquals(b, NULL))
        return String::Empty();

    if (::g::Uno::Object::ReferenceEquals(a, NULL))
        return b;

    if (::g::Uno::Object::ReferenceEquals(b, NULL))
        return a;

    uArray* s = uArray::New(::TYPES[30/*char[]*/], uPtr(a)->Length() + uPtr(b)->Length());

    for (int i = 0; i < a->Length(); i++)
        s->Item<uChar>(i) = a->Item(i);

    for (int i1 = 0; i1 < b->Length(); i1++)
        s->Item<uChar>(a->Length() + i1) = b->Item(i1);

    return uString::CharArray(s);
}

// public static bool Equals(string left, string right) [static] :6373
bool String::Equals3(uString* left, uString* right)
{
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(left, right))
        return true;

    if (::g::Uno::Object::ReferenceEquals(left, NULL) || ::g::Uno::Object::ReferenceEquals(right, NULL))
        return false;

    if (uPtr(left)->Length() != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(left)->Length(); i++)
        if (uPtr(left)->Item(i) != uPtr(right)->Item(i))
            return false;

    return true;
}

// public static string Format(string str, object[] objs) [static] :6864
uString* String::Format(uString* str, uArray* objs)
{
    String_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > ret3;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    ::g::Uno::Collections::List* tokens = ::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer::TokenizeFormatString(str);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tokens), &ret3), ret3); enum1.MoveNext(::TYPES[31/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]); )
    {
        ::g::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum1.Current(::TYPES[31/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
        uPtr(builder)->Append1(uPtr(token)->ToString1(objs));
    }

    return builder->ToString();
}

// public static bool IsNullOrEmpty(string s) [static] :6636
bool String::IsNullOrEmpty(uString* s)
{
    String_typeof()->Init();
    return String::op_Equality(s, NULL) || String::op_Equality(s, String::Empty());
}

// public static string Join(string separator, string[] value) [static] :6621
uString* String::Join(uString* separator, uArray* value)
{
    String_typeof()->Init();
    uString* result = ::STRINGS[19/*""*/];

    for (int i = 0; i < uPtr(value)->Length(); i++)
    {
        if (i > 0)
            result = String::op_Addition2(result, separator);

        result = String::op_Addition2(result, uPtr(value)->Strong<uString*>(i));
    }

    return result;
}

// public static operator +(object a, string b) [static] :6460
uString* String::op_Addition(uObject* a, uString* b)
{
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, object b) [static] :6455
uString* String::op_Addition1(uString* a, uObject* b)
{
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, string b) [static] :6450
uString* String::op_Addition2(uString* a, uString* b)
{
    String_typeof()->Init();
    return String::Concat1(a, b);
}

// public static operator ==(string left, string right) [static] :6392
bool String::op_Equality(uString* left, uString* right)
{
    String_typeof()->Init();
    return String::Equals3(left, right);
}

// public static operator !=(string left, string right) [static] :6397
bool String::op_Inequality(uString* left, uString* right)
{
    String_typeof()->Init();
    return !String::Equals3(left, right);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#59
// -----------------------------------------------------------------

// public sealed class Type :6986
// {
// static Type() :6986
static void Type__cctor__fn(uType* __type)
{
    Type::EmptyTypes_ = uArray::New(::TYPES[34/*Uno.Type[]*/], 0);
}

uType* Type_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Type);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Type", options);
    type->fp_cctor_ = Type__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Type__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Type__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Type__ToString_fn;
    ::TYPES[34] = Type_typeof()->Array();
    ::TYPES[15] = uObject_typeof();
    type->SetFields(0,
        Type_typeof()->Array(), (uintptr_t)&::g::Uno::Type::EmptyTypes_, uFieldFlagsStatic);
    return type;
}

// public override sealed bool Equals(object obj) :7004
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Uno::Object__Equals_fn(__this, obj, &ret2), ret2), void();
}

// public string get_FullName() :7045
void Type__get_FullName_fn(uType* __this, uString** __retval)
{
    *__retval = Type::FullName(__this);
}

// public override sealed int GetHashCode() :7009
void Type__GetHashCode_fn(uType* __this, int* __retval)
{
    int ret3;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret3), ret3), void();
}

// public bool get_IsClass() :7100
void Type__get_IsClass_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsClass(__this);
}

// public bool get_IsEnum() :7111
void Type__get_IsEnum_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsEnum(__this);
}

// public bool IsSubclassOf(Uno.Type c) :7242
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval)
{
    *__retval = Type::IsSubclassOf(__this, c);
}

// public static operator ==(Uno.Type a, Uno.Type b) :6994
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Equality(a, b);
}

// public override sealed string ToString() :7014
void Type__ToString_fn(uType* __this, uString** __retval)
{
    return *__retval = Type::FullName(__this), void();
}

uSStrong<uArray*> Type::EmptyTypes_;

// public string get_FullName() [instance] :7045
uString* Type::FullName(uType* __this)
{
    return uString::Utf8(__this->FullName);
}

// public bool get_IsClass() [instance] :7100
bool Type::IsClass(uType* __this)
{
    return __this->Type != uTypeTypeInterface && U_IS_OBJECT(__this);
}

// public bool get_IsEnum() [instance] :7111
bool Type::IsEnum(uType* __this)
{
    return __this->Type == uTypeTypeEnum;
}

// public bool IsSubclassOf(Uno.Type c) [instance] :7242
bool Type::IsSubclassOf(uType* __this, uType* c)
{
    return __this->Is(c);
}

// public static operator ==(Uno.Type a, Uno.Type b) [static] :6994
bool Type::op_Equality(uType* a, uType* b)
{
    Type_typeof()->Init();
    return ::g::Uno::Object::ReferenceEquals(a, b);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#60
// -----------------------------------------------------------------

// public intrinsic struct UInt :7296
// {
uStructType* UInt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UInt", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UInt__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UInt__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UInt__ToString_fn;
    ::STRINGS[37] = uString::Const("Value was either too large or too small for unsigned int");
    ::STRINGS[38] = uString::Const("Unable to convert string to unsigned int");
    return type;
}

// public override sealed bool Equals(object o) :7302
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint32_t>(UInt_typeof(), *__this, U_ALLOCA(UInt_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :7308
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :7319
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#61
// -----------------------------------------------------------------

// public intrinsic struct ULong :7425
// {
uStructType* ULong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.ULong", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ULong__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ULong__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))ULong__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :7431
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint64_t>(ULong_typeof(), *__this, U_ALLOCA(ULong_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :7437
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public override sealed string ToString() :7448
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#62
// -----------------------------------------------------------------

// public intrinsic struct UShort :7573
// {
uStructType* UShort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort__ToString_fn;
    ::STRINGS[39] = uString::Const("Value was either too large or too small for unsigned short");
    ::STRINGS[40] = uString::Const("Unable to convert string to unsigned short");
    return type;
}

// public override sealed bool Equals(object o) :7579
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint16_t>(UShort_typeof(), *__this, U_ALLOCA(UShort_typeof()->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :7585
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :7596
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#63
// -----------------------------------------------------------------

// public intrinsic struct UShort2 :7694
// {
uStructType* UShort2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(UShort2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort2", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort2__ToString_fn;
    ::STRINGS[11] = uString::Const(", ");
    ::TYPES[35] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::g::Uno::UShort_typeof(), offsetof(::g::Uno::UShort2, X), 0,
        ::g::Uno::UShort_typeof(), offsetof(::g::Uno::UShort2, Y), 0);
    return type;
}

// public override sealed bool Equals(object o) :7736
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(UShort2_typeof(), *__this, U_ALLOCA(UShort2_typeof()->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :7737
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(UShort2_typeof(), *__this, U_ALLOCA(UShort2_typeof()->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :7738
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[35/*ushort*/]), ::STRINGS[11/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[35/*ushort*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#65
// -----------------------------------------------------------------

// public static class Vector :7818
// {
uClassType* Vector_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Vector", options);
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Uno::Float3_typeof();
    ::TYPES[9] = ::g::Uno::Float4_typeof();
    ::TYPES[36] = ::g::Uno::Float2x2_typeof();
    ::TYPES[27] = ::g::Uno::Float4x4_typeof();
    return type;
}

// public static float Distance(float2 p0, float2 p1) :7828
void Vector__Distance_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, float* __retval)
{
    *__retval = Vector::Distance(*p0, *p1);
}

// public static float Dot(float2 a, float2 b) :7836
void Vector__Dot_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Vector::Dot(*a, *b);
}

// public static float Length(float2 v) :7824
void Vector__Length_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::Length(*v);
}

// public static float Length(float3 v) :7825
void Vector__Length1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::Length1(*v);
}

// public static float Length(float4 v) :7826
void Vector__Length2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::Length2(*v);
}

// public static float LengthSquared(float2 v) :7820
void Vector__LengthSquared_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::LengthSquared(*v);
}

// public static float LengthSquared(float3 v) :7821
void Vector__LengthSquared1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::LengthSquared1(*v);
}

// public static float LengthSquared(float4 v) :7822
void Vector__LengthSquared2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::LengthSquared2(*v);
}

// public static float2 Normalize(float2 v) :7832
void Vector__Normalize_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Normalize(*v);
}

// public static float3 Normalize(float3 v) :7833
void Vector__Normalize1_fn(::g::Uno::Float3* v, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::Normalize1(*v);
}

// public static float4 Normalize(float4 v) :7834
void Vector__Normalize2_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Normalize2(*v);
}

// public static float2 Transform(float2 vector, float2x2 matrix) :7946
void Vector__Transform_fn(::g::Uno::Float2* vector, ::g::Uno::Float2x2* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Transform(*vector, *matrix);
}

// public static float4 Transform(float2 vector, float4x4 matrix) :7962
void Vector__Transform1_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform1(*vector, *matrix);
}

// public static float4 Transform(float3 vector, float4x4 matrix) :7971
void Vector__Transform4_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform4(*vector, *matrix);
}

// public static float4 Transform(float4 vector, float4x4 matrix) :7953
void Vector__Transform5_fn(::g::Uno::Float4* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform5(*vector, *matrix);
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) :8006
void Vector__TransformCoordinate_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::TransformCoordinate(*vector, *matrix);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) :7990
void Vector__TransformCoordinate1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformCoordinate1(*vector, *matrix);
}

// public static float Distance(float2 p0, float2 p1) [static] :7828
float Vector::Distance(::g::Uno::Float2 p0, ::g::Uno::Float2 p1)
{
    return Vector::Length(::g::Uno::Float2__op_Subtraction2(p1, p0));
}

// public static float Dot(float2 a, float2 b) [static] :7836
float Vector::Dot(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

// public static float Length(float2 v) [static] :7824
float Vector::Length(::g::Uno::Float2 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared(v));
}

// public static float Length(float3 v) [static] :7825
float Vector::Length1(::g::Uno::Float3 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared1(v));
}

// public static float Length(float4 v) [static] :7826
float Vector::Length2(::g::Uno::Float4 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared2(v));
}

// public static float LengthSquared(float2 v) [static] :7820
float Vector::LengthSquared(::g::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

// public static float LengthSquared(float3 v) [static] :7821
float Vector::LengthSquared1(::g::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

// public static float LengthSquared(float4 v) [static] :7822
float Vector::LengthSquared2(::g::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

// public static float2 Normalize(float2 v) [static] :7832
::g::Uno::Float2 Vector::Normalize(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__op_Division1(v, Vector::Length(v));
}

// public static float3 Normalize(float3 v) [static] :7833
::g::Uno::Float3 Vector::Normalize1(::g::Uno::Float3 v)
{
    return ::g::Uno::Float3__op_Division1(v, Vector::Length1(v));
}

// public static float4 Normalize(float4 v) [static] :7834
::g::Uno::Float4 Vector::Normalize2(::g::Uno::Float4 v)
{
    return ::g::Uno::Float4__op_Division1(v, Vector::Length2(v));
}

// public static float2 Transform(float2 vector, float2x2 matrix) [static] :7946
::g::Uno::Float2 Vector::Transform(::g::Uno::Float2 vector, ::g::Uno::Float2x2 matrix)
{
    return ::g::Uno::Float2__New2((vector.X * matrix.M11) + (vector.Y * matrix.M21), (vector.X * matrix.M12) + (vector.Y * matrix.M22));
}

// public static float4 Transform(float2 vector, float4x4 matrix) [static] :7962
::g::Uno::Float4 Vector::Transform1(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

// public static float4 Transform(float3 vector, float4x4 matrix) [static] :7971
::g::Uno::Float4 Vector::Transform4(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

// public static float4 Transform(float4 vector, float4x4 matrix) [static] :7953
::g::Uno::Float4 Vector::Transform5(::g::Uno::Float4 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + (vector.W * matrix.M41), (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + (vector.W * matrix.M42), (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + (vector.W * matrix.M43), (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + (vector.W * matrix.M44));
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) [static] :8006
::g::Uno::Float2 Vector::TransformCoordinate(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform1(vector, matrix);
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(tmp.X, tmp.Y), tmp.W);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) [static] :7990
::g::Uno::Float3 Vector::TransformCoordinate1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform4(vector, matrix);
    return ::g::Uno::Float3__op_Division1(::g::Uno::Float3__New2(tmp.X, tmp.Y, tmp.Z), tmp.W);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#66
// -----------------------------------------------------------------

// public sealed class WeakReference<T> :8031
// {
uType* WeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(WeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReference`1", options);
    type->SetFields(0,
        type->T(0), offsetof(::g::Uno::WeakReference, _target), uFieldFlagsWeak);
    return type;
}

// public WeakReference(T target) :8037
void WeakReference__ctor__fn(WeakReference* __this, uObject* target)
{
    __this->ctor_(target);
}

// public WeakReference New(T target) :8037
void WeakReference__New1_fn(uType* __type, uObject* target, WeakReference** __retval)
{
    *__retval = WeakReference::New1(__type, target);
}

// public bool TryGetTarget(T& target) :8047
void WeakReference__TryGetTarget_fn(WeakReference* __this, uObject** target, bool* __retval)
{
    *__retval = __this->TryGetTarget(target);
}

// public WeakReference(T target) [instance] :8037
void WeakReference::ctor_(uObject* target)
{
    _target = target;
}

// public bool TryGetTarget(T& target) [instance] :8047
bool WeakReference::TryGetTarget(uObject** target)
{
    uObject* result = _target;
    *target = result;
    return result != NULL;
}

// public WeakReference New(T target) [static] :8037
WeakReference* WeakReference::New1(uType* __type, uObject* target)
{
    WeakReference* obj1 = (WeakReference*)uNew(__type);
    obj1->ctor_(target);
    return obj1;
}
// }

}} // ::g::Uno
