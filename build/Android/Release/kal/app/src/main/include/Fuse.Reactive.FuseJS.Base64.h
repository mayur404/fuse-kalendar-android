// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Base64;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class Base64 :904
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof();
void Base64__ctor_2_fn(Base64* __this);
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__New2_fn(Base64** __retval);

struct Base64 : ::g::Fuse::Scripting::NativeModule
{
    void ctor_2();
    uObject* DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args);
    static Base64* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS