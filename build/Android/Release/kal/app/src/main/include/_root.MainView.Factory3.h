// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Factory.h>
namespace g{struct kal_FuseReactiveMatch_Value_Property;}
namespace g{struct MainView;}
namespace g{struct MainView__Factory3;}

namespace g{

// public partial sealed class MainView.Factory3 :523
// {
::g::Uno::UX::Factory_type* MainView__Factory3_typeof();
void MainView__Factory3__ctor_1_fn(MainView__Factory3* __this, ::g::MainView* parent);
void MainView__Factory3__New1_fn(MainView__Factory3* __this, uObject** __retval);
void MainView__Factory3__New2_fn(::g::MainView* parent, MainView__Factory3** __retval);

struct MainView__Factory3 : ::g::Uno::UX::Factory
{
    uStrong< ::g::MainView*> __parent1;
    uStrong< ::g::kal_FuseReactiveMatch_Value_Property*> temp_Value_inst;

    void ctor_1(::g::MainView* parent);
    static MainView__Factory3* New2(::g::MainView* parent);
};
// }

} // ::g
