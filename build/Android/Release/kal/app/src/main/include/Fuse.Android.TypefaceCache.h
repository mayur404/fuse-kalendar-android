// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct Typeface;}}}
namespace g{namespace Fuse{namespace Android{struct TypefaceCache;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class TypefaceCache :1392
// {
uClassType* TypefaceCache_typeof();
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Android::Typeface** __retval);
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Android::Typeface** __retval);
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Android::Typeface** __retval);

struct TypefaceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _typefaces_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _typefaces() { return TypefaceCache_typeof()->Init(), _typefaces_; }

    static ::g::Fuse::Android::Typeface* GetTypeface(::g::Fuse::Font* font);
    static ::g::Fuse::Android::Typeface* GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file);
    static ::g::Fuse::Android::Typeface* GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource);
};
// }

}}} // ::g::Fuse::Android
