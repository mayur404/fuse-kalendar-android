// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadUrl;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadUrl :206
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();
void LoadUrl__Execute_fn(LoadUrl* __this, uObject* webview);
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval);
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value);

struct LoadUrl : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _Url;

    uString* Url();
    void Url(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
