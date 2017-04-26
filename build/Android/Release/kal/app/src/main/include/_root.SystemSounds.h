// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/SystemSounds.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{struct SystemSounds;}

namespace g{

// public sealed class SystemSounds :16
// {
::g::Fuse::Scripting::NativeModule_type* SystemSounds_typeof();
void SystemSounds__ctor_2_fn(SystemSounds* __this);
void SystemSounds__AddEventOther_fn(SystemSounds* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SystemSounds__New2_fn(SystemSounds** __retval);
void SystemSounds__ToastIt_fn(SystemSounds* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SystemSounds__ToastMakeText_fn(SystemSounds* __this);

struct SystemSounds : ::g::Fuse::Scripting::NativeModule
{
    uStrong<uString*> m_text;

    void ctor_2();
    uObject* AddEventOther(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* ToastIt(::g::Fuse::Scripting::Context* c, uArray* args);
    void ToastMakeText();
    static SystemSounds* New2();
};
// }

} // ::g
