
#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilConcurrencyLIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE {
	public:
		Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);

	private:
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_Framework_Of_WriteEnable();
		static void set_Framework_Of_WriteEnable(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable);
	};
}