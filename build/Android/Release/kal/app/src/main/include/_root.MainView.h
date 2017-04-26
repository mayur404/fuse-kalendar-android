// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct NameTableEntry;}}}
namespace g{struct kal_FuseControlsPanel_Background_Property;}
namespace g{struct kal_FuseControlsPanel_Opacity_Property;}
namespace g{struct kal_FuseControlsScrollView_IsEnabled_Property;}
namespace g{struct kal_FuseControlsStackPanel_Opacity_Property;}
namespace g{struct kal_FuseControlsText_Value_Property;}
namespace g{struct kal_FuseReactiveEach_Items_Property;}
namespace g{struct kal_FuseTriggersStateGroup_Active_Property;}
namespace g{struct MainView;}
namespace g{struct SystemSounds;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Controls::Panel*> addPin;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> addPin_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> addPin1;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> addPin1_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> addPin2;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> addPin2_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> addPin3;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> addPin3_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> countryContent;
    uStrong< ::g::Fuse::Controls::ScrollView*> countryContentScroll;
    uStrong< ::g::kal_FuseControlsScrollView_IsEnabled_Property*> countryContentScroll_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> countryDetail;
    uStrong< ::g::Fuse::Triggers::State*> countryL0;
    uStrong< ::g::Fuse::Triggers::State*> countryL1;
    uStrong< ::g::Fuse::Triggers::State*> countryL2;
    uStrong< ::g::Fuse::Controls::Panel*> countryPanel;
    uStrong< ::g::Fuse::Controls::StackPanel*> countryTitle;
    uStrong< ::g::kal_FuseControlsStackPanel_Opacity_Property*> countryTitle_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> curiousBtn;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> curiousBtn_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> curiousBtn1;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> curiousBtn1_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> curiousBtn2;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> curiousBtn2_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> curiousBtn3;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> curiousBtn3_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> curiousBtn4;
    uStrong< ::g::kal_FuseControlsPanel_Opacity_Property*> curiousBtn4_Opacity_inst;
    static uSStrong< ::g::Fuse::Font*> gBold_;
    static uSStrong< ::g::Fuse::Font*>& gBold() { return MainView_typeof()->Init(), gBold_; }
    static uSStrong< ::g::Fuse::Font*> gMedium_;
    static uSStrong< ::g::Fuse::Font*>& gMedium() { return MainView_typeof()->Init(), gMedium_; }
    uStrong< ::g::Fuse::Controls::Page*> holidays;
    uStrong< ::g::Fuse::Controls::Page*> home;
    uStrong< ::g::Fuse::Controls::Panel*> homeContent;
    uStrong< ::g::Fuse::Controls::ScrollView*> homeContentScroll;
    uStrong< ::g::kal_FuseControlsScrollView_IsEnabled_Property*> homeContentScroll_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> homeItem0;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> homeItem0_Background_inst;
    uStrong< ::g::Fuse::Controls::Panel*> homeItem1;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> homeItem1_Background_inst;
    uStrong< ::g::Fuse::Controls::Panel*> homeItem2;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> homeItem2_Background_inst;
    uStrong< ::g::Fuse::Controls::Panel*> homeItem3;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> homeItem3_Background_inst;
    uStrong< ::g::Fuse::Controls::Panel*> homeItem5;
    uStrong< ::g::Fuse::Triggers::State*> homeL0;
    uStrong< ::g::Fuse::Triggers::State*> homeL1;
    uStrong< ::g::Fuse::Controls::Panel*> homePanel;
    uStrong< ::g::Fuse::Controls::StackPanel*> homeTitle;
    uStrong< ::g::kal_FuseControlsStackPanel_Opacity_Property*> homeTitle_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> movieContent;
    uStrong< ::g::Fuse::Controls::ScrollView*> movieContentScroll;
    uStrong< ::g::kal_FuseControlsScrollView_IsEnabled_Property*> movieContentScroll_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> movieDetail;
    uStrong< ::g::Fuse::Controls::Panel*> movieItem;
    uStrong< ::g::kal_FuseControlsPanel_Background_Property*> movieItem_Background_inst;
    uStrong< ::g::Fuse::Triggers::State*> movieL0;
    uStrong< ::g::Fuse::Triggers::State*> movieL1;
    uStrong< ::g::Fuse::Triggers::State*> movieL2;
    uStrong< ::g::Fuse::Controls::Panel*> moviePanel;
    uStrong< ::g::Fuse::Controls::Page*> movies;
    uStrong< ::g::Fuse::Controls::StackPanel*> movieTitle;
    uStrong< ::g::kal_FuseControlsStackPanel_Opacity_Property*> movieTitle_Opacity_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation;
    uStrong< ::g::Fuse::Controls::Text*> pinContent;
    uStrong< ::g::Fuse::Controls::Text*> pinContent1;
    uStrong< ::g::Fuse::Controls::Text*> pinContent2;
    uStrong< ::g::Fuse::Controls::Text*> pinContent3;
    uStrong< ::g::Fuse::Controls::Panel*> sportContent;
    uStrong< ::g::Fuse::Controls::ScrollView*> sportContentScroll;
    uStrong< ::g::kal_FuseControlsScrollView_IsEnabled_Property*> sportContentScroll_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sportDetail;
    uStrong< ::g::Fuse::Triggers::State*> sportL0;
    uStrong< ::g::Fuse::Triggers::State*> sportL1;
    uStrong< ::g::Fuse::Triggers::State*> sportL2;
    uStrong< ::g::Fuse::Controls::Panel*> sportPanel;
    uStrong< ::g::Fuse::Controls::Page*> sports;
    uStrong< ::g::Fuse::Controls::StackPanel*> sportTitle;
    uStrong< ::g::kal_FuseControlsStackPanel_Opacity_Property*> sportTitle_Opacity_inst;
    uStrong< ::g::Fuse::Triggers::StateGroup*> stateGroupCountry;
    uStrong< ::g::kal_FuseTriggersStateGroup_Active_Property*> stateGroupCountry_Active_inst;
    uStrong< ::g::Fuse::Triggers::StateGroup*> stateGroupHome;
    uStrong< ::g::kal_FuseTriggersStateGroup_Active_Property*> stateGroupHome_Active_inst;
    uStrong< ::g::Fuse::Triggers::StateGroup*> stateGroupMovie;
    uStrong< ::g::kal_FuseTriggersStateGroup_Active_Property*> stateGroupMovie_Active_inst;
    uStrong< ::g::Fuse::Triggers::StateGroup*> stateGroupSport;
    uStrong< ::g::kal_FuseTriggersStateGroup_Active_Property*> stateGroupSport_Active_inst;
    uStrong< ::g::Fuse::Triggers::StateGroup*> stateGroupTv;
    uStrong< ::g::kal_FuseTriggersStateGroup_Active_Property*> stateGroupTv_Active_inst;
    static uSStrong< ::g::SystemSounds*> SystemSounds_;
    static uSStrong< ::g::SystemSounds*>& SystemSounds() { return MainView_typeof()->Init(), SystemSounds_; }
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp_Value_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp1_Items_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp10_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp11_Value_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp12_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp13_Items_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp14_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp15_Value_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp16_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp17_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp18_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp19_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp2_Items_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp20_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp21_Value_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp22_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp23_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp24_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp25_Items_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp26_Value_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp27_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp3_Items_inst;
    uStrong< ::g::kal_FuseReactiveEach_Items_Property*> temp4_Items_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp5_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp6_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp7_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp8_Value_inst;
    uStrong< ::g::kal_FuseControlsText_Value_Property*> temp9_Value_inst;
    uStrong< ::g::Fuse::Controls::Page*> tv;
    uStrong< ::g::Fuse::Controls::Panel*> tvContent;
    uStrong< ::g::Fuse::Controls::ScrollView*> tvContentScroll;
    uStrong< ::g::kal_FuseControlsScrollView_IsEnabled_Property*> tvContentScroll_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> tvDetail;
    uStrong< ::g::Fuse::Triggers::State*> tvL0;
    uStrong< ::g::Fuse::Triggers::State*> tvL1;
    uStrong< ::g::Fuse::Triggers::State*> tvL2;
    uStrong< ::g::Fuse::Controls::Panel*> tvPanel;
    uStrong< ::g::Fuse::Controls::StackPanel*> tvTitle;
    uStrong< ::g::kal_FuseControlsStackPanel_Opacity_Property*> tvTitle_Opacity_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
