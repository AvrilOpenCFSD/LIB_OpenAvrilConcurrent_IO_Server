#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif

namespace OpenAvrilConcurrencyLIB_WriteEnableForThreadsAt_SERVERINPUTACTION
{
	class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API Library_WriteEnableForThreadsAt_SERVERINPUTACTION {
	public:
		Library_WriteEnableForThreadsAt_SERVERINPUTACTION();
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);

	private:
		static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_Framework_Of_WriteEnable();
		static void set_Framework_Of_WriteEnable(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable);
	};
}