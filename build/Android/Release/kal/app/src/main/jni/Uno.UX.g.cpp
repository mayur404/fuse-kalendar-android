// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.NameTableEntry.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[8];
static uType* TYPES[26];

namespace g{
namespace Uno{
namespace UX{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno
// -----------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    ::TYPES[0] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[2] = uObject_typeof();
    type->SetFields(2,
        ::g::Uno::IO::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
    return type;
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :37
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, BundleFileSource_typeof());

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :46
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::IO::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// private void OnChanged(Uno.IO.BundleFile bf) :17
void BundleFileSource__OnChanged_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bf)
{
    __this->OnChanged(bf);
}

// public override sealed Uno.IO.Stream OpenRead() :22
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :27
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :32
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::IO::BundleFile* bundleFile)
{
    ctor_(uPtr(bundleFile)->SourcePath());
    BundleFile = bundleFile;
    uPtr(BundleFile)->add_Changed(uDelegate::New(::TYPES[1/*Uno.Action<Uno.IO.BundleFile>*/], (void*)BundleFileSource__OnChanged_fn, this));
}

// private void OnChanged(Uno.IO.BundleFile bf) [instance] :17
void BundleFileSource::OnChanged(::g::Uno::IO::BundleFile* bf)
{
    OnDataChanged();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::IO::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#7
// -------------------------------------------------------------------

// public delegate T Expression<T>() :325
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#2
// -------------------------------------------------------------------

// public abstract class Factory :114
// {
Factory_type* Factory_typeof()
{
    static uSStrong<Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Factory);
    options.TypeSize = sizeof(Factory_type);
    type = (Factory_type*)uClassType::New("Uno.UX.Factory", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Factory, _case), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Factory, _isDefaultCase), 0);
    return type;
}

// protected Factory(string caseMatch, bool isDefaultCase) :122
void Factory__ctor__fn(Factory* __this, uString* caseMatch, bool* isDefaultCase)
{
    __this->ctor_(caseMatch, *isDefaultCase);
}

// public string get_Case() :117
void Factory__get_Case_fn(Factory* __this, uString** __retval)
{
    *__retval = __this->Case();
}

// public bool get_IsDefaultCase() :120
void Factory__get_IsDefaultCase_fn(Factory* __this, bool* __retval)
{
    *__retval = __this->IsDefaultCase();
}

// protected Factory(string caseMatch, bool isDefaultCase) [instance] :122
void Factory::ctor_(uString* caseMatch, bool isDefaultCase)
{
    _case = caseMatch;
    _isDefaultCase = isDefaultCase;
}

// public string get_Case() [instance] :117
uString* Factory::Case()
{
    return _case;
}

// public bool get_IsDefaultCase() [instance] :120
bool Factory::IsDefaultCase()
{
    return _isDefaultCase;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#3
// -------------------------------------------------------------------

// public abstract class FileSource :140
// {
FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[5] = ::g::Uno::EventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
    return type;
}

// protected FileSource(string name) :153
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :144
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :144
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :146
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) :158
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :165
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :170
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :153
void FileSource::ctor_(uString* name)
{
    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :144
void FileSource::add_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[4/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :144
void FileSource::remove_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[4/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :146
void FileSource::OnDataChanged()
{
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) [static] :158
FileSource* FileSource::op_Implicit(::g::Uno::IO::BundleFile* bundleFile)
{
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#5
// -------------------------------------------------------------------

// public abstract interface ITemplate :226
// {
uInterfaceType* ITemplate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.ITemplate", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#6
// -------------------------------------------------------------------

// public sealed class NameTable :253
// {
// static NameTable() :253
static void NameTable__cctor__fn(uType* __type)
{
    NameTable::Empty_ = NameTable::New1(NULL, uArray::New(::TYPES[6/*Uno.UX.NameTableEntry[]*/], 0));
}

uType* NameTable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NameTable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTable", options);
    type->fp_cctor_ = NameTable__cctor__fn;
    ::TYPES[6] = ::g::Uno::UX::NameTableEntry_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Uno::UX::NameTable, _objects), 0,
        ::g::Uno::UX::NameTableEntry_typeof()->Array(), offsetof(::g::Uno::UX::NameTable, Entries), 0,
        NameTable_typeof(), offsetof(::g::Uno::UX::NameTable, ParentTable), 0,
        NameTable_typeof(), (uintptr_t)&::g::Uno::UX::NameTable::Empty_, uFieldFlagsStatic);
    return type;
}

// public NameTable(Uno.UX.NameTable parentTable, Uno.UX.NameTableEntry[] entries) :264
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries)
{
    __this->ctor_(parentTable, entries);
}

// public NameTable New(Uno.UX.NameTable parentTable, Uno.UX.NameTableEntry[] entries) :264
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval)
{
    *__retval = NameTable::New1(parentTable, entries);
}

// public Uno.Collections.IList<object> get_Objects() :260
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Objects();
}

uSStrong<NameTable*> NameTable::Empty_;

// public NameTable(Uno.UX.NameTable parentTable, Uno.UX.NameTableEntry[] entries) [instance] :264
void NameTable::ctor_(NameTable* parentTable, uArray* entries)
{
    _objects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<object>*/]));
    ParentTable = parentTable;
    Entries = entries;
}

// public Uno.Collections.IList<object> get_Objects() [instance] :260
uObject* NameTable::Objects()
{
    return (uObject*)_objects;
}

// public NameTable New(Uno.UX.NameTable parentTable, Uno.UX.NameTableEntry[] entries) [static] :264
NameTable* NameTable::New1(NameTable* parentTable, uArray* entries)
{
    NameTable* obj1 = (NameTable*)uNew(NameTable_typeof());
    obj1->ctor_(parentTable, entries);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#6
// -------------------------------------------------------------------

// public sealed class NameTableEntry :239
// {
uType* NameTableEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NameTableEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTableEntry", options);
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Uno::UX::NameTableEntry, Metadata), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::NameTableEntry, Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::NameTableEntry, TypeName), 0);
    return type;
}

// public NameTableEntry(string name, string typeName, object[] metadata) :245
void NameTableEntry__ctor__fn(NameTableEntry* __this, uString* name, uString* typeName, uArray* metadata)
{
    __this->ctor_(name, typeName, metadata);
}

// public NameTableEntry New(string name, string typeName, object[] metadata) :245
void NameTableEntry__New1_fn(uString* name, uString* typeName, uArray* metadata, NameTableEntry** __retval)
{
    *__retval = NameTableEntry::New1(name, typeName, metadata);
}

// public NameTableEntry(string name, string typeName, object[] metadata) [instance] :245
void NameTableEntry::ctor_(uString* name, uString* typeName, uArray* metadata)
{
    Name = name;
    TypeName = typeName;
    Metadata = metadata;
}

// public NameTableEntry New(string name, string typeName, object[] metadata) [static] :245
NameTableEntry* NameTableEntry::New1(uString* name, uString* typeName, uArray* metadata)
{
    NameTableEntry* obj1 = (NameTableEntry*)uNew(NameTableEntry_typeof());
    obj1->ctor_(name, typeName, metadata);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#7
// -------------------------------------------------------------------

// public abstract class Property<T> :320
// {
Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_OnAddListener = Property__OnAddListener_fn;
    type->fp_OnGet = Property__OnGet_fn;
    type->fp_OnRemoveListener = Property__OnRemoveListener_fn;
    type->fp_OnSet = Property__OnSet_fn;
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[9/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Property, _hasRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// protected generated Property() :320
void Property__ctor__fn(Property* __this)
{
    __this->ctor_();
}

// public T Get() :367
void Property__Get_fn(Property* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    __this->RetainRestState();
    return __retval.Store((__this->OnGet_ex(&ret1), ret1)), void();
}

// public T GetRestState() :348
void Property__GetRestState_fn(Property* __this, uTRef __retval)
{
    __this->RetainRestState();
    return __retval.Store(__this->_restState()), void();
}

// protected virtual void OnAddListener(Uno.UX.ValueChangedHandler<T> listener) :383
void Property__OnAddListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual T OnGet() :381
void Property__OnGet_fn(Property* __this, uTRef __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// protected virtual void OnRemoveListener(Uno.UX.ValueChangedHandler<T> listener) :384
void Property__OnRemoveListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual void OnSet(T value, object origin) :380
void Property__OnSet_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    U_THROW(::g::Uno::Exception::New1());
}

// protected void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) :324
void Property__OnValueChanged_fn(Property* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void RetainRestState() :336
void Property__RetainRestState_fn(Property* __this)
{
    __this->RetainRestState();
}

// public void Set(T value, object origin) :354
void Property__Set_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->RetainRestState();
    __this->OnSet_ex(value, origin);
}

// public void SetRestState(T value, object origin) :360
void Property__SetRestState_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->OnSet_ex(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :375
void Property__add_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :376
void Property__remove_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated Property() [instance] :320
void Property::ctor_()
{
}

// protected void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) [instance] :324
void Property::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->GetBase(Property_typeof())->T(0),
        __type->GetBase(Property_typeof())->Precalced(0/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->SetsNewRestState())
    {
        _restState() = (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2);
        _hasRestState = true;
    }
}

// private void RetainRestState() [instance] :336
void Property::RetainRestState()
{
    uType* __types[] = {
        __type->GetBase(Property_typeof())->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (!_hasRestState)
    {
        v = (OnGet_ex(&ret3), ret3);
        _restState() = v;
        _hasRestState = true;
    }
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :375
void Property::add_ValueChanged(uDelegate* value)
{
    OnAddListener(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :376
void Property::remove_ValueChanged(uDelegate* value)
{
    OnRemoveListener(value);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#8
// -------------------------------------------------------------------

// public sealed class Resource :395
// {
uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[12] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[15] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
    return type;
}

// public Resource(string key, object value) :401
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :411
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :450
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public generated string get_Key() :397
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :397
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :401
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) :417
void Resource__RemoveGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::RemoveGlobalKeyListener(listener);
}

// public static void SetGlobalKey(object obj, string key) :423
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :462
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :398
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :398
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :401
void Resource::ctor_(uString* key, uObject* value)
{
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :397
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :397
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :398
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :398
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :411
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    if (Resource::_listeners() == NULL)
        Resource::_listeners() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Uno.Action<string>>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
}

// public static string GetGlobalKey(object obj) [static] :450
uString* Resource::GetGlobalKey(uObject* obj)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret4;
    bool ret5;

    if (Resource::_globals() == NULL)
        return NULL;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret4), ret4); enum2.MoveNext(::TYPES[12/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum2.Current(::TYPES[12/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[13/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret5), ret5))
            return list.Key(::TYPES[13/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
    }

    return NULL;
}

// public Resource New(string key, object value) [static] :401
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj3 = (Resource*)uNew(Resource_typeof());
    obj3->ctor_(key, value);
    return obj3;
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) [static] :417
void Resource::RemoveGlobalKeyListener(uDelegate* listener)
{
    bool ret6;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Resource::_listeners()), listener, &ret6);
}

// public static void SetGlobalKey(object obj, string key) [static] :423
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    ::g::Uno::Collections::List* ret11;
    uDelegate* ret12;

    if (Resource::_globals() == NULL)
        Resource::_globals() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(Resource::_globals())->Values()), &ret7), ret7); enum1.MoveNext(::TYPES[15/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[15/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), obj, &ret8), ret8))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), obj, &ret9);
            break;
        }
    }

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Resource::_globals()), key, &ret10), ret10))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<object>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Resource::_globals()), key, &ret11), ret11)), obj);

    if (Resource::_listeners() != NULL)

        for (int i = 0; i < uPtr(Resource::_listeners())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Resource::_listeners()), uCRef<int>(i), &ret12), ret12))->InvokeVoid(key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :462
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    bool ret13;
    uObject* ret14;
    bool ret15;

    if (Resource::_globals() != NULL)
    {
        ::g::Uno::Collections::List* list;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret13), ret13))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret14), ret14);

                if ((uPtr(acceptor)->Invoke(&ret15, 1, v), ret15))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#9
// -------------------------------------------------------------------

// public struct Size :503
// {
uStructType* Size_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size__ToString_fn;
    ::STRINGS[0] = uString::Const(" (unspecified unit)");
    ::STRINGS[1] = uString::Const("pt");
    ::STRINGS[2] = uString::Const("px");
    ::STRINGS[3] = uString::Const("%");
    ::STRINGS[4] = uString::Const(" (");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[18] = ::g::Uno::Int_typeof();
    ::TYPES[19] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::UX::Size, Value), 0,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::Size, Unit), 0);
    return type;
}

// public Size(float value, Uno.UX.Unit unit) :508
void Size__ctor__fn(Size* __this, float* value, int* unit)
{
    __this->ctor_(*value, *unit);
}

// private static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) :529
void Size__Combine_fn(int* a, int* b, int* __retval)
{
    *__retval = Size::Combine(*a, *b);
}

// public Uno.UX.Unit DetermineUnit() :537
void Size__DetermineUnit_fn(Size* __this, int* __retval)
{
    *__retval = __this->DetermineUnit();
}

// public override sealed bool Equals(object obj) :602
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, Size_typeof()))
    {
        Size s = uUnbox<Size>(Size_typeof(), obj);

        if (s.Unit != __this->Unit)
            return *__retval = false, void();

        if (s.Value != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else if (uIs(obj, ::TYPES[19/*float*/]))
    {
        if ((__this->Unit != 1) && (__this->Unit != 0))
            return *__retval = false, void();

        float f = uUnbox<float>(::TYPES[19/*float*/], obj);

        if (f != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :621
void Size__GetHashCode_fn(Size* __this, uType* __type, int* __retval)
{
    float ind7;
    return *__retval = ::g::Uno::Float::GetHashCode((ind7 = __this->Value, ind7), ::TYPES[19/*float*/]), void();
}

// public Size New(float value, Uno.UX.Unit unit) :508
void Size__New1_fn(float* value, int* unit, Size* __retval)
{
    *__retval = Size__New1(*value, *unit);
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) :543
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Addition(*a, *b);
}

// public static explicit operator float(Uno.UX.Size s) :524
void Size__op_Explicit_fn(Size* s, float* __retval)
{
    *__retval = Size__op_Explicit(*s);
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) :514
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit(*unspecifiedUnits);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) :519
void Size__op_Implicit1_fn(int* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit1(*unspecifiedUnits);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) :568
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size a, float b) :553
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) :548
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Subtraction(*a, *b);
}

// public static Uno.UX.Size Percent(float value) :585
void Size__Percent_fn(float* value, Size* __retval)
{
    *__retval = Size__Percent(*value);
}

// public static Uno.UX.Size Pixels(float value) :580
void Size__Pixels_fn(float* value, Size* __retval)
{
    *__retval = Size__Pixels(*value);
}

// public static Uno.UX.Size Points(float value) :575
void Size__Points_fn(float* value, Size* __retval)
{
    *__retval = Size__Points(*value);
}

// public override sealed string ToString() :590
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval)
{
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    int ind6;

    switch (__this->Unit)
    {
        case 0:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind1 = __this->Value, ind1), ::TYPES[19/*float*/]), ::STRINGS[0/*" (unspecifi...*/]), void();
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind2 = __this->Value, ind2), ::TYPES[19/*float*/]), ::STRINGS[1/*"pt"*/]), void();
        case 2:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind3 = __this->Value, ind3), ::TYPES[19/*float*/]), ::STRINGS[2/*"px"*/]), void();
        case 3:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind4 = __this->Value, ind4), ::TYPES[19/*float*/]), ::STRINGS[3/*"%"*/]), void();
        default:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind5 = __this->Value, ind5), ::TYPES[19/*float*/]), ::STRINGS[4/*" ("*/]), ::g::Uno::Int::ToString((ind6 = __this->Unit, ind6), ::TYPES[18/*int*/])), ::STRINGS[5/*")"*/]), void();
    }
}

// public static Uno.UX.Size get_Unspecified() :573
void Size__get_Unspecified_fn(Size* __retval)
{
    *__retval = Size__Unspecified();
}

// public Size(float value, Uno.UX.Unit unit) [instance] :508
void Size::ctor_(float value, int unit)
{
    Value = value;
    Unit = unit;
}

// public Uno.UX.Unit DetermineUnit() [instance] :537
int Size::DetermineUnit()
{
    if (Unit == 0)
        return 1;
    else
        return Unit;
}

// private static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) [static] :529
int Size::Combine(int a, int b)
{
    if (a == b)
        return a;

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    return 0;
}

// public Size New(float value, Uno.UX.Unit unit) [static] :508
Size Size__New1(float value, int unit)
{
    Size obj8;
    obj8.ctor_(value, unit);
    return obj8;
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) [static] :543
Size Size__op_Addition(Size a, Size b)
{
    return Size__New1(a.Value + b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static explicit operator float(Uno.UX.Size s) [static] :524
float Size__op_Explicit(Size s)
{
    return s.Value;
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) [static] :514
Size Size__op_Implicit(float unspecifiedUnits)
{
    return Size__New1(unspecifiedUnits, 0);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) [static] :519
Size Size__op_Implicit1(int unspecifiedUnits)
{
    return Size__New1((float)unspecifiedUnits, 0);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) [static] :568
bool Size__op_Inequality(Size a, Size b)
{
    return (a.Value != b.Value) || (a.Unit != b.Unit);
}

// public static operator *(Uno.UX.Size a, float b) [static] :553
Size Size__op_Multiply(Size a, float b)
{
    return Size__New1(a.Value * b, a.Unit);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) [static] :548
Size Size__op_Subtraction(Size a, Size b)
{
    return Size__New1(a.Value - b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static Uno.UX.Size Percent(float value) [static] :585
Size Size__Percent(float value)
{
    return Size__New1(value, 3);
}

// public static Uno.UX.Size Pixels(float value) [static] :580
Size Size__Pixels(float value)
{
    return Size__New1(value, 2);
}

// public static Uno.UX.Size Points(float value) [static] :575
Size Size__Points(float value)
{
    return Size__New1(value, 1);
}

// public static Uno.UX.Size get_Unspecified() [static] :573
Size Size__Unspecified()
{
    return Size__New1(0.0f, 0);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#9
// -------------------------------------------------------------------

// public struct Size2 :627
// {
uStructType* Size2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size2", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size2__ToString_fn;
    ::STRINGS[6] = uString::Const(", ");
    ::TYPES[20] = ::g::Uno::UX::Size_typeof();
    ::TYPES[21] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Uno::UX::Size2, X), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Uno::UX::Size2, Y), 0);
    return type;
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) :632
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y)
{
    __this->ctor_(*x, *y);
}

// public override sealed bool Equals(object obj) :710
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, Size2_typeof()))
    {
        Size2 s = uUnbox<Size2>(Size2_typeof(), obj);

        if (::g::Uno::UX::Size__op_Inequality(s.X, __this->X))
            return *__retval = false, void();

        if (::g::Uno::UX::Size__op_Inequality(s.Y, __this->Y))
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :722
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int* __retval)
{
    ::g::Uno::UX::Size ind3;
    ::g::Uno::UX::Size ind4;
    return *__retval = (ind3 = __this->X, (&ind3))->GetHashCode(::TYPES[20/*Uno.UX.Size*/]) ^ (ind4 = __this->Y, (&ind4))->GetHashCode(::TYPES[20/*Uno.UX.Size*/]), void();
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) :632
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval)
{
    *__retval = Size2__New1(*x, *y);
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) :655
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Addition(*a, *b);
}

// public static explicit operator float2(Uno.UX.Size2 v) :648
void Size2__op_Explicit_fn(Size2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Size2__op_Explicit(*v);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) :638
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval)
{
    *__retval = Size2__op_Implicit1(*unspecifiedUnitsVector);
}

// public static operator *(Uno.UX.Size2 a, float b) :665
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) :660
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :705
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval)
{
    ::g::Uno::UX::Size ind1;
    ::g::Uno::UX::Size ind2;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind1 = __this->X, (&ind1))->ToString(::TYPES[20/*Uno.UX.Size*/]), ::STRINGS[6/*", "*/]), (ind2 = __this->Y, (&ind2))->ToString(::TYPES[20/*Uno.UX.Size*/])), void();
}

// public static Uno.UX.Size2 get_Unspecified() :687
void Size2__get_Unspecified_fn(Size2* __retval)
{
    *__retval = Size2__Unspecified();
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) [instance] :632
void Size2::ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    X = x;
    Y = y;
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) [static] :632
Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    Size2 obj5;
    obj5.ctor_(x, y);
    return obj5;
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :655
Size2 Size2__op_Addition(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Addition(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static explicit operator float2(Uno.UX.Size2 v) [static] :648
::g::Uno::Float2 Size2__op_Explicit(Size2 v)
{
    ::g::Uno::UX::Size x = v.X;
    ::g::Uno::UX::Size y = v.Y;
    return ::g::Uno::Float2__New2(x.Value, y.Value);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) [static] :638
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector)
{
    return Size2__New1(::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.X), ::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.Y));
}

// public static operator *(Uno.UX.Size2 a, float b) [static] :665
Size2 Size2__op_Multiply(Size2 a, float b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Multiply(a.X, b), ::g::Uno::UX::Size__op_Multiply(a.Y, b));
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :660
Size2 Size2__op_Subtraction(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Subtraction(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static Uno.UX.Size2 get_Unspecified() [static] :687
Size2 Size2__Unspecified()
{
    return Size2__New1(::g::Uno::UX::Size__Unspecified(), ::g::Uno::UX::Size__Unspecified());
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#3
// -------------------------------------------------------------------

// internal static class StreamExtensions :176
// {
uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    ::STRINGS[7] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[22] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[23] = ::g::Uno::IDisposable_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    ::TYPES[24] = ::g::Uno::IO::MemoryStream_typeof();
    ::TYPES[25] = ::g::Uno::Long_typeof();
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :178
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :196
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :178
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[23/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[7/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :196
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[22/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#10
// --------------------------------------------------------------------

// public abstract class Template<T> :734
// {
Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template`1", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))Template__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(Template_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _affectSubtypes), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _cascade), 0);
    return type;
}

// protected generated Template() :734
void Template__ctor__fn(Template* __this)
{
    __this->ctor_();
}

// public bool get_AffectSubtypes() :749
void Template__get_AffectSubtypes_fn(Template* __this, bool* __retval)
{
    *__retval = __this->AffectSubtypes();
}

// public void set_AffectSubtypes(bool value) :750
void Template__set_AffectSubtypes_fn(Template* __this, bool* value)
{
    __this->AffectSubtypes(*value);
}

// public bool Apply(object obj) :756
void Template__Apply_fn(Template* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public bool get_Cascade() :739
void Template__get_Cascade_fn(Template* __this, bool* __retval)
{
    *__retval = __this->Cascade();
}

// public void set_Cascade(bool value) :740
void Template__set_Cascade_fn(Template* __this, bool* value)
{
    __this->Cascade(*value);
}

// protected generated Template() [instance] :734
void Template::ctor_()
{
    _cascade = true;
}

// public bool get_AffectSubtypes() [instance] :749
bool Template::AffectSubtypes()
{
    return _affectSubtypes;
}

// public void set_AffectSubtypes(bool value) [instance] :750
void Template::AffectSubtypes(bool value)
{
    _affectSubtypes = value;
}

// public bool Apply(object obj) [instance] :756
bool Template::Apply(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(Template_typeof())->T(0),
    };

    if (_affectSubtypes)
    {
        if (uIs(obj, __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }
    else
    {
        if (::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }

    return true;
}

// public bool get_Cascade() [instance] :739
bool Template::Cascade()
{
    return _cascade;
}

// public void set_Cascade(bool value) [instance] :740
void Template::Cascade(bool value)
{
    _cascade = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#9
// -------------------------------------------------------------------

// public enum Unit :495
uEnumType* Unit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.UX.Unit", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Unspecified", 0LL,
        "Points", 1LL,
        "Pixels", 2LL,
        "Percent", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#7
// -------------------------------------------------------------------

// public class ValueChangedArgs<T> :284
// {
uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::UX::ValueChangedArgs, _Origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::ValueChangedArgs, _SetsNewRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public ValueChangedArgs(T value, object origin) :291
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
    __this->Origin(origin);
}

// public ValueChangedArgs New(T value, object origin) :291
void ValueChangedArgs__New2_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval)
{
    uType* __types[] = {
        __type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value, origin);
    return *__retval = obj1, void();
}

// public generated object get_Origin() :287
void ValueChangedArgs__get_Origin_fn(ValueChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(object value) :287
void ValueChangedArgs__set_Origin_fn(ValueChangedArgs* __this, uObject* value)
{
    __this->Origin(value);
}

// internal generated bool get_SetsNewRestState() :289
void ValueChangedArgs__get_SetsNewRestState_fn(ValueChangedArgs* __this, bool* __retval)
{
    *__retval = __this->SetsNewRestState();
}

// private generated void set_SetsNewRestState(bool value) :289
void ValueChangedArgs__set_SetsNewRestState_fn(ValueChangedArgs* __this, bool* value)
{
    __this->SetsNewRestState(*value);
}

// public generated T get_Value() :286
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :286
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->_Value() = value;
}

// public generated object get_Origin() [instance] :287
uObject* ValueChangedArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :287
void ValueChangedArgs::Origin(uObject* value)
{
    _Origin = value;
}

// internal generated bool get_SetsNewRestState() [instance] :289
bool ValueChangedArgs::SetsNewRestState()
{
    return _SetsNewRestState;
}

// private generated void set_SetsNewRestState(bool value) [instance] :289
void ValueChangedArgs::SetsNewRestState(bool value)
{
    _SetsNewRestState = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/UX/$.uno#7
// -------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :311
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0)));
    return type;
}

}}} // ::g::Uno::UX
