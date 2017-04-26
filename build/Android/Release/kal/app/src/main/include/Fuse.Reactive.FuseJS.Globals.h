// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Globals;}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Globals :211
// {
uClassType* Globals_typeof();
void Globals__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval);
void Globals__readAsText_fn(uArray* args, uString** __retval);

struct Globals : uObject
{
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static bool FileSourceAcceptor(uObject* obj);
    static uString* readAsText(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
