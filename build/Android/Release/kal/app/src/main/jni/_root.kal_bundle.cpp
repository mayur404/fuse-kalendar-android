// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/kal.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[9];

namespace g{

// public static generated class kal_bundle :0
// {
// static kal_bundle() :0
static void kal_bundle__cctor__fn(uType* __type)
{
    kal_bundle::gotham_bold62f7b79c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[1/*"gotham_bold...*/]);
    kal_bundle::gotham_medium1de9568c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[2/*"gotham_medi...*/]);
    kal_bundle::HolidayCoverc6263eda_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[3/*"holidaycove...*/]);
    kal_bundle::HomeCoverc503a6cb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[4/*"homecover-7...*/]);
    kal_bundle::main706d2572_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[5/*"main-3187ad...*/]);
    kal_bundle::MoviesCoverc6a571e7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[6/*"moviescover...*/]);
    kal_bundle::SportsCover3cb7d52b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[7/*"sportscover...*/]);
    kal_bundle::TvCoverd1186788_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"kal"*/]))->GetFile(::STRINGS[8/*"tvcover-36a...*/]);
}

uClassType* kal_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("kal_bundle", options);
    type->fp_cctor_ = kal_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("kal");
    ::STRINGS[1] = uString::Const("gotham_bold-d2731498.otf");
    ::STRINGS[2] = uString::Const("gotham_medium-f8ddd988.otf");
    ::STRINGS[3] = uString::Const("holidaycover-f2c39706.png");
    ::STRINGS[4] = uString::Const("homecover-7e2b6bc7.png");
    ::STRINGS[5] = uString::Const("main-3187ad9e.js");
    ::STRINGS[6] = uString::Const("moviescover-31cc5ce3.png");
    ::STRINGS[7] = uString::Const("sportscover-a7dec027.png");
    ::STRINGS[8] = uString::Const("tvcover-36af8684.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::gotham_bold62f7b79c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::gotham_medium1de9568c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::HolidayCoverc6263eda_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::HomeCoverc503a6cb_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::main706d2572_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::MoviesCoverc6a571e7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::SportsCover3cb7d52b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::kal_bundle::TvCoverd1186788_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::gotham_bold62f7b79c_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::gotham_medium1de9568c_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::HolidayCoverc6263eda_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::HomeCoverc503a6cb_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::main706d2572_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::MoviesCoverc6a571e7_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::SportsCover3cb7d52b_;
uSStrong< ::g::Uno::IO::BundleFile*> kal_bundle::TvCoverd1186788_;
// }

} // ::g
