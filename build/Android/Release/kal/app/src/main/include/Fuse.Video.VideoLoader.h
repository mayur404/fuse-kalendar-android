// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Video{struct VideoLoader;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Video{

// public static class VideoLoader :499
// {
uClassType* VideoLoader_typeof();
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval);

struct VideoLoader : uObject
{
    static ::g::Uno::Threading::Future1* Load(uString* url);
    static ::g::Uno::Threading::Future1* Load1(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Video
