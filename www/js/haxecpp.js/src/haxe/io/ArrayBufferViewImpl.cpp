// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b4b8202bc3751cd_30_new,"haxe.io.ArrayBufferViewImpl","new",0x853f5310,"haxe.io.ArrayBufferViewImpl.new","/usr/share/haxe/std/haxe/io/ArrayBufferView.hx",30,0x41f0467b)
namespace haxe{
namespace io{

void ArrayBufferViewImpl_obj::__construct( ::haxe::io::Bytes bytes,int pos,int length){
            	HX_STACKFRAME(&_hx_pos_5b4b8202bc3751cd_30_new)
HXLINE(  31)		this->bytes = bytes;
HXLINE(  32)		this->byteOffset = pos;
HXLINE(  33)		this->byteLength = length;
            	}

Dynamic ArrayBufferViewImpl_obj::__CreateEmpty() { return new ArrayBufferViewImpl_obj; }

void *ArrayBufferViewImpl_obj::_hx_vtable = 0;

Dynamic ArrayBufferViewImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayBufferViewImpl_obj > _hx_result = new ArrayBufferViewImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ArrayBufferViewImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x140c5e8a;
}


hx::ObjectPtr< ArrayBufferViewImpl_obj > ArrayBufferViewImpl_obj::__new( ::haxe::io::Bytes bytes,int pos,int length) {
	hx::ObjectPtr< ArrayBufferViewImpl_obj > __this = new ArrayBufferViewImpl_obj();
	__this->__construct(bytes,pos,length);
	return __this;
}

hx::ObjectPtr< ArrayBufferViewImpl_obj > ArrayBufferViewImpl_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes,int pos,int length) {
	ArrayBufferViewImpl_obj *__this = (ArrayBufferViewImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewImpl_obj), true, "haxe.io.ArrayBufferViewImpl"));
	*(void **)__this = ArrayBufferViewImpl_obj::_hx_vtable;
	__this->__construct(bytes,pos,length);
	return __this;
}

ArrayBufferViewImpl_obj::ArrayBufferViewImpl_obj()
{
}

void ArrayBufferViewImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferViewImpl);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_END_CLASS();
}

void ArrayBufferViewImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
}

hx::Val ArrayBufferViewImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return hx::Val( byteOffset ); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return hx::Val( byteLength ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ArrayBufferViewImpl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferViewImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayBufferViewImpl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ArrayBufferViewImpl_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ArrayBufferViewImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayBufferViewImpl_obj_sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	::String(null()) };

static void ArrayBufferViewImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferViewImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayBufferViewImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferViewImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferViewImpl_obj::__mClass;

void ArrayBufferViewImpl_obj::__register()
{
	hx::Object *dummy = new ArrayBufferViewImpl_obj;
	ArrayBufferViewImpl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.ArrayBufferViewImpl","\x1e","\xcb","\xbc","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayBufferViewImpl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayBufferViewImpl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferViewImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayBufferViewImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferViewImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferViewImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
