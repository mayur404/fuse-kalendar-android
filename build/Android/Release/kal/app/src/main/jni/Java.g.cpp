// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Java.Object.h>

namespace g{
namespace Java{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Compiler/ExportTargetInterop/Foreign/Android/$.uno#2
// -------------------------------------------------------------------------------------------------------------

// public abstract extern class Object :243
// {
uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Java.Object", options);
    return type;
}

// protected generated Object() :243
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// protected generated Object() [instance] :243
void Object::ctor_()
{
}
// }

}} // ::g::Java
