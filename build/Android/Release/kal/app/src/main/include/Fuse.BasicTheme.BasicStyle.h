// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.10/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Style.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{struct Font;}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle :68
// {
::g::Fuse::Style_type* BasicStyle_typeof();
void BasicStyle__ctor_1_fn(BasicStyle* __this);
void BasicStyle__get_ColorScheme_fn(BasicStyle* __this, int* __retval);
void BasicStyle__set_ColorScheme_fn(BasicStyle* __this, int* value);
void BasicStyle__InitializeUX_fn(BasicStyle* __this);
void BasicStyle__New2_fn(BasicStyle** __retval);
void BasicStyle__SetColorScheme_fn(BasicStyle* __this);
void BasicStyle__UpdateColorCodes_fn(BasicStyle* __this, uArray* hexValues);

struct BasicStyle : ::g::Fuse::Style
{
    int _colorScheme;
    static uSStrong<uArray*> Amber_;
    static uSStrong<uArray*>& Amber() { return BasicStyle_typeof()->Init(), Amber_; }
    static uSStrong<uArray*> Blue_;
    static uSStrong<uArray*>& Blue() { return BasicStyle_typeof()->Init(), Blue_; }
    static uSStrong<uArray*> BlueGrey_;
    static uSStrong<uArray*>& BlueGrey() { return BasicStyle_typeof()->Init(), BlueGrey_; }
    static uSStrong<uArray*> Brown_;
    static uSStrong<uArray*>& Brown() { return BasicStyle_typeof()->Init(), Brown_; }
    static uSStrong<uArray*> ColorCodes_;
    static uSStrong<uArray*>& ColorCodes() { return BasicStyle_typeof()->Init(), ColorCodes_; }
    static uSStrong<uArray*> Cyan_;
    static uSStrong<uArray*>& Cyan() { return BasicStyle_typeof()->Init(), Cyan_; }
    static uSStrong<uArray*> DeepOrange_;
    static uSStrong<uArray*>& DeepOrange() { return BasicStyle_typeof()->Init(), DeepOrange_; }
    static uSStrong<uArray*> DeepPurple_;
    static uSStrong<uArray*>& DeepPurple() { return BasicStyle_typeof()->Init(), DeepPurple_; }
    static uSStrong<uArray*> Green_;
    static uSStrong<uArray*>& Green() { return BasicStyle_typeof()->Init(), Green_; }
    static uSStrong<uArray*> Grey_;
    static uSStrong<uArray*>& Grey() { return BasicStyle_typeof()->Init(), Grey_; }
    static uSStrong<uArray*> Indigo_;
    static uSStrong<uArray*>& Indigo() { return BasicStyle_typeof()->Init(), Indigo_; }
    static uSStrong<uArray*> LightBlue_;
    static uSStrong<uArray*>& LightBlue() { return BasicStyle_typeof()->Init(), LightBlue_; }
    static uSStrong<uArray*> LightGreen_;
    static uSStrong<uArray*>& LightGreen() { return BasicStyle_typeof()->Init(), LightGreen_; }
    static uSStrong<uArray*> Lime_;
    static uSStrong<uArray*>& Lime() { return BasicStyle_typeof()->Init(), Lime_; }
    static uSStrong<uArray*> Orange_;
    static uSStrong<uArray*>& Orange() { return BasicStyle_typeof()->Init(), Orange_; }
    static uSStrong<uArray*> Pink_;
    static uSStrong<uArray*>& Pink() { return BasicStyle_typeof()->Init(), Pink_; }
    static uSStrong<uArray*> Purple_;
    static uSStrong<uArray*>& Purple() { return BasicStyle_typeof()->Init(), Purple_; }
    static uSStrong<uArray*> Red_;
    static uSStrong<uArray*>& Red() { return BasicStyle_typeof()->Init(), Red_; }
    static uSStrong< ::g::Fuse::Font*> RobotoLight_;
    static uSStrong< ::g::Fuse::Font*>& RobotoLight() { return BasicStyle_typeof()->Init(), RobotoLight_; }
    static uSStrong< ::g::Fuse::Font*> RobotoMedium_;
    static uSStrong< ::g::Fuse::Font*>& RobotoMedium() { return BasicStyle_typeof()->Init(), RobotoMedium_; }
    static uSStrong< ::g::Fuse::Font*> RobotoRegular_;
    static uSStrong< ::g::Fuse::Font*>& RobotoRegular() { return BasicStyle_typeof()->Init(), RobotoRegular_; }
    static uSStrong<uArray*> Teal_;
    static uSStrong<uArray*>& Teal() { return BasicStyle_typeof()->Init(), Teal_; }
    static uSStrong<uArray*> Yellow_;
    static uSStrong<uArray*>& Yellow() { return BasicStyle_typeof()->Init(), Yellow_; }

    void ctor_1();
    int ColorScheme();
    void ColorScheme(int value);
    void InitializeUX();
    void SetColorScheme();
    void UpdateColorCodes(uArray* hexValues);
    static BasicStyle* New2();
};
// }

}}} // ::g::Fuse::BasicTheme
