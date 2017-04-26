// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.IChildObject.h>
#include <Fuse.Scripting.IModuleProvider.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct NameTableEntry;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial sealed class JavaScript :829
// {
struct JavaScript_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Scripting::IModuleProvider interface1;
};

JavaScript_type* JavaScript_typeof();
void JavaScript__ctor_1_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable);
void JavaScript__BuildObjectPredeclareString_fn(JavaScript* __this, uString** __retval);
void JavaScript__CallMethod_fn(JavaScript* __this, uArray* args, uObject** __retval);
void JavaScript__CopyArgs_fn(JavaScript* __this, ::g::Fuse::Scripting::Array* r, uArray** __retval);
void JavaScript__DispatchEvaluate_fn(JavaScript* __this);
void JavaScript__EvaluateDataContext_fn(JavaScript* __this);
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval);
void JavaScript__EvaluateModule_fn(JavaScript* __this, ::g::Fuse::Scripting::ModuleResult** __retval);
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval);
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value);
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value);
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval);
void JavaScript__GetScriptClass_fn(JavaScript* __this, ::g::Uno::UX::NameTableEntry* e, ::g::Fuse::Scripting::ScriptClass** __retval);
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval);
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value);
void JavaScript__LookUp_fn(JavaScript* __this, int* objIndex, uObject** obj, ::g::Uno::UX::NameTable** nt);
void JavaScript__LookUp1_fn(JavaScript* __this, int* objIndex, int* methodIndex, uObject** obj, ::g::Fuse::Scripting::ScriptMethod** sm);
void JavaScript__New1_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval);
void JavaScript__OnRooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode);
void JavaScript__OnUnrooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode);
void JavaScript__RegisterClass_fn(::g::Fuse::Scripting::Context* ctx, uString* name, ::g::Fuse::Scripting::ScriptClass* cl);
void JavaScript__RegisterRequiredClasses_fn(::g::Fuse::Scripting::Context* ctx, ::g::Uno::UX::NameTable* nt);
void JavaScript__SetParentDataContext_fn(JavaScript* __this, uObject* dataContext);
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval);

struct JavaScript : ::g::Fuse::Behavior
{
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return JavaScript_typeof()->Init(), _emptyArgs_; }
    bool _evaluatingDataContext;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _moduleResult;
    uStrong< ::g::Uno::UX::NameTable*> _nameTable;
    static uSStrong< ::g::Uno::Collections::HashSet*> _registeredClasses_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _registeredClasses() { return JavaScript_typeof()->Init(), _registeredClasses_; }
    static uSStrong< ::g::Uno::Threading::Mutex*> _resetHookMutex_;
    static uSStrong< ::g::Uno::Threading::Mutex*>& _resetHookMutex() { return JavaScript_typeof()->Init(), _resetHookMutex_; }
    uStrong< ::g::Fuse::Scripting::ScriptModule*> _scriptModule;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker_;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*>& _worker() { return JavaScript_typeof()->Init(), _worker_; }

    void ctor_1(::g::Uno::UX::NameTable* nameTable);
    uString* BuildObjectPredeclareString();
    uObject* CallMethod(uArray* args);
    uArray* CopyArgs(::g::Fuse::Scripting::Array* r);
    void DispatchEvaluate();
    void EvaluateDataContext();
    uObject* EvaluateExports();
    ::g::Fuse::Scripting::ModuleResult* EvaluateModule();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    ::g::Fuse::Scripting::ScriptClass* GetScriptClass(::g::Uno::UX::NameTableEntry* e);
    int LineNumber();
    void LineNumber(int value);
    void LookUp(int* objIndex, uObject** obj, ::g::Uno::UX::NameTable** nt);
    void LookUp1(int objIndex, int methodIndex, uObject** obj, ::g::Fuse::Scripting::ScriptMethod** sm);
    void SetParentDataContext(uObject* dataContext);
    static JavaScript* New1(::g::Uno::UX::NameTable* nameTable);
    static void RegisterClass(::g::Fuse::Scripting::Context* ctx, uString* name, ::g::Fuse::Scripting::ScriptClass* cl);
    static void RegisterRequiredClasses(::g::Fuse::Scripting::Context* ctx, ::g::Uno::UX::NameTable* nt);
    static ::g::Fuse::Reactive::ThreadWorker* Worker();
};
// }

}}} // ::g::Fuse::Reactive
