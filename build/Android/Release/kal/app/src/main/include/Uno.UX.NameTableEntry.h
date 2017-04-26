// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct NameTableEntry;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NameTableEntry :239
// {
uType* NameTableEntry_typeof();
void NameTableEntry__ctor__fn(NameTableEntry* __this, uString* name, uString* typeName, uArray* metadata);
void NameTableEntry__New1_fn(uString* name, uString* typeName, uArray* metadata, NameTableEntry** __retval);

struct NameTableEntry : uObject
{
    uStrong<uArray*> Metadata;
    uStrong<uString*> Name;
    uStrong<uString*> TypeName;

    void ctor_(uString* name, uString* typeName, uArray* metadata);
    static NameTableEntry* New1(uString* name, uString* typeName, uArray* metadata);
};
// }

}}} // ::g::Uno::UX
