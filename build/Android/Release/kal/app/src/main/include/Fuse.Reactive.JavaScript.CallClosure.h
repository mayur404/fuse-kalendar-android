// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class JavaScript.CallClosure :1086
// {
uType* JavaScript__CallClosure_typeof();
void JavaScript__CallClosure__ctor__fn(JavaScript__CallClosure* __this, ::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args);
void JavaScript__CallClosure__New1_fn(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args, JavaScript__CallClosure** __retval);
void JavaScript__CallClosure__Run_fn(JavaScript__CallClosure* __this);

struct JavaScript__CallClosure : uObject
{
    uStrong<uArray*> _args;
    uStrong<uObject*> _obj;
    uStrong< ::g::Fuse::Scripting::ScriptMethod*> _sm;

    void ctor_(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args);
    void Run();
    static JavaScript__CallClosure* New1(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
