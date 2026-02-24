#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_ptr_Framework();
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
		static void set_ptr_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable);
	};
}