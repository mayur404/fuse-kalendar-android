// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/$.uno#18'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Uno{

// public sealed class DateTime :1629
// {
uType* DateTime_typeof();
void DateTime__get_Now_fn(::g::Uno::Time::ZonedDateTime** __retval);
void DateTime__get_UtcNow_fn(::g::Uno::Time::ZonedDateTime** __retval);

struct DateTime : uObject
{
    static ::g::Uno::Time::ZonedDateTime* Now();
    static ::g::Uno::Time::ZonedDateTime* UtcNow();
};
// }

}} // ::g::Uno
