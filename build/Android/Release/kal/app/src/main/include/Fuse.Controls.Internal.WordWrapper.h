// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Internal/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapper;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapperWord;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WrappedLine;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal static class WordWrapper :363
// {
uClassType* WordWrapper_typeof();
void WordWrapper__GetWords_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text, ::g::Uno::Collections::List** __retval);
void WordWrapper__SplitWord_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex, ::g::Fuse::Controls::Internal::WordWrapperWord** __retval);
void WordWrapper__WrapLine_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text, uArray** __retval);

struct WordWrapper : uObject
{
    static ::g::Uno::Collections::List* GetWords(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text);
    static ::g::Fuse::Controls::Internal::WordWrapperWord* SplitWord(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex);
    static uArray* WrapLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text);
};
// }

}}}} // ::g::Fuse::Controls::Internal
