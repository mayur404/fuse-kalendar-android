// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Reactive.Binding.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :719
// {
::g::Fuse::Reactive::Binding_type* EventBinding_typeof();
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key);
void EventBinding__CallFunction_fn(::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
void EventBinding__New1_fn(uString* key, EventBinding** __retval);
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args);

struct EventBinding : ::g::Fuse::Reactive::Binding
{
    uStrong< ::g::Fuse::Scripting::Function*> _function;

    void ctor_2(uString* key);
    void OnEvent(uObject* sender, ::g::Uno::EventArgs* args);
    static void CallFunction(::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
    static EventBinding* New1(uString* key);
};
// }

}}} // ::g::Fuse::Reactive
