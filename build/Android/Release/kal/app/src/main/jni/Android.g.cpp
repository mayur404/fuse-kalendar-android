// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>

namespace g{
namespace Android{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno
// ----------------------------------------------------------------------------

// internal static extern class Bootstrapper :9
// {
uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Bootstrapper", options);
    return type;
}

// public static extern void _RegisterTypes() :11
void Bootstrapper___RegisterTypes_fn()
{
    Bootstrapper::_RegisterTypes();
}

// public static extern void _RegisterTypes() [static] :11
void Bootstrapper::_RegisterTypes()
{
    ::BootstrapperImpl();
}
// }

}} // ::g::Android
