#pragma once

namespace OpenAvrilConcurrency
{
    class Data
    {
    public:
// constructor.
        Data();

// destructor.
        virtual ~Data();

// public.
    // dynamic.
        void initialise_Control();
        void initialise_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newINITIALISED_Input);
        void initialise_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newINITIALISED_Output);
        void initialise_Item_On_array_Of_doubleBuffer_Input(uint8_t sideRW, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_array_Of_doubleBuffer_Output(uint8_t sideRW, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        // get.
        class Input* get_ptr_array_Of_doubleBuffer_Input_READ();
        class Input* get_ptr_array_Of_doubleBuffer_Input_WRITE();
        class Output* get_ptr_array_Of_doubleBuffer_Output_READ();
        class Output* get_ptr_array_Of_doubleBuffer_Output_WRITE();
        class Data_Control* get_ptr_Data_Control();
        class Input* get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        class Output* get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        class Input* get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        class std::array<class OpenAvrilConcurrency::Input*, 3>* get_ptr_array_Of_buffer_Input_ReferenceForThread();
        class std::array<class OpenAvrilConcurrency::Output*, 3>* get_ptr_array_Of_buffer_Output_ReferenceForThread();
        class std::vector<class OpenAvrilConcurrency::Input*>* get_ptr_vector_Of_stack_Of_InputPraise();
        class std::vector<class OpenAvrilConcurrency::Output*>* get_ptr_vector_Of_stack_Of_OutputPraise();
        class User_I* get_ptr_User_I();
        class User_O* get_ptr_User_O();
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
        static void create_ptr_array_Of_doubleBuffer_Input(Input* newDEFAULT_Input);
        static void create_ptr_array_Of_doubleBuffer_Output(Output* newDEFAULT_Input);
        static void create_ptr_Data_Control();
        static void create_ptr_array_Of_buffer_Input_ReferenceForThread(Input* newDEFAULT_Input);
        static void create_ptr_array_Of_buffer_Output_ReferenceForThread(Output* newDEFAULT_Output;
        static void create_ptr_vector_Of_stack_Of_InputPraise(Input* newDEFAULT_Input);
        static void create_ptr_vector_Of_stack_Of_OutputPraise(Output* newDEFAULT_Output);
        static void create_ptr_User_I();
        static  void create_ptr_User_O();
        // get.
        static class Input* stat_get_ptr_array_Of_doubleBuffer_Input_READ();
        static class Input* stat_get_ptr_array_Of_doubleBuffer_Input_WRITE();
        static class Output* stat_ptr_array_Of_doubleBuffer_Output_READ();
        static class Output* stat_ptr_array_Of_doubleBuffer_Output_WRITE();
        static class Data_Control* stat_get_ptr_Data_Control();
        static std::array<class OpenAvrilConcurrency::Input*, 3>* stat_get_ptr_array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Output*, 3>* stat_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Input*, 2>* stat_get_ptr_array_Of_doubleBuffer_Input();
        static std::array<class OpenAvrilConcurrency::Output*, 2>* stat_get_ptr_array_Of_doubleBuffer_Output();
        static class Input* stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        static  class Output* stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        static class Input* stat_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        static class Output* stat_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        static std::vector<class OpenAvrilConcurrency::Input*>* stat_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class OpenAvrilConcurrency::Output*>* stat_get_ptr_vector_Of_stack_Of_OutputPraise();
        static class User_I* stat_get_ptr_User_I();
        static class User_O* stat_get_ptr_User_O();
        // set.
        static void stat_set_ptr_Data_Control(class Data_Control* newClass);
        static void stat_set_ptr_User_I(class User_I* newClass);
        static void stat_set_ptr_User_O(class User_O* newClass); 
    // pointers.
        // classes.
        static class Data_Control* _ptr_Data_Control;
        static class User_I* _ptr_User_I;
        static class User_O* _ptr_User_O;
        // registers.
        static std::array<class Input*, 3>* _ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* _ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* _ptr_array_Of_doubleBuffer_Input;
        static std::array<class Output*, 2>* _ptr_array_Of_doubleBuffer_Output;
        static std::vector<class Input*>* _ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<class Output*>* _ptr_vector_Of_stack_Of_OutputPraise;
    };
}
