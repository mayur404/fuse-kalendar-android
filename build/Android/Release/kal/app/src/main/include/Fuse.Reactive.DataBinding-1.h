// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.Binding.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Reactive{struct DataBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class DataBinding<T> :49
// {
struct DataBinding_type : ::g::Fuse::Reactive::Binding_type
{
    ::g::Fuse::Reactive::IObserver interface1;
    ::g::Fuse::INameListener interface2;
    void(*fp_PushValue)(::g::Fuse::Reactive::DataBinding*, uObject*);
};

DataBinding_type* DataBinding_typeof();
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uString* key);
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval);
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, uObject* obj, uString* name);
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue);
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message);
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::Array* values);
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnRemove_fn(DataBinding* __this, uObject* value, int* index);
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue);
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataBinding** __retval);
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value);
void DataBinding__OnRooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode);
void DataBinding__OnUnrooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode);
void DataBinding__OnValueChanged_fn(DataBinding* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval);
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value);

struct DataBinding : ::g::Fuse::Reactive::Binding
{
    uStrong<uObject*> _currentValue;
    uStrong< ::g::Fuse::Reactive::ObservableSubscription*> _subscription;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_2(::g::Uno::UX::Property* target, uString* key);
    bool Acceptor(uObject* obj);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void PushValue(uObject* newValue) { (((DataBinding_type*)__type)->fp_PushValue)(this, newValue); }
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static DataBinding* New1(uType* __type, ::g::Uno::UX::Property* target, uString* key);
    static void PushValue(DataBinding* __this, uObject* newValue) { DataBinding__PushValue_fn(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
