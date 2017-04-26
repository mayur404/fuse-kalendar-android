// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/Scripting/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptClass :113
// {
uType* ScriptClass_typeof();
void ScriptClass__ctor__fn(ScriptClass* __this, ScriptClass* superType, uArray* methods);
void ScriptClass__CountMethods_fn(ScriptClass* __this, int* __retval);
void ScriptClass__New1_fn(ScriptClass* superType, uArray* methods, ScriptClass** __retval);

struct ScriptClass : uObject
{
    uStrong<uArray*> _methods;
    uStrong<uArray*> CallTable;
    uStrong<ScriptClass*> SuperType;

    void ctor_(ScriptClass* superType, uArray* methods);
    int CountMethods();
    static ScriptClass* New1(ScriptClass* superType, uArray* methods);
};
// }

}}} // ::g::Fuse::Scripting
