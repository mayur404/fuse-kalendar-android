// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#44'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IChildObject :6264
// {
uInterfaceType* IChildObject_typeof();

struct IChildObject
{
    void(*fp_get_ParentObject)(uObject*, uObject**);
    static uObject* ParentObject(const uInterface& __this) { uObject* __retval; return __this.VTable<IChildObject>()->fp_get_ParentObject(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
