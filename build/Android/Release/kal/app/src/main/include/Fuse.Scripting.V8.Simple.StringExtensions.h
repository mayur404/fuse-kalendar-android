// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.27.10/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct StringExtensions;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class StringExtensions :1555
// {
uClassType* StringExtensions_typeof();
void StringExtensions__GetStringImpl_fn(::g::Fuse::Scripting::V8::Simple::String* str, ::V8Simple::String** __retval);

struct StringExtensions : uObject
{
    static ::V8Simple::String* GetStringImpl(::g::Fuse::Scripting::V8::Simple::String* str);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
