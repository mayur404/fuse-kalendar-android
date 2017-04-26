// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IDataContext :1828
// {
uInterfaceType* IDataContext_typeof();

struct IDataContext
{
    void(*fp_get_DataContext)(uObject*, uObject**);
    void(*fp_set_DataContext)(uObject*, uObject*);
    static uObject* DataContext(const uInterface& __this) { uObject* __retval; return __this.VTable<IDataContext>()->fp_get_DataContext(__this, &__retval), __retval; }
    static void DataContext(const uInterface& __this, uObject* value) { __this.VTable<IDataContext>()->fp_set_DataContext(__this, value); }
};
// }

}} // ::g::Fuse
