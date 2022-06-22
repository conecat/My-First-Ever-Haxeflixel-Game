// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_LevelState
#include <LevelState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2728af50501d309e_7_new,"LevelState","new",0x4e2a817f,"LevelState.new","LevelState.hx",7,0x207e72d1)
HX_LOCAL_STACK_FRAME(_hx_pos_2728af50501d309e_9_createLevel,"LevelState","createLevel",0x2489b507,"LevelState.createLevel","LevelState.hx",9,0x207e72d1)

void LevelState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_2728af50501d309e_7_new)
HXDLIN(   7)		super::__construct(MaxSize);
            	}

Dynamic LevelState_obj::__CreateEmpty() { return new LevelState_obj; }

void *LevelState_obj::_hx_vtable = 0;

Dynamic LevelState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LevelState_obj > _hx_result = new LevelState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LevelState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x721978cd) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x721978cd;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void LevelState_obj::createLevel(){
            	HX_GC_STACKFRAME(&_hx_pos_2728af50501d309e_9_createLevel)
HXLINE(  10)		 ::flixel::addons::editors::tiled::TiledMap map =  ::flixel::addons::editors::tiled::TiledMap_obj::__alloc( HX_CTX ,HX_("assets/data/levelMain.tmx",35,7b,0e,09),null());
HXLINE(  11)		 ::flixel::addons::editors::tiled::TiledObjectLayer groundLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("ground",87,22,28,1c))) );
HXLINE(  12)		 ::flixel::group::FlxTypedGroup groundGrp =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  14)		{
HXLINE(  14)			int _g = 0;
HXDLIN(  14)			::Array< ::Dynamic> _g1 = groundLayer->objects;
HXDLIN(  14)			while((_g < _g1->length)){
HXLINE(  14)				 ::flixel::addons::editors::tiled::TiledObject ground = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN(  14)				_g = (_g + 1);
HXLINE(  15)				 ::flixel::FlxSprite groundSprt =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,ground->x,ground->y,null());
HXLINE(  16)				groundSprt->loadGraphic(HX_("assets/images/ground.png",ad,4a,92,f9),null(),null(),null(),null(),null());
HXLINE(  17)				groundGrp->add(groundSprt).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelState_obj,createLevel,(void))


::hx::ObjectPtr< LevelState_obj > LevelState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< LevelState_obj > __this = new LevelState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< LevelState_obj > LevelState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	LevelState_obj *__this = (LevelState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LevelState_obj), true, "LevelState"));
	*(void **)__this = LevelState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

LevelState_obj::LevelState_obj()
{
}

bool LevelState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createLevel") ) { outValue = createLevel_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LevelState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LevelState_obj_sStaticStorageInfo = 0;
#endif

::hx::Class LevelState_obj::__mClass;

static ::String LevelState_obj_sStaticFields[] = {
	HX_("createLevel",e8,4c,de,9b),
	::String(null())
};

void LevelState_obj::__register()
{
	LevelState_obj _hx_dummy;
	LevelState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LevelState",0d,56,56,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LevelState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LevelState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LevelState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LevelState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
