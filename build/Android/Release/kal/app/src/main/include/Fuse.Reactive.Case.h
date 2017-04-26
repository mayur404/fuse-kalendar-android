// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Case;}}}
namespace g{namespace Fuse{namespace Reactive{struct Match;}}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Case :1362
// {
uType* Case_typeof();
void Case__ctor__fn(Case* __this);
void Case__get_Factories_fn(Case* __this, uObject** __retval);
void Case__Invalidate_fn(Case* __this);
void Case__get_IsDefault_fn(Case* __this, bool* __retval);
void Case__set_IsDefault_fn(Case* __this, bool* value);
void Case__New1_fn(Case** __retval);
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Factory* f);
void Case__get_String_fn(Case* __this, uString** __retval);
void Case__set_String_fn(Case* __this, uString* value);
void Case__get_Value_fn(Case* __this, uObject** __retval);
void Case__set_Value_fn(Case* __this, uObject* value);

struct Case : uObject
{
    uStrong<uObject*> _factories;
    uStrong< ::g::Fuse::Reactive::Match*> _match;
    uStrong<uObject*> _value;
    bool _IsDefault;

    void ctor_();
    uObject* Factories();
    void Invalidate();
    bool IsDefault();
    void IsDefault(bool value);
    void OnFactoriesChanged(::g::Uno::UX::Factory* f);
    uString* String();
    void String(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static Case* New1();
};
// }

}}} // ::g::Fuse::Reactive
