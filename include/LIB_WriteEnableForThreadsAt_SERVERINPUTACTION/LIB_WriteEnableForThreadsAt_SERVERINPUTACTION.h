#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
	class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API CLIDWriteEnableForThreadsAtSERVERINPUTACTION
	{
	public:
		// constructor.
		CLIDWriteEnableForThreadsAtSERVERINPUTACTION();

		// destructor.

		// public.
			// dynamic.
		//static void* generate_Program();//ToDO: uncomment for C#.
		static OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* generate_Program();//ToDO: uncomment for C++.
		static void write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_ptr_Framework();
		// set.
	// static.
		// get.
		// set.

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
		static void stat_create_Framework();
		// get.
		static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* newPtr);
		// pointers.
			// classes.
			// registers.
	};
}