// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Runtime.Implementation.ClockImpl.h>
#include <Uno.Runtime.Implementation.DebugImpl.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Diagnostics{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Diagnostics/$.uno#1
// ----------------------------------------------------------------------------

// public static class Clock :31
// {
uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    return type;
}

// public static double GetSeconds() :33
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks() :38
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :43
void Clock__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :33
double Clock::GetSeconds()
{
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetSeconds();
}

// public static long GetTicks() [static] :38
int64_t Clock::GetTicks()
{
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :43
int Clock::GetTimezoneOffset(int year, int month, int day)
{
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetTimezoneOffset(year, month, day);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Diagnostics/$.uno#2
// ----------------------------------------------------------------------------

// public static class Debug :75
// {
// static Debug() :75
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_cctor_ = Debug__cctor__fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::Diagnostics::LogHandler_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Debug::_indentStr_, uFieldFlagsStatic,
        ::g::Uno::Diagnostics::LogHandler_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Debug::_logHandler_, uFieldFlagsStatic);
    return type;
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) :149
void Debug__EmitLog_fn(uString* message, int* type)
{
    Debug::EmitLog(message, *type);
}

// public static void Log(string message) :126
void Debug__Log3_fn(uString* message)
{
    Debug::Log3(message);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) :116
void Debug__Log4_fn(uString* message, int* type)
{
    Debug::Log4(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :106
void Debug__Log5_fn(uString* message, int* type, uString* filename, int* line)
{
    Debug::Log5(message, *type, filename, *line);
}

uSStrong<uString*> Debug::_indentStr_;
uSStrong<uDelegate*> Debug::_logHandler_;

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static] :149
void Debug::EmitLog(uString* message, int type)
{
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_logHandler(), NULL))
        uPtr(Debug::_logHandler())->Invoke(2, (uString*)::g::Uno::String::op_Addition2(Debug::_indentStr(), message), uCRef<int>(type));

    ::g::Uno::Runtime::Implementation::DebugImpl::Log(::g::Uno::String::op_Addition2(Debug::_indentStr(), message), type);
}

// public static void Log(string message) [static] :126
void Debug::Log3(uString* message)
{
    Debug_typeof()->Init();
    Debug::EmitLog(message, 0);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) [static] :116
void Debug::Log4(uString* message, int type)
{
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :106
void Debug::Log5(uString* message, int type, uString* filename, int line)
{
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Diagnostics/$.uno#2
// ----------------------------------------------------------------------------

// public enum DebugMessageType :59
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Undefined", 0LL,
        "Debug", 1LL,
        "Information", 2LL,
        "Error", 3LL,
        "Warning", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Diagnostics/$.uno#2
// ----------------------------------------------------------------------------

// public delegate void LogHandler(string message, Uno.Diagnostics.DebugMessageType type) :72
uDelegateType* LogHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.LogHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Diagnostics::DebugMessageType_typeof());
    return type;
}

}}} // ::g::Uno::Diagnostics
