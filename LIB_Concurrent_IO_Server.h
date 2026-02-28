#ifdef LIBSERVERIOCONCURRNECY_EXPORTS
#define LIBSERVERIOCONCURRNECY_API __declspec(dllexport)
#else
#define LIBSERVERIOCONCURRNECY_API __declspec(dllimport)
#endif

namespace OpenAvrilConcurrency
{
	class LIBSERVERIOCONCURRNECY_API CLIBConcurrentServerIO 
	{
	public:
// constructor.
		CLIBConcurrentServerIO(void);

// destructor.

// public.
	// dynamic.
		static void* generate_Program();
		static void initalise_Program(class OpenAvrilConcurrency::Framework_Server* obj);
		static void flip_Input_DoubleBuffer(class OpenAvrilConcurrency::Framework_Server* obj);
		static bool get_flag_isStackLoaded_Server_InputAction(class OpenAvrilConcurrency::Framework_Server* obj);
		static bool get_flag_isLoaded_Stack_OutputSend(class OpenAvrilConcurrency::Framework_Server* obj);
		static bool get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(class OpenAvrilConcurrency::Framework_Server* obj);
		static void* get_program_WriteEnableStack_ServerInputAction(class OpenAvrilConcurrency::Framework_Server* obj);
		static void* get_program_WriteEnableStack_ServerOutputRecieve(class OpenAvrilConcurrency::Framework_Server* obj);
		static void pop_From_Stack_Of_Output(class OpenAvrilConcurrency::Framework_Server* obj);
		static void push_To_Stack_Of_Input(class OpenAvrilConcurrency::Framework_Server* obj);
		static void select_set_Intput_Subset(class OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId);
		// Praise Event Id
		static uint8_t get_PraiseEventId(class OpenAvrilConcurrency::Framework_Server* obj);
		static void set_PraiseEventId(class OpenAvrilConcurrency::Framework_Server* obj, uint8_t value);
	// TODO: add your methods here.
		// Praise 0 Data

		// Praise 1 Data

		// Praise 0 Data
		
		// get.
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
		static class OpenAvrilConcurrency::Framework_Server* stat_get_ptr_Framework_Server();
		// set.
		static void stat_set_ptr_Framework_Server(class Framework_Server* newClass);
	// pointers.
		// classes.
		// registers.
	};
}