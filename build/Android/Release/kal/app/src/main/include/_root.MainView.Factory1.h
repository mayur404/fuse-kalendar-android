// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Factory.h>
namespace g{struct kal_FuseControlsPanel_Background_Property;}
namespace g{struct kal_FuseControlsText_Value_Property;}
namespace g{struct MainView;}
namespace g{struct MainView__Factory1;}

namespace g{

// public partial sealed class MainView.Factory1 :234
// {
::g::Uno::UX::Factory_type* MainView__Factory1_typeof();
void MainView__Factory1__ctor_1_fn(MainView__Factory1* __this, ::g::MainView* parent);
void MainView__Factory1__New1_fn(MainView__Factory1* __this, uObject** __retval);
void MainView__Factory1__New2_fn(::g::MainView* parent, MainView__Factory1** __retval);

struct MainView__Factory1 : ::g::Uno::UX::Factory
{
    uStrong< ::g::MainView*> __parent1;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> self_Background_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp1_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp2_Value_inst;

    void ctor_1(::g::MainView* parent);
    static MainView__Factory1* New2(::g::MainView* parent);
};
// }

} // ::g
