// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#88'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.util.Iterator.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern interface ListIterator :14859
// {
uInterfaceType* ListIterator_typeof();

struct ListIterator
{
    void(*fp_add)(uObject*, ::g::Android::java::lang::Object*);
    void(*fp_hasNext)(uObject*, bool*);
    void(*fp_hasPrevious)(uObject*, bool*);
    void(*fp_next)(uObject*, ::g::Android::java::lang::Object**);
    void(*fp_nextIndex)(uObject*, int*);
    void(*fp_previous)(uObject*, ::g::Android::java::lang::Object**);
    void(*fp_previousIndex)(uObject*, int*);
    void(*fp_remove)(uObject*);
    void(*fp_set)(uObject*, ::g::Android::java::lang::Object*);
    static void add(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { __this.VTable<ListIterator>()->fp_add(__this, arg0); }
    static bool hasNext(const uInterface& __this) { bool __retval; return __this.VTable<ListIterator>()->fp_hasNext(__this, &__retval), __retval; }
    static bool hasPrevious(const uInterface& __this) { bool __retval; return __this.VTable<ListIterator>()->fp_hasPrevious(__this, &__retval), __retval; }
    static ::g::Android::java::lang::Object* next(const uInterface& __this) { ::g::Android::java::lang::Object* __retval; return __this.VTable<ListIterator>()->fp_next(__this, &__retval), __retval; }
    static int nextIndex(const uInterface& __this) { int __retval; return __this.VTable<ListIterator>()->fp_nextIndex(__this, &__retval), __retval; }
    static ::g::Android::java::lang::Object* previous(const uInterface& __this) { ::g::Android::java::lang::Object* __retval; return __this.VTable<ListIterator>()->fp_previous(__this, &__retval), __retval; }
    static int previousIndex(const uInterface& __this) { int __retval; return __this.VTable<ListIterator>()->fp_previousIndex(__this, &__retval), __retval; }
    static void remove(const uInterface& __this) { __this.VTable<ListIterator>()->fp_remove(__this); }
    static void set(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { __this.VTable<ListIterator>()->fp_set(__this, arg0); }
};
// }

}}}} // ::g::Android::java::util
