// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseReactive_bundle.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.PictureResult.h>
#include <Fuse.Camera.TakePictureOptions.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.FuseJS.Base64.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.FuseJS.Bundle.h>
#include <Fuse.Reactive.FuseJS.Bundle.ReadClosure.h>
#include <Fuse.Reactive.FuseJS.Camera.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Environment.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.FileReadCommand.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <Fuse.Reactive.FuseJS.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.GeoLocation.h>
#include <Fuse.Reactive.FuseJS.Globals.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Lifecycle.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.RaiseEvent.h>
#include <Fuse.Reactive.FuseJS.Storage.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.FuseJS.UserEvents.h>
#include <Fuse.Reactive.FuseJS.Vibration.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[113];
static uType* TYPES[78];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#13
// -------------------------------------------------------------------

// internal sealed class Base64 :904
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Base64", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[0] = uString::Const("encodeAscii");
    ::STRINGS[1] = uString::Const("decodeAscii");
    ::STRINGS[2] = uString::Const("encodeUtf8");
    ::STRINGS[3] = uString::Const("decodeUtf8");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(3);
    return type;
}

// public Base64() :906
void Base64__ctor_2_fn(Base64* __this)
{
    __this->ctor_2();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :925
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :947
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :914
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :936
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :906
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

// public Base64() [instance] :906
void Base64::ctor_2()
{
    ctor_1(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"encodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"decodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"encodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"decodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :925
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :947
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :914
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :936
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :906
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno
// ----------------------------------------------------------------

// public sealed class Builtins :9
// {
// static Builtins() :13
static void Builtins__cctor__fn(uType* __type)
{
    Builtins::Register(::STRINGS[4/*"FuseJS/Envi...*/], ::g::Fuse::Reactive::FuseJS::Environment::New2());
    Builtins::Register(::STRINGS[5/*"FuseJS/Timer"*/], Builtins::_timer_ = ::g::Fuse::Reactive::FuseJS::TimerModule::New2());
    Builtins::Register(::STRINGS[6/*"FuseJS/Base64"*/], ::g::Fuse::Reactive::FuseJS::Base64::New2());
    Builtins::Register(::STRINGS[7/*"FuseJS/Vibr...*/], ::g::Fuse::Reactive::FuseJS::Vibration::CreateModule());
    Builtins::Register(::STRINGS[8/*"FuseJS/Email"*/], ::g::Fuse::Reactive::FuseJS::Email::CreateModule());
    Builtins::Register(::STRINGS[9/*"FuseJS/Maps"*/], ::g::Fuse::Reactive::FuseJS::Maps::CreateModule());
    Builtins::Register(::STRINGS[10/*"FuseJS/Life...*/], ::g::Fuse::Reactive::FuseJS::Lifecycle::CreateModule());
    Builtins::Register(::STRINGS[11/*"FuseJS/Inte...*/], ::g::Fuse::Reactive::FuseJS::InterApp::CreateModule());
    Builtins::Register(::STRINGS[12/*"FuseJS/Phone"*/], ::g::Fuse::Reactive::FuseJS::Phone::CreateModule());
    Builtins::Register(::STRINGS[13/*"FuseJS/File...*/], ::g::Fuse::Reactive::FuseJS::FileReaderImpl::CreateModule());
    Builtins::Register(::STRINGS[14/*"FuseJS/Camera"*/], ::g::Fuse::Reactive::FuseJS::Camera::CreateModule());
    Builtins::Register(::STRINGS[15/*"FuseJS/Stor...*/], ::g::Fuse::Reactive::FuseJS::Storage::CreateModule());
    Builtins::Register(::STRINGS[16/*"FuseJS/Bundle"*/], ::g::Fuse::Reactive::FuseJS::Bundle::CreateModule());
    Builtins::Register(::STRINGS[17/*"FuseJS/Glob...*/], ::g::Fuse::Reactive::FuseJS::Globals::CreateModule());
    Builtins::Register(::STRINGS[18/*"FuseJS/User...*/], ::g::Fuse::Reactive::FuseJS::UserEvents::CreateModule());
}

uType* Builtins_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Builtins);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Builtins", options);
    type->fp_cctor_ = Builtins__cctor__fn;
    ::STRINGS[4] = uString::Const("FuseJS/Environment");
    ::STRINGS[5] = uString::Const("FuseJS/Timer");
    ::STRINGS[6] = uString::Const("FuseJS/Base64");
    ::STRINGS[7] = uString::Const("FuseJS/Vibration");
    ::STRINGS[8] = uString::Const("FuseJS/Email");
    ::STRINGS[9] = uString::Const("FuseJS/Maps");
    ::STRINGS[10] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[11] = uString::Const("FuseJS/InterApp");
    ::STRINGS[12] = uString::Const("FuseJS/Phone");
    ::STRINGS[13] = uString::Const("FuseJS/FileReaderImpl");
    ::STRINGS[14] = uString::Const("FuseJS/Camera");
    ::STRINGS[15] = uString::Const("FuseJS/Storage");
    ::STRINGS[16] = uString::Const("FuseJS/Bundle");
    ::STRINGS[17] = uString::Const("FuseJS/Globals");
    ::STRINGS[18] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[19] = uString::Const("es6-promise");
    ::STRINGS[20] = uString::Const("FuseJS/SubscriberProxy");
    ::STRINGS[21] = uString::Const("FuseJS/Observable");
    ::STRINGS[22] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[23] = uString::Const("browser-Window");
    ::STRINGS[24] = uString::Const("window-Timers");
    ::STRINGS[25] = uString::Const("window-EventTarget");
    ::STRINGS[26] = uString::Const("window-Base64");
    ::STRINGS[27] = uString::Const("window-File");
    ::STRINGS[28] = uString::Const("window-XMLHttpRequest");
    ::STRINGS[29] = uString::Const("window-fetch");
    ::STRINGS[30] = uString::Const("window-localStorage");
    ::TYPES[6] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[7] = ::g::FuseReactive_bundle_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, Observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, SubscriberProxy), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Builtins::_timer_, uFieldFlagsStatic);
    return type;
}

// internal Builtins(Fuse.Scripting.Context context) :40
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// internal Builtins New(Fuse.Scripting.Context context) :40
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval)
{
    *__retval = Builtins::New1(context);
}

// private static void Register(string moduleId, Fuse.Scripting.NativeModule module) :32
void Builtins__Register_fn(uString* moduleId, ::g::Fuse::Scripting::NativeModule* module)
{
    Builtins::Register(moduleId, module);
}

// internal void UpdateModules(Fuse.Scripting.Context context) :66
void Builtins__UpdateModules_fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->UpdateModules(context);
}

uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> Builtins::_timer_;

// internal Builtins(Fuse.Scripting.Context context) [instance] :40
void Builtins::ctor_(::g::Fuse::Scripting::Context* context)
{
    ::g::Fuse::Reactive::DebugLog::Init(context);
    ::g::Fuse::Reactive::Console::Init(context);
    uPtr(context)->Evaluate(::STRINGS[19/*"es6-promise"*/], uPtr(::g::FuseReactive_bundle::es6promisea0cdfa42())->ReadAllText());
    SubscriberProxy = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::SubscriberProxycad54389()))->EvaluateExports(context, ::STRINGS[20/*"FuseJS/Subs...*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);
    Observable = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Observablefdbc69f4()))->EvaluateExports(context, ::STRINGS[21/*"FuseJS/Obse...*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Reactive::FuseJS::Http::New1(context);
    Builtins::Register(::STRINGS[22/*"FuseJS/GeoL...*/], ::g::Fuse::Reactive::FuseJS::GeoLocation::New2());
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Window03a0dcb9()))->EvaluateExports(context, ::STRINGS[23/*"browser-Win...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::WindowTimersfc99e78b()))->EvaluateExports(context, ::STRINGS[24/*"window-Timers"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::EventTargetaaf86e32()))->EvaluateExports(context, ::STRINGS[25/*"window-Even...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::WindowBase648abbf06a()))->EvaluateExports(context, ::STRINGS[26/*"window-Base64"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::File077d012d()))->EvaluateExports(context, ::STRINGS[27/*"window-File"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::XMLHttpRequest911f2659()))->EvaluateExports(context, ::STRINGS[28/*"window-XMLH...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::fetcheb6d0143()))->EvaluateExports(context, ::STRINGS[29/*"window-fetch"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::localStorage2ff373b9()))->EvaluateExports(context, ::STRINGS[30/*"window-loca...*/]);
}

// internal void UpdateModules(Fuse.Scripting.Context context) [instance] :66
void Builtins::UpdateModules(::g::Fuse::Scripting::Context* context)
{
    uPtr(Builtins::_timer())->UpdateModule();
}

// internal Builtins New(Fuse.Scripting.Context context) [static] :40
Builtins* Builtins::New1(::g::Fuse::Scripting::Context* context)
{
    Builtins* obj1 = (Builtins*)uNew(Builtins_typeof());
    obj1->ctor_(context);
    return obj1;
}

// private static void Register(string moduleId, Fuse.Scripting.NativeModule module) [static] :32
void Builtins::Register(uString* moduleId, ::g::Fuse::Scripting::NativeModule* module)
{
    Builtins_typeof()->Init();
    ::g::Uno::UX::Resource::SetGlobalKey(module, moduleId);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#15
// -------------------------------------------------------------------

// internal static class Bundle :1056
// {
uClassType* Bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Bundle", options);
    ::STRINGS[31] = uString::Const("readSync");
    ::STRINGS[32] = uString::Const("read");
    ::STRINGS[33] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Uno::IO::Bundle_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[15] = ::g::Uno::IO::BundleFile_typeof();
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :1058
void Bundle__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Bundle::CreateModule();
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :1090
void Bundle__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Bundle::Read(c, args);
}

// private static string Read(string filename) :1100
void Bundle__Read1_fn(uString* filename, uString** __retval)
{
    *__retval = Bundle::Read1(filename);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :1080
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync(args);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) :1117
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync1(filename);
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) :1066
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval)
{
    *__retval = Bundle::TryGetBundleFile(sourcePath, bundleFile);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :1058
::g::Fuse::Scripting::NativeModule* Bundle::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[31/*"readSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Bundle__Read_fn)), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[32/*"read"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)Bundle__ReadAsync_fn), NULL)));
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :1090
uObject* Bundle::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return Bundle::Read1(filename);
    }

    return ::STRINGS[33/*""*/];
}

// private static string Read(string filename) [static] :1100
uString* Bundle::Read1(uString* filename)
{
    try
    {
        ::g::Uno::IO::BundleFile* bundleFile;

        if (Bundle::TryGetBundleFile(filename, &bundleFile))
            return uPtr(bundleFile)->ReadAllText();

        return ::STRINGS[33/*""*/];
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[33/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :1080
::g::Uno::Threading::Future1* Bundle::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return Bundle::ReadAsync1((filename != NULL) ? filename : ::STRINGS[33/*""*/]);
    }

    return Bundle::ReadAsync1(::STRINGS[33/*""*/]);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) [static] :1117
::g::Uno::Threading::Future1* Bundle::ReadAsync1(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[11/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[12/*Uno.Func<string>*/], (void*)Bundle__ReadClosure__Invoke_fn, Bundle__ReadClosure::New1(filename)));
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) [static] :1066
bool Bundle::TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile)
{
    ::g::Uno::IO::BundleFile* ret2;
    *bundleFile = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[15/*Uno.IO.BundleFile*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::IO::BundleFile* bf = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[14/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret2), ret2);

        if (::g::Uno::String::op_Equality(uPtr(bf)->SourcePath(), sourcePath))
        {
            *bundleFile = bf;
            return true;
        }
    }

    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#11
// -------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :656
// {
uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    ::STRINGS[34] = uString::Const("func");
    ::STRINGS[35] = uString::Const("args");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _context), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _func), 0);
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :662
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :672
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :662
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :662
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    if (func == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[34/*"func"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[35/*"args"*/]));

    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :672
void TimerModule__CallbackClosure::Callback()
{
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :662
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#3
// ------------------------------------------------------------------

// internal static class Camera :254
// {
uClassType* Camera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Camera", options);
    ::STRINGS[36] = uString::Const("File");
    ::STRINGS[37] = uString::Const("path");
    ::STRINGS[38] = uString::Const("name");
    ::STRINGS[39] = uString::Const("takePicture");
    ::STRINGS[40] = uString::Const("targetWidth");
    ::STRINGS[41] = uString::Const("targetHeight");
    ::STRINGS[42] = uString::Const("correctOrientation");
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::Camera::PictureResult_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[20] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[22] = ::g::Uno::String_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::Camera::TakePictureOptions_typeof();
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) :292
void Camera__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Camera::Converter(context, result);
}

// public static Fuse.Scripting.NativeModule CreateModule() :256
void Camera__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Camera::CreateModule();
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) :262
void Camera__TakePicture_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture(args);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) [static] :292
::g::Fuse::Scripting::Object* Camera::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result)
{
    ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[36/*"File"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Scripting::Object* file = uPtr(func)->Construct(uArray::New(::TYPES[3/*object[]*/], 0));
    uPtr(file)->Item(::STRINGS[37/*"path"*/], uPtr(result)->Path());
    file->Item(::STRINGS[38/*"name"*/], ::g::Uno::IO::Path::GetFileName(result->Path()));
    return file;
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :256
::g::Fuse::Scripting::NativeModule* Camera::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[19/*Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], ::STRINGS[39/*"takePicture"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.FutureFactory<Fuse.Camera.PictureResult>*/], (void*)Camera__TakePicture_fn), uDelegate::New(::TYPES[21/*Fuse.Scripting.ResultConverter<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], (void*)Camera__Converter_fn))));
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) [static] :262
::g::Uno::Threading::Future1* Camera::TakePicture(uArray* args)
{
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Camera::TakePictureOptions* options = ::g::Fuse::Camera::TakePictureOptions::New1();

    if (uPtr(args)->Length() > 0)
    {
        ::g::Fuse::Scripting::Object* arg = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[16/*Fuse.Scripting.Object*/]);

        if (arg != NULL)

            for (array1 = uPtr(arg)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);

                if (::g::Uno::String::op_Equality(k, ::STRINGS[40/*"targetWidth"*/]))
                    uPtr(options)->TargetWidth(::g::Fuse::Scripting::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[41/*"targetHeight"*/]))
                    uPtr(options)->TargetHeight(::g::Fuse::Scripting::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[42/*"correctOrie...*/]))
                    uPtr(options)->CorrectOrientation(::g::Fuse::Scripting::Marshal::ToBool(uPtr(arg)->Item(k)));
            }
    }

    return ::g::Fuse::Camera::Camera::TakePicture1(options);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#7
// ------------------------------------------------------------------

// public sealed class Email :471
// {
uType* Email_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Email);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Email", options);
    ::STRINGS[43] = uString::Const("compose");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    return type;
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) :478
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Email::Compose(context, args);
}

// public static Fuse.Scripting.NativeModule CreateModule() :473
void Email__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Email::CreateModule();
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) [static] :478
uObject* Email::Compose(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* to = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* cc = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    uString* bcc = uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[4/*string*/]);
    uString* subject = uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[4/*string*/]);
    uString* message = uCast<uString*>(args->Strong<uObject*>(4), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchEmail(to, cc, bcc, subject, message);
    return NULL;
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :473
::g::Fuse::Scripting::NativeModule* Email::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[43/*"compose"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Email__Compose_fn))));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#8
// ------------------------------------------------------------------

// internal sealed class Environment :501
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Environment", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[44] = uString::Const("android");
    ::STRINGS[45] = uString::Const("iOS");
    ::STRINGS[46] = uString::Const("mobile");
    ::STRINGS[47] = uString::Const("desktop");
    ::STRINGS[48] = uString::Const("preview");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(3);
    return type;
}

// public Environment() :503
void Environment__ctor_2_fn(Environment* __this)
{
    __this->ctor_2();
}

// public Environment New() :503
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

// public Environment() [instance] :503
void Environment::ctor_2()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ctor_1(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[24/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[44/*"android"*/], uCRef(true), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[24/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[45/*"iOS"*/], uCRef(false), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[24/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[46/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[24/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[47/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[24/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[48/*"preview"*/], uCRef(false), &ret6), ret6));
}

// public Environment New() [static] :503
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#16
// -------------------------------------------------------------------

// private sealed class FileReaderImpl.FileReadCommand :1150
// {
uType* FileReaderImpl__FileReadCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl__FileReadCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FileReaderImpl.FileReadCommand", options);
    ::STRINGS[49] = uString::Const("PNG");
    ::STRINGS[50] = uString::Const("png");
    ::STRINGS[51] = uString::Const("jpeg");
    ::STRINGS[52] = uString::Const("data:image/");
    ::STRINGS[53] = uString::Const(";base64,");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FileReaderImpl__FileReadCommand, _path), 0);
    return type;
}

// public FileReadCommand(string path) :1153
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path)
{
    __this->ctor_(path);
}

// public FileReadCommand New(string path) :1153
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval)
{
    *__retval = FileReaderImpl__FileReadCommand::New1(path);
}

// public string ReadAsDataURL() :1161
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsDataURL();
}

// public string ReadAsText() :1157
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsText();
}

// public FileReadCommand(string path) [instance] :1153
void FileReaderImpl__FileReadCommand::ctor_(uString* path)
{
    _path = path;
}

// public string ReadAsDataURL() [instance] :1161
uString* FileReaderImpl__FileReadCommand::ReadAsDataURL()
{
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(_path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(_path))), ::STRINGS[49/*"PNG"*/]) ? ::STRINGS[50/*"png"*/] : ::STRINGS[51/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[52/*"data:image/"*/], type), ::STRINGS[53/*";base64,"*/]), base64);
}

// public string ReadAsText() [instance] :1157
uString* FileReaderImpl__FileReadCommand::ReadAsText()
{
    return ::g::Uno::IO::File::ReadAllText(_path);
}

// public FileReadCommand New(string path) [static] :1153
FileReaderImpl__FileReadCommand* FileReaderImpl__FileReadCommand::New1(uString* path)
{
    FileReaderImpl__FileReadCommand* obj1 = (FileReaderImpl__FileReadCommand*)uNew(FileReaderImpl__FileReadCommand_typeof());
    obj1->ctor_(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#16
// -------------------------------------------------------------------

// internal static class FileReaderImpl :1148
// {
uClassType* FileReaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FileReaderImpl", options);
    ::STRINGS[54] = uString::Const("readAsDataURL");
    ::STRINGS[55] = uString::Const("readAsText");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :1169
void FileReaderImpl__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = FileReaderImpl::CreateModule();
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) :1176
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static Uno.Threading.Future<string> readAsText(object[] args) :1182
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :1169
::g::Fuse::Scripting::NativeModule* FileReaderImpl::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[54/*"readAsDataURL"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[55/*"readAsText"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL)));
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) [static] :1176
::g::Uno::Threading::Future1* FileReaderImpl::readAsDataURL(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[11/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[12/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsDataURL_fn, FileReaderImpl__FileReadCommand::New1(path)));
}

// private static Uno.Threading.Future<string> readAsText(object[] args) [static] :1182
::g::Uno::Threading::Future1* FileReaderImpl::readAsText(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[11/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[12/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsText_fn, FileReaderImpl__FileReadCommand::New1(path)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#18
// -------------------------------------------------------------------

// internal sealed class FunctionClosure :1423
// {
uType* FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FunctionClosure", options);
    ::TYPES[25] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _context), 0);
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1428
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :1441
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :1434
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1428
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval)
{
    *__retval = FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :1428
void FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :1441
uDelegate* FunctionClosure::Callback()
{
    return uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :1434
uObject* FunctionClosure::function(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :1428
FunctionClosure* FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    FunctionClosure* obj1 = (FunctionClosure*)uNew(FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#18
// -------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :1281
// {
uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    ::STRINGS[56] = uString::Const("createRequest");
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Context_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :1288
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :1297
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :1288
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :1283
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :1283
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :1288
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[56/*"createRequest"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :1297
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :1283
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :1283
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :1288
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#18
// -------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :1306
// {
uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    ::STRINGS[57] = uString::Const("enableCache");
    ::STRINGS[58] = uString::Const("setTimeout");
    ::STRINGS[59] = uString::Const("sendAsync");
    ::STRINGS[60] = uString::Const("abort");
    ::STRINGS[61] = uString::Const("setHeader");
    ::STRINGS[62] = uString::Const("getResponseHeader");
    ::STRINGS[63] = uString::Const("getResponseHeaders");
    ::STRINGS[64] = uString::Const("getState");
    ::STRINGS[65] = uString::Const("getResponseStatus");
    ::STRINGS[66] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[67] = uString::Const("getResponseContentString");
    ::STRINGS[68] = uString::Const("onaborted");
    ::STRINGS[69] = uString::Const("ondone");
    ::STRINGS[70] = uString::Const("onerror");
    ::STRINGS[71] = uString::Const("onprogress");
    ::STRINGS[72] = uString::Const("onstatechanged");
    ::STRINGS[73] = uString::Const("ontimeout");
    ::TYPES[28] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[30] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[31] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[33] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[36] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[37] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[38] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[39] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[40] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[41] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[42] = ::g::Uno::Bool_typeof();
    ::TYPES[43] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :1312
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private object EnableCache(object[] args) :1399
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseReasonPhrase(object[] args) :1416
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private object GetState(object[] args) :1411
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :1312
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :1308
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :1308
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) :1340
void Http__FuseJSHttpRequest__OnAborted_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAborted(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :1368
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :1347
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :1375
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :1361
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :1354
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :1382
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :1312
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[29/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAborted_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[30/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[29/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[29/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[29/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[31/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[57/*"enableCache"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[58/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[32/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[33/*Uno.Action<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetTimeout_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[59/*"sendAsync"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[60/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__Abort_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[61/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[35/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[36/*Uno.Action<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[62/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[37/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[38/*Uno.Func<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[63/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[39/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[12/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeaders_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[64/*"getState"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[65/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[40/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[41/*Uno.Func<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseStatus_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[66/*"getResponse...*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[67/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[39/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[12/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseContentString_fn, uPtr(_req))));
}

// private object EnableCache(object[] args) [instance] :1399
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    if (uPtr(args)->Length() > 0)
        uPtr(_req)->EnableCache(uUnbox<bool>(::TYPES[42/*bool*/], uPtr(args)->Strong<uObject*>(0)));

    return NULL;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :1416
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(uPtr(_req)->GetResponseStatus());
}

// private object GetState(object[] args) [instance] :1411
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    return uBox<int>(::TYPES[43/*int*/], uPtr(_req)->State());
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :1308
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :1308
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1340
void Http__FuseJSHttpRequest::OnAborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[68/*"onaborted"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1368
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[69/*"ondone"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :1347
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[70/*"onerror"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :1375
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[71/*"onprogress"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int>(::TYPES[43/*int*/], current), uBox<int>(::TYPES[43/*int*/], total), uBox(::TYPES[42/*bool*/], hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1361
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[72/*"onstatechan...*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[43/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1354
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[73/*"ontimeout"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private object SendAsync(object[] args) [instance] :1382
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    uPtr(_req)->SetResponseType(0);

    if (uPtr(args)->Length() > 0)
    {
        uString* data = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(data, NULL))
        {
            uPtr(_req)->SendAsync2(data);
            return NULL;
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :1312
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#12
// -------------------------------------------------------------------

// internal sealed class GeoLocation :808
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[74] = uString::Const("auhtorizationRequest");
    ::STRINGS[75] = uString::Const("startListening");
    ::STRINGS[76] = uString::Const("stopListening");
    ::STRINGS[77] = uString::Const("onChanged");
    ::STRINGS[78] = uString::Const("onError");
    ::STRINGS[79] = uString::Const("location");
    ::STRINGS[80] = uString::Const("getLocation");
    ::STRINGS[81] = uString::Const("latitude");
    ::STRINGS[82] = uString::Const("longitude");
    ::STRINGS[83] = uString::Const("accuracy");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[44] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[45] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[33] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[46] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[47] = ::g::Fuse::GeoLocation::LocationTracker_typeof();
    ::TYPES[48] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[49] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[50] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[51] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[52] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[53] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[54] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[55] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[43] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[56] = ::g::Fuse::GeoLocation::GeoCoordinates_typeof();
    ::TYPES[57] = ::g::Fuse::GeoLocation::Location_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[58] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(3,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _onChangedEvent), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _onErrorEvent), 0);
    return type;
}

// public GeoLocation() :814
void GeoLocation__ctor_2_fn(GeoLocation* __this)
{
    __this->ctor_2();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :855
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :881
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :865
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :870
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :875
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :845
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// private void LocationError(string error) :850
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error)
{
    __this->LocationError(error);
}

// public GeoLocation New() :814
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :860
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :830
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :839
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

// public GeoLocation() [instance] :814
void GeoLocation::ctor_2()
{
    ctor_1(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[44/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[74/*"auhtorizati...*/], uDelegate::New(::TYPES[45/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[33/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[46/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[75/*"startListen...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[76/*"stopListening"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[77/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[48/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    _onErrorEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[78/*"onError"*/], true);
    uPtr(_locationTracker)->add_LocationError(uDelegate::New(::TYPES[49/*Uno.Action<string>*/], (void*)GeoLocation__LocationError_fn, this));
    AddMember(_onErrorEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[50/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[79/*"location"*/], uDelegate::New(::TYPES[51/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[52/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[53/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[80/*"getLocation"*/], uDelegate::New(::TYPES[54/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[55/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :865
int GeoLocation::GetAuhtorizationRequest()
{
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :870
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :875
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :845
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void LocationError(string error) [instance] :850
void GeoLocation::LocationError(uString* error)
{
    uPtr(_onErrorEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));
}

// private void SetAuhtorizationRequest(int value) [instance] :860
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :830
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    int minimumReportInterval = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)) : 0;
    double desiredAccuracyInMeters = (args->Length() > 1) ? ::g::Fuse::Scripting::Marshal::ToDouble(args->Strong<uObject*>(1)) : 0.0;
    uPtr(_locationTracker)->StartListening(minimumReportInterval, desiredAccuracyInMeters);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :839
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :855
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :881
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[81/*"latitude"*/], uBox(::TYPES[70/*double*/], uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[82/*"longitude"*/], uBox(::TYPES[70/*double*/], uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[83/*"accuracy"*/], uBox(::TYPES[70/*double*/], location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :814
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#2
// ------------------------------------------------------------------

// internal static class Globals :211
// {
uClassType* Globals_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Globals", options);
    ::STRINGS[55] = uString::Const("readAsText");
    ::STRINGS[84] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[85] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[86] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[87] = uString::Const("' not found");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[59] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[60] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[61] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :213
void Globals__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Globals::CreateModule();
}

// private static bool FileSourceAcceptor(object obj) :236
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// private static string readAsText(object[] args) :219
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :213
::g::Fuse::Scripting::NativeModule* Globals::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[55/*"readAsText"*/], uDelegate::New(::TYPES[59/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL)));
}

// private static bool FileSourceAcceptor(object obj) [static] :236
bool Globals::FileSourceAcceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[60/*Uno.UX.BundleFileSource*/]);
}

// private static string readAsText(object[] args) [static] :219
uString* Globals::readAsText(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[84/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[85/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[61/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[60/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[86/*"Globals.rea...*/], key), ::STRINGS[87/*"' not found"*/])));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#18
// -------------------------------------------------------------------

// internal sealed class Http :1269
// {
uType* Http_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    ::STRINGS[88] = uString::Const("HttpClient");
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[62] = ::g::Fuse::Reactive::FuseJS::FunctionClosure_typeof();
    ::TYPES[25] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[63] = Http__FuseJSHttpClient_typeof();
    return type;
}

// public Http(Fuse.Scripting.Context context) :1271
void Http__ctor__fn(Http* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :1276
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public Http New(Fuse.Scripting.Context context) :1271
void Http__New1_fn(::g::Fuse::Scripting::Context* context, Http** __retval)
{
    *__retval = Http::New1(context);
}

// public Http(Fuse.Scripting.Context context) [instance] :1271
void Http::ctor_(::g::Fuse::Scripting::Context* context)
{
    uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[88/*"HttpClient"*/], ::g::Fuse::Reactive::FuseJS::FunctionClosure::New1(context, uDelegate::New(::TYPES[25/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, this))->Callback());
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :1276
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New(Fuse.Scripting.Context context) [static] :1271
Http* Http::New1(::g::Fuse::Scripting::Context* context)
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#9
// ------------------------------------------------------------------

// public sealed class InterApp :522
// {
// static InterApp() :528
static void InterApp__cctor__fn(uType* __type)
{
    InterApp::_cachedUris_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[64/*Uno.Collections.List<string>*/]));
    ::g::Uno::Platform2::Application::add_ReceivedURI(uDelegate::New(::TYPES[66/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedUri_fn));
}

uType* InterApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InterApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.InterApp", options);
    type->fp_cctor_ = InterApp__cctor__fn;
    ::STRINGS[89] = uString::Const("onReceivedUri");
    ::STRINGS[90] = uString::Const("launchUri");
    ::TYPES[64] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[65] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[66] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[67] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[68] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_cachedUris_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_jsInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_onReceivedUri_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :533
void InterApp__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = InterApp::CreateModule();
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) :562
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = InterApp::LaunchUri(context, args);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :545
void InterApp__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp::OnJsInitialized(sender, args);
}

// private static void OnReceivedUri(object sender, string uri) :554
void InterApp__OnReceivedUri_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedUri(sender, uri);
}

uSStrong< ::g::Uno::Collections::List*> InterApp::_cachedUris_;
bool InterApp::_jsInitialized_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> InterApp::_onReceivedUri_;

// public static Fuse.Scripting.NativeModule CreateModule() [static] :533
::g::Fuse::Scripting::NativeModule* InterApp::CreateModule()
{
    InterApp_typeof()->Init();
    InterApp::_onReceivedUri() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[89/*"onReceivedUri"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativeEvent*)InterApp::_onReceivedUri(), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[90/*"launchUri"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)InterApp__LaunchUri_fn))));
    module->add_Evaluated(uDelegate::New(::TYPES[67/*Uno.EventHandler*/], (void*)InterApp__OnJsInitialized_fn));
    return module;
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) [static] :562
uObject* InterApp::LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args)
{
    InterApp_typeof()->Init();
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/])));
    return NULL;
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :545
void InterApp::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;

    if (InterApp::_cachedUris() != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(InterApp::_cachedUris()), &ret3), ret3); enum1.MoveNext(::TYPES[68/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* uri = enum1.Current(::TYPES[68/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
        }

    InterApp::_cachedUris() = NULL;
    InterApp::_jsInitialized() = true;
}

// private static void OnReceivedUri(object sender, string uri) [static] :554
void InterApp::OnReceivedUri(uObject* sender, uString* uri)
{
    InterApp_typeof()->Init();

    if (InterApp::_jsInitialized())
        uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(InterApp::_cachedUris()), uri);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#4
// ------------------------------------------------------------------

// public sealed class Lifecycle :310
// {
uType* Lifecycle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Lifecycle", options);
    ::STRINGS[91] = uString::Const("onEnteringForeground");
    ::STRINGS[92] = uString::Const("onEnteringInteractive");
    ::STRINGS[93] = uString::Const("onExitedInteractive");
    ::STRINGS[94] = uString::Const("onEnteringBackground");
    ::STRINGS[95] = uString::Const("onTerminating");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[67] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[65] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[69] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringBackground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringForeground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_exitedInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_terminating_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :324
void Lifecycle__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Lifecycle::CreateModule();
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :375
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :354
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :361
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :368
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :345
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Lifecycle::OnJsInitialized(sender, args);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :382
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringBackground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringForeground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_exitedInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_terminating_;

// public static Fuse.Scripting.NativeModule CreateModule() [static] :324
::g::Fuse::Scripting::NativeModule* Lifecycle::CreateModule()
{
    Lifecycle::_enteringForeground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[91/*"onEnteringF...*/], true);
    Lifecycle::_enteringInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[92/*"onEnteringI...*/], true);
    Lifecycle::_exitedInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[93/*"onExitedInt...*/], true);
    Lifecycle::_enteringBackground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[94/*"onEnteringB...*/], true);
    Lifecycle::_terminating() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[95/*"onTerminating"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringForeground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_exitedInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringBackground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_terminating()));
    module->add_Evaluated(uDelegate::New(::TYPES[67/*Uno.EventHandler*/], (void*)Lifecycle__OnJsInitialized_fn));
    return module;
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :375
void Lifecycle::OnEnteringBackground(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringBackground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringBackground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :354
void Lifecycle::OnEnteringForeground(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringForeground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringForeground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :361
void Lifecycle::OnEnteringInteractive(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :368
void Lifecycle::OnExitedInteractive(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_exitedInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_exitedInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :345
void Lifecycle::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[69/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[69/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[69/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[69/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[69/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :382
void Lifecycle::OnTerminating(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_terminating();

    if (handler != NULL)
        uPtr(Lifecycle::_terminating())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#5
// ------------------------------------------------------------------

// public sealed class Maps :401
// {
uType* Maps_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Maps);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Maps", options);
    ::STRINGS[96] = uString::Const("openAt");
    ::STRINGS[97] = uString::Const("searchNearby");
    ::STRINGS[98] = uString::Const("searchNear");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[70] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :403
void Maps__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Maps::CreateModule();
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) :427
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::OpenAt(context, args);
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) :418
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNear(context, args);
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) :411
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNearby(context, args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :403
::g::Fuse::Scripting::NativeModule* Maps::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 3, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[96/*"openAt"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__OpenAt_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[97/*"searchNearby"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNearby_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[98/*"searchNear"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNear_fn))));
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) [static] :427
uObject* Maps::OpenAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    double latitude = uUnbox<double>(::TYPES[70/*double*/], uPtr(args)->Strong<uObject*>(0));
    double longitude = uUnbox<double>(::TYPES[70/*double*/], args->Strong<uObject*>(1));
    ::g::Fuse::Launcher::LaunchMaps(latitude, longitude);
    return NULL;
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) [static] :418
uObject* Maps::SearchNear(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) [static] :411
uObject* Maps::SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#6
// ------------------------------------------------------------------

// public sealed class Phone :446
// {
uType* Phone_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Phone);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Phone", options);
    ::STRINGS[99] = uString::Const("call");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    return type;
}

// public static object Call(Fuse.Scripting.Context context, object[] args) :453
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Phone::Call(context, args);
}

// public static Fuse.Scripting.NativeModule CreateModule() :448
void Phone__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Phone::CreateModule();
}

// public static object Call(Fuse.Scripting.Context context, object[] args) [static] :453
uObject* Phone::Call(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* callString = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchCall(callString);
    return NULL;
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :448
::g::Fuse::Scripting::NativeModule* Phone::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[99/*"call"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Phone__Call_fn))));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#17
// -------------------------------------------------------------------

// internal sealed class RaiseEvent :1198
// {
uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.RaiseEvent", options);
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    ::STRINGS[100] = uString::Const("Cannot find message with name: ");
    ::STRINGS[101] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#17");
    ::STRINGS[102] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Source), 0);
    return type;
}

// public generated RaiseEvent() :1198
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :1198
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :1205
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :1198
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :1205
void RaiseEvent::Raise()
{
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(Name);

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[100/*"Cannot find...*/], Name), NULL, ::STRINGS[101/*"/usr/local/...*/], 1210, ::STRINGS[102/*"Raise"*/]);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :1198
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#15
// -------------------------------------------------------------------

// private sealed class Bundle.ReadClosure :1122
// {
uType* Bundle__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Bundle.ReadClosure", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Bundle__ReadClosure, _filename), 0);
    return type;
}

// public ReadClosure(string filename) :1126
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :1131
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :1126
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval)
{
    *__retval = Bundle__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :1126
void Bundle__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance] :1131
uString* Bundle__ReadClosure::Invoke()
{
    return ::g::Fuse::Reactive::FuseJS::Bundle::Read1(_filename);
}

// public ReadClosure New(string filename) [static] :1126
Bundle__ReadClosure* Bundle__ReadClosure::New1(uString* filename)
{
    Bundle__ReadClosure* obj1 = (Bundle__ReadClosure*)uNew(Bundle__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#14
// -------------------------------------------------------------------

// internal static class Storage :969
// {
uClassType* Storage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Storage", options);
    ::STRINGS[103] = uString::Const("writeSync");
    ::STRINGS[31] = uString::Const("readSync");
    ::STRINGS[104] = uString::Const("deleteSync");
    ::STRINGS[105] = uString::Const("write");
    ::STRINGS[32] = uString::Const("read");
    ::STRINGS[33] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[71] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[72] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :971
void Storage__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Storage::CreateModule();
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) :1004
void Storage__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Delete(c, args);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :1026
void Storage__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :994
void Storage__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::ReadAsync(args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) :1014
void Storage__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) :982
void Storage__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::WriteAsync(args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :971
::g::Fuse::Scripting::NativeModule* Storage::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[103/*"writeSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Write_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[31/*"readSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Read_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[104/*"deleteSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Delete_fn)), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[71/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[105/*"write"*/], uDelegate::New(::TYPES[72/*Fuse.Scripting.FutureFactory<bool>*/], (void*)Storage__WriteAsync_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[32/*"read"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)Storage__ReadAsync_fn), NULL)));
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) [static] :1004
uObject* Storage::Delete(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return uBox(::TYPES[42/*bool*/], ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::TYPES[42/*bool*/], false);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :1026
uObject* Storage::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    try
    {
        if (uPtr(args)->Length() > 0)
        {
            uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
            return ::g::Fuse::Storage::ApplicationDir::Read((filename != NULL) ? filename : ::STRINGS[33/*""*/]);
        }

        return ::g::Fuse::Storage::ApplicationDir::Read(::STRINGS[33/*""*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[33/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :994
::g::Uno::Threading::Future1* Storage::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[33/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[33/*""*/]);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static] :1014
uObject* Storage::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return uBox(::TYPES[42/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[33/*""*/], (value != NULL) ? value : ::STRINGS[33/*""*/]));
    }

    return uBox(::TYPES[42/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[33/*""*/], ::STRINGS[33/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static] :982
::g::Uno::Threading::Future1* Storage::WriteAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[33/*""*/], (value != NULL) ? value : ::STRINGS[33/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[33/*""*/], ::STRINGS[33/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#11
// -------------------------------------------------------------------

// private sealed class TimerManager.Timer :729
// {
uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    ::TYPES[70] = ::g::Uno::Double_typeof();
    ::TYPES[73] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[42] = ::g::Uno::Bool_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _startTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _timeout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerManager__Timer::_id_, uFieldFlagsStatic);
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :743
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// private double GetMilliseconds() :788
void TimerManager__Timer__GetMilliseconds_fn(TimerManager__Timer* __this, double* __retval)
{
    *__retval = __this->GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :743
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :752
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :758
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// internal void Update() :765
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this)
{
    __this->Update();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :743
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    ID = (TimerManager__Timer::_id()++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private double GetMilliseconds() [instance] :788
double TimerManager__Timer::GetMilliseconds()
{
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// private void Start() [instance] :752
void TimerManager__Timer::Start()
{
    _startTime = GetMilliseconds();
    _isRunning = true;
}

// public void Stop() [instance] :758
void TimerManager__Timer::Stop()
{
    _isRunning = false;

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// internal void Update() [instance] :765
void TimerManager__Timer::Update()
{
    if (!_isRunning)
        return;

    double now = GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout < elapsed)
    {
        {
            const auto __finally_fun = [&]()
            {
                if (_repeat)
                    _startTime = now;
                else
                    Stop();
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
    }
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :743
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#11
// -------------------------------------------------------------------

// internal sealed class TimerManager :679
// {
uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    ::TYPES[74] = ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof());
    ::TYPES[75] = TimerManager__Timer_typeof();
    ::TYPES[33] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager, _timers), 0);
    return type;
}

// public generated TimerManager() :679
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :683
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public bool DeleteTimer(int id) :691
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :711
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :679
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :702
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public void Tick() :721
void TimerManager__Tick_fn(TimerManager* __this)
{
    __this->Tick();
}

// public generated TimerManager() [instance] :679
void TimerManager::ctor_()
{
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[74/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/]));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :683
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[33/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public bool DeleteTimer(int id) [instance] :691
bool TimerManager::DeleteTimer(int id)
{
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :711
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    TimerManager__Timer* ret2;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :702
void TimerManager::RemoveTimer(int id)
{
    TimerManager__Timer* ret3;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret3), ret3))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public void Tick() [instance] :721
void TimerManager::Tick()
{
    TimerManager__Timer* ret4;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret4), ret4))->Update();
}

// public generated TimerManager New() [static] :679
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#11
// -------------------------------------------------------------------

// internal sealed class TimerModule :609
// {
::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[106] = uString::Const("create");
    ::STRINGS[107] = uString::Const("delete");
    ::STRINGS[108] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[109] = uString::Const("create(): first argument must be a function");
    ::STRINGS[110] = uString::Const("delete(): requires one argument");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[42] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(3,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule, _tm), 0);
    return type;
}

// public TimerModule() :613
void TimerModule__ctor_2_fn(TimerModule* __this)
{
    __this->ctor_2();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :620
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :639
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :613
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// internal void UpdateModule() :649
void TimerModule__UpdateModule_fn(TimerModule* __this)
{
    __this->UpdateModule();
}

// public TimerModule() [instance] :613
void TimerModule::ctor_2()
{
    ctor_1(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[106/*"create"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[107/*"delete"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :620
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[108/*"create(): r...*/]));

    if (!uIs(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[109/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::TYPES[42/*bool*/], args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        innerArgs->Strong<uObject*>(i) = args->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[43/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :639
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[110/*"delete(): r...*/]));

    uPtr(_tm)->DeleteTimer(::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// internal void UpdateModule() [instance] :649
void TimerModule::UpdateModule()
{
    if (_tm != NULL)
        uPtr(_tm)->Tick();
}

// public TimerModule New() [static] :613
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#17
// -------------------------------------------------------------------

// public sealed class UserEvents :1219
// {
uType* UserEvents_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.UserEvents", options);
    ::STRINGS[111] = uString::Const("raise");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[76] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[22] = ::g::Uno::String_typeof()->Array();
    ::TYPES[77] = ::g::Fuse::Reactive::FuseJS::RaiseEvent_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :1221
void UserEvents__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = UserEvents::CreateModule();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :1232
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :1221
::g::Fuse::Scripting::NativeModule* UserEvents::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[111/*"raise"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn))));
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :1232
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[16/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[76/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::Fuse::Reactive::FuseJS::RaiseEvent* re = ::g::Fuse::Reactive::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)::g::Fuse::Reactive::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#10
// -------------------------------------------------------------------

// internal static class Vibration :582
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Vibration", options);
    ::STRINGS[112] = uString::Const("vibrate");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    return type;
}

// public static Fuse.Scripting.NativeModule CreateModule() :584
void Vibration__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval)
{
    *__retval = Vibration::CreateModule();
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) :589
void Vibration__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval)
{
    *__retval = Vibration::Vibrate(context, args);
}

// public static Fuse.Scripting.NativeModule CreateModule() [static] :584
::g::Fuse::Scripting::NativeModule* Vibration::CreateModule()
{
    return ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[112/*"vibrate"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Vibration__Vibrate_fn))));
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) [static] :589
uArray* Vibration::Vibrate(::g::Fuse::Scripting::Context* context, uArray* args)
{
    double ms = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 200.0;
    ::g::Fuse::Vibration::Vibration::Vibrate(ms);
    return NULL;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
