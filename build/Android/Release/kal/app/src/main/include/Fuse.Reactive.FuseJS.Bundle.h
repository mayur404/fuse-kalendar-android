// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#15'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Bundle;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Bundle :1056
// {
uClassType* Bundle_typeof();
void Bundle__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Bundle__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Bundle__Read1_fn(uString* filename, uString** __retval);
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval);
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval);

struct Bundle : uObject
{
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static uObject* Read(::g::Fuse::Scripting::Context* c, uArray* args);
    static uString* Read1(uString* filename);
    static ::g::Uno::Threading::Future1* ReadAsync(uArray* args);
    static ::g::Uno::Threading::Future1* ReadAsync1(uString* filename);
    static bool TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
