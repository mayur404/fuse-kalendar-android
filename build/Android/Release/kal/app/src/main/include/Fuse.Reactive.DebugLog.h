// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct DebugLog;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class DebugLog :81
// {
uClassType* DebugLog_typeof();
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c);
void DebugLog__Log_fn(uArray* args, uObject** __retval);

struct DebugLog : uObject
{
    static void Init(::g::Fuse::Scripting::Context* c);
    static uObject* Log(uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
