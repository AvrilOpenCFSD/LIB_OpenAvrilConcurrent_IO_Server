#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
	class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API CLIDWriteEnableForThreadsAtSERVERINPUTACTION 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtSERVERINPUTACTION();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
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
		// get.
		// set.
		static void set_ptr_Framework(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable);
	};
}