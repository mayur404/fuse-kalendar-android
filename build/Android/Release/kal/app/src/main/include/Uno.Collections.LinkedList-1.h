// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Collections/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class LinkedList<T> :817
// {
struct LinkedList_type : uType
{
    ::g::Uno::Collections::ICollection interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

LinkedList_type* LinkedList_typeof();
void LinkedList__ctor__fn(LinkedList* __this);
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__Clear_fn(LinkedList* __this);
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval);
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval);
void LinkedList__set_Count_fn(LinkedList* __this, int* value);
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value);
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval);
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value);
void LinkedList__New1_fn(uType* __type, LinkedList** __retval);
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval);
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__UnoCollectionsICollectionTAdd_fn(LinkedList* __this, void* value);

struct LinkedList : uObject
{
    int _Count;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _First;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _Last;

    void ctor_();
    void AddFirst1(::g::Uno::Collections::LinkedListNode* node);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* AddLast(T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__AddLast_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void AddLast1(::g::Uno::Collections::LinkedListNode* node);
    void Clear();
    template<class T>
    bool Contains(T value) { bool __retval; return LinkedList__Contains_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    int Count();
    void Count(int value);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* Find(T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__Find_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    ::g::Uno::Collections::LinkedListNode* First();
    void First(::g::Uno::Collections::LinkedListNode* value);
    uObject* GetEnumerator();
    ::g::Uno::Collections::LinkedListNode* Last();
    void Last(::g::Uno::Collections::LinkedListNode* value);
    template<class T>
    bool Remove(T value) { bool __retval; return LinkedList__Remove_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void Remove1(::g::Uno::Collections::LinkedListNode* node);
    static LinkedList* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
