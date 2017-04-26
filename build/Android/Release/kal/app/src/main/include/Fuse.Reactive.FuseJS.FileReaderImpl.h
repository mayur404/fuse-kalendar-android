// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#16'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct FileReaderImpl;}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class FileReaderImpl :1148
// {
uClassType* FileReaderImpl_typeof();
void FileReaderImpl__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct FileReaderImpl : uObject
{
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static ::g::Uno::Threading::Future1* readAsDataURL(uArray* args);
    static ::g::Uno::Threading::Future1* readAsText(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
