// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#42'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct KeyboardBootstrapper;}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}

namespace g{
namespace Fuse{

// internal sealed class KeyboardBootstrapper :5862
// {
uType* KeyboardBootstrapper_typeof();
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);

struct KeyboardBootstrapper : uObject
{
    static void OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
};
// }

}} // ::g::Fuse
