// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct NameTableEntry;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NameTable :253
// {
uType* NameTable_typeof();
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries);
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval);
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval);

struct NameTable : uObject
{
    uStrong< ::g::Uno::Collections::List*> _objects;
    static uSStrong<NameTable*> Empty_;
    static uSStrong<NameTable*>& Empty() { return NameTable_typeof()->Init(), Empty_; }
    uStrong<uArray*> Entries;
    uStrong<NameTable*> ParentTable;

    void ctor_(NameTable* parentTable, uArray* entries);
    uObject* Objects();
    static NameTable* New1(NameTable* parentTable, uArray* entries);
};
// }

}}} // ::g::Uno::UX
