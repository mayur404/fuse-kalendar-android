// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Lifecycle;}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Lifecycle :310
// {
uType* Lifecycle_typeof();
void Lifecycle__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Lifecycle__OnEnteringBackground_fn(int* newState);
void Lifecycle__OnEnteringForeground_fn(int* newState);
void Lifecycle__OnEnteringInteractive_fn(int* newState);
void Lifecycle__OnExitedInteractive_fn(int* newState);
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args);
void Lifecycle__OnTerminating_fn(int* newState);

struct Lifecycle : uObject
{
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringBackground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringBackground() { return _enteringBackground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringForeground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringForeground() { return _enteringForeground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringInteractive() { return _enteringInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _exitedInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _exitedInteractive() { return _exitedInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _terminating_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _terminating() { return _terminating_; }

    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static void OnEnteringBackground(int newState);
    static void OnEnteringForeground(int newState);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
    static void OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnTerminating(int newState);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
