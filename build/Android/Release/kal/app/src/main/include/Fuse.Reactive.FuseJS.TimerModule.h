// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#11'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class TimerModule :609
// {
::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof();
void TimerModule__ctor_2_fn(TimerModule* __this);
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__New2_fn(TimerModule** __retval);
void TimerModule__UpdateModule_fn(TimerModule* __this);

struct TimerModule : ::g::Fuse::Scripting::NativeModule
{
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerManager*> _tm;

    void ctor_2();
    uObject* Create(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Delete(::g::Fuse::Scripting::Context* context, uArray* args);
    void UpdateModule();
    static TimerModule* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
