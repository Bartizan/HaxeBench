// Generated by Haxe 3.4.4
#ifndef INCLUDED_hxcpp_Main
#define INCLUDED_hxcpp_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxcpp,Main)
HX_DECLARE_CLASS1(hxcpp,ScreenPressor)

namespace hxcpp{


class HXCPP_CLASS_ATTRIBUTES Main_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x1135376c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hxcpp.Main"); }

		hx::ObjectPtr< Main_obj > __new() {
			hx::ObjectPtr< Main_obj > __this = new Main_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Main_obj > __alloc(hx::Ctx *_hx_ctx) {
			Main_obj *__this = (Main_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), false, "hxcpp.Main"));
			*(void **)__this = Main_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		static  ::hxcpp::ScreenPressor ScreenPressor;
		static void main();
		static ::Dynamic main_dyn();

};

} // end namespace hxcpp

#endif /* INCLUDED_hxcpp_Main */ 
