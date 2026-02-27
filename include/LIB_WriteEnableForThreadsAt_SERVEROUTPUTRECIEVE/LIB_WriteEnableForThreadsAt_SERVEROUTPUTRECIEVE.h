#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
	{
	public:
		// constructor.
		CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE();

		// destructor.

		// public.
			// dynamic.
		//static void* generate_Program();//ToDO: uncomment for C#.
		static OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* generate_Program();//ToDO: uncomment for C++.
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
		static void stat_create_Framework();
		// get.
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* newPtr);
		// pointers.
			// classes.
			// registers.
	};
}