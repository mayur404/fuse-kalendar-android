// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ThreadWorker :1939
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Uno::Threading::IDispatcher interface1;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__get_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* __retval);
void ThreadWorker__set_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* value);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__ToArray_fn(::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray1_fn(::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray2_fn(::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray3_fn(::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray4_fn(::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray5_fn(::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__Unwrap_fn(uObject* dc, uObject** __retval);
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval);

struct ThreadWorker : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return _context_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _fuseJS_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*>& _fuseJS() { return _fuseJS_; }
    bool _isReady;
    uStrong< ::g::Uno::Threading::Mutex*> _isReadyMutex;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;
    bool _terminate;
    uStrong< ::g::Uno::Threading::Mutex*> CanExecuteJavaScript;
    uStrong< ::g::Uno::Threading::Mutex*> Pause;

    void ctor_();
    void CheckAndThrow();
    ::g::Fuse::Scripting::Context* Context();
    void Dispose();
    ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
    void Invoke(uDelegate* action);
    bool IsJavaScriptVMReady();
    void IsJavaScriptVMReady(bool value);
    void OnClosing(uObject* sender, ::g::Uno::EventArgs* args);
    void Run();
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* ownerThread);
    static ThreadWorker* New1();
    static ::g::Fuse::Scripting::Array* ToArray(::g::Uno::Float2 v);
    static ::g::Fuse::Scripting::Array* ToArray1(::g::Uno::Float3 v);
    static ::g::Fuse::Scripting::Array* ToArray2(::g::Uno::Float4 v);
    static ::g::Fuse::Scripting::Array* ToArray3(::g::Uno::Int2 v);
    static ::g::Fuse::Scripting::Array* ToArray4(::g::Uno::Int3 v);
    static ::g::Fuse::Scripting::Array* ToArray5(::g::Uno::Int4 v);
    static uObject* Unwrap(uObject* dc);
    static uObject* Wrap(uObject* obj);
};
// }

}}} // ::g::Fuse::Reactive
