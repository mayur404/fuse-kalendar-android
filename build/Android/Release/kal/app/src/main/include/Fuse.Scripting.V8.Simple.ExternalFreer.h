// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.27.10/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ExternalFreer;}}}}}
namespace V8Simple { class ExternalFreerProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class ExternalFreer :964
// {
struct ExternalFreer_type : uType
{
    void(*fp_Free)(::g::Fuse::Scripting::V8::Simple::ExternalFreer*, void**);
};

ExternalFreer_type* ExternalFreer_typeof();
void ExternalFreer__ctor__fn(ExternalFreer* __this);
void ExternalFreer__Free_fn(ExternalFreer* __this, void** ptr);

struct ExternalFreer : uObject
{
    ::V8Simple::ExternalFreerProxy* _impl;

    void ctor_();
    void Free(void* ptr) { (((ExternalFreer_type*)__type)->fp_Free)(this, &ptr); }
    static void Free(ExternalFreer* __this, void* ptr) { ExternalFreer__Free_fn(__this, &ptr); }
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
