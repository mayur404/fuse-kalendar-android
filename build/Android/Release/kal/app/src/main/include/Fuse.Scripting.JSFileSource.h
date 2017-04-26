// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.27.10/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Fuse{namespace Scripting{struct JSFileSource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class JSFileSource :533
// {
::g::Uno::UX::FileSource_type* JSFileSource_typeof();
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path);
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval);
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval);

struct JSFileSource : ::g::Uno::UX::FileSource
{
    uStrong<uString*> _path;

    void ctor_1(uString* path);
    static JSFileSource* New1(uString* path);
};
// }

}}} // ::g::Fuse::Scripting
