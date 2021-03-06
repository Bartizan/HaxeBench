// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxcpp_Main
#include <hxcpp/Main.h>
#endif
#ifndef INCLUDED_hxcpp_ScreenPressor
#include <hxcpp/ScreenPressor.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_09786b87c493a67f_35_main,"hxcpp.Main","main",0x60671053,"hxcpp.Main.main","hxcpp/Main.hx",35,0xf0e58ac9)
HX_LOCAL_STACK_FRAME(_hx_pos_09786b87c493a67f_30_boot,"hxcpp.Main","boot",0x592c5c4c,"hxcpp.Main.boot","hxcpp/Main.hx",30,0xf0e58ac9)
HX_LOCAL_STACK_FRAME(_hx_pos_09786b87c493a67f_31_boot,"hxcpp.Main","boot",0x592c5c4c,"hxcpp.Main.boot","hxcpp/Main.hx",31,0xf0e58ac9)

#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {

  class_<hxcpp::ScreenPressor>("ScreenPressor")
          .constructor<int, int>()
          .function("DecompressFrame", &hxcpp::ScreenPressor::DecompressI)
          ;

}

namespace hxcpp{

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1135376c;
}

int Main_obj::X;

int Main_obj::Y;

 ::hxcpp::ScreenPressor Main_obj::SP;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_09786b87c493a67f_35_main)
HXLINE(  36)		::hxcpp::Main_obj::SP =  ::hxcpp::ScreenPressor_obj::__alloc( HX_CTX ,(int)960,(int)540);
HXLINE(  37)		::haxe::Log_obj::trace(HX_("hello",12,33,c1,24),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),37,HX_("hxcpp.Main",94,7e,e6,c6),HX_("main",39,38,56,48)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"SP") ) { outValue = ( SP ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"SP") ) { SP=ioValue.Cast<  ::hxcpp::ScreenPressor >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Main_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Main_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsObject /*::hxcpp::ScreenPressor*/ ,(void *) &Main_obj::SP,HX_HCSTRING("SP","\x9d","\x48","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::X,"X");
	HX_MARK_MEMBER_NAME(Main_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Main_obj::SP,"SP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Main_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Main_obj::SP,"SP");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("SP","\x9d","\x48","\x00","\x00"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null())
};

void Main_obj::__register()
{
	hx::Object *dummy = new Main_obj;
	Main_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hxcpp.Main","\x94","\x7e","\xe6","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_09786b87c493a67f_30_boot)
HXDLIN(  30)		X = (int)960;
            	}
{
            	HX_STACKFRAME(&_hx_pos_09786b87c493a67f_31_boot)
HXDLIN(  31)		Y = (int)540;
            	}
}

} // end namespace hxcpp
