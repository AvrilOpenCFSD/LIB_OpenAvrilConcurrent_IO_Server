// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LIBSERVERIOCONCURRNECY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LIBSERVERIOCONCURRNECY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LIBSERVERIOCONCURRNECY_EXPORTS
#define LIBSERVERIOCONCURRNECY_API __declspec(dllexport)
#else
#define LIBSERVERIOCONCURRNECY_API __declspec(dllimport)
#endif

namespace OpenAvril
{
	// This class is exported from the dll
	class LIBSERVERIOCONCURRNECY_API CLIBServerIOConcurrnecy {
	public:
		CLIBServerIOConcurrnecy(void);
		static void* initialise_Server_Concurrency();
		static void initalise_Programs(class OpenAvril::Framework_Server* obj);
		static void flip_Input_DoubleBuffer(class OpenAvril::Framework_Server* obj);
		static bool get_flag_isStackLoaded_Server_InputAction(class OpenAvril::Framework_Server* obj);
		static bool get_flag_isLoaded_Stack_OutputSend(class OpenAvril::Framework_Server* obj);
		static bool get_flag_IsInitialised_OpenAvrilConcurrency(class OpenAvril::Framework_Server* obj);
		static void* get_program_WriteEnableStack_ServerInputAction();
		static void* get_program_WriteEnableStack_ServerOutputRecieve();
		static void pop_From_Stack_Of_Output(class OpenAvril::Framework_Server* obj);
		static void push_To_Stack_Of_Input(class OpenAvril::Framework_Server* obj);
		static void select_set_Intput_Subset(class OpenAvril::Framework_Server* obj, uint8_t praiseEventId);
	// Praise Event Id
		static uint8_t get_PraiseEventId(class OpenAvril::Framework_Server* obj);
		static void set_PraiseEventId(class OpenAvril::Framework_Server* obj, uint8_t value);
// TODO: add your methods here.
	// Praise 0 Data
		static bool get_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj);
		static void set_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj, bool value);
		static bool get_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj);
		static void set_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj, bool value);
	// Praise 1 Data

	// Praise 0 Data

	};
}