// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IEventSerializer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ScriptObjectSerializer;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ScriptObjectSerializer :764
// {
struct ScriptObjectSerializer_type : uType
{
    ::g::Fuse::Scripting::IEventSerializer interface0;
};

ScriptObjectSerializer_type* ScriptObjectSerializer_typeof();
void ScriptObjectSerializer__ctor__fn(ScriptObjectSerializer* __this, ::g::Fuse::Scripting::Object* obj);
void ScriptObjectSerializer__AddBool_fn(ScriptObjectSerializer* __this, uString* key, bool* value);
void ScriptObjectSerializer__AddDouble_fn(ScriptObjectSerializer* __this, uString* key, double* value);
void ScriptObjectSerializer__AddInt_fn(ScriptObjectSerializer* __this, uString* key, int* value);
void ScriptObjectSerializer__AddObject_fn(ScriptObjectSerializer* __this, uString* key, uObject* value);
void ScriptObjectSerializer__AddString_fn(ScriptObjectSerializer* __this, uString* key, uString* value);
void ScriptObjectSerializer__New1_fn(::g::Fuse::Scripting::Object* obj, ScriptObjectSerializer** __retval);

struct ScriptObjectSerializer : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> _obj;

    void ctor_(::g::Fuse::Scripting::Object* obj);
    void AddBool(uString* key, bool value);
    void AddDouble(uString* key, double value);
    void AddInt(uString* key, int value);
    void AddObject(uString* key, uObject* value);
    void AddString(uString* key, uString* value);
    static ScriptObjectSerializer* New1(::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
