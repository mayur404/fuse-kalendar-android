// This file was generated based on '/usr/local/share/uno/Packages/Fuse.UserEvents/0.27.10/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class UserEventArg :142
// {
uType* UserEventArg_typeof();
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value);
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval);
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value);

struct UserEventArg : uObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    uString* Name();
    void Name(uString* value);
    uObject* Value();
    void Value(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
