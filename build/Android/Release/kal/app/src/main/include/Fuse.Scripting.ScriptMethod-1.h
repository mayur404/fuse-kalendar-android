// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/Scripting/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMethod.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptMethod<T> :84
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof();
void ScriptMethod1__ctor_1_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread);
void ScriptMethod1__Call_fn(ScriptMethod1* __this, uObject* obj, uArray* args, uObject** __retval);
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval);

struct ScriptMethod1 : ::g::Fuse::Scripting::ScriptMethod
{
    uStrong<uDelegate*> _method;
    uStrong<uDelegate*> _voidMethod;

    void ctor_1(uString* name, uDelegate* method, int thread);
    static ScriptMethod1* New1(uType* __type, uString* name, uDelegate* method, int thread);
};
// }

}}} // ::g::Fuse::Scripting
