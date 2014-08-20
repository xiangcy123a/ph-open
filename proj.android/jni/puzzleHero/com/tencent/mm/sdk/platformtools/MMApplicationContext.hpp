/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.MMApplicationContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class MMApplicationContext;
	class MMApplicationContext
		: public object<MMApplicationContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit MMApplicationContext(jobject jobj)
		: object<MMApplicationContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void setContext(local_ref< android::content::Context >  const&);
		static local_ref< android::content::Context > getContext();
		static local_ref< java::lang::String > getPackageName();
		static local_ref< java::lang::String > getDefaultPreferencePath();

	}; //class MMApplicationContext

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::platformtools::MMApplicationContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void com::tencent::mm::sdk::platformtools::MMApplicationContext::setContext(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0);
}

local_ref< android::content::Context > com::tencent::mm::sdk::platformtools::MMApplicationContext::getContext()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::Context >
	>();
}

local_ref< java::lang::String > com::tencent::mm::sdk::platformtools::MMApplicationContext::getPackageName()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>();
}

local_ref< java::lang::String > com::tencent::mm::sdk::platformtools::MMApplicationContext::getDefaultPreferencePath()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::platformtools::MMApplicationContext::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>();
}




J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::MMApplicationContext,"com/tencent/mm/sdk/platformtools/MMApplicationContext")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,1,"setContext","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,2,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,3,"getPackageName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,4,"getDefaultPreferencePath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MMApplicationContext,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MMApplicationContext,0,"R","Landroid/content/Context;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MMApplicationContext,1,"aE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MMAPPLICATIONCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION