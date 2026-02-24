#pragma once

namespace OpenAvrilConcurrency
{
    class Data
    {
// classes.

// registers.

    public:
// constructor.
        Data();

// destructor.
        virtual ~Data();

// public.
        void initialise(class Framework_Server* obj);
    // get.
        class Input* get_doubleBuffer_Input_READ();
        class Input* get_doubleBuffer_Input_WRITE();
        class Output* get_doubleBuffer_Output_READ();
        class Output* get_doubleBuffer_Output_WRITE();
        class Data_Control* get_ptr_Data_Control();
        class Input* get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        class Output* get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        class Input* get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
    // set.
 
// private.
        void create_ptr_Data_Control();
        void create_ptr_User_I();
        void create_ptr_User_O();
        void create_list_Of_buffer_Input_ReferenceForThread(class OpenAvrilConcurrency::Input* newDEFAULT_Input);
        void create_list_Of_buffer_Output_ReferenceForThread(class OpenAvrilConcurrency::Output* newDEFAULT_Output);
        void create_list_Of_doubleBuffer_Input(class OpenAvrilConcurrency::Input* newDEFAULT_Input);
        void create_list_Of_doubleBuffer_Output(class OpenAvrilConcurrency::Output* newDEFAULT_Output);
        void create_vector_Of_stack_Of_InputPraise(class OpenAvrilConcurrency::Input* newDEFAULT_Input);
        void create_vector_Of_stack_Of_OutputPraise(class OpenAvrilConcurrency::Output* newDEFAULT_Output);
        void create_ptr_list_Of_buffer_Input_ReferenceForThread();
        void create_ptr_list_Of_buffer_Output_ReferenceForThread();
        void create_ptr_list_Of_doubleBuffer_Input();
        void create_ptr_list_Of_doubleBuffer_Output();
        void create_ptr_vector_Of_stack_Of_InputPraise();
        void create_ptr_vector_Of_stack_Of_OutputPraise();
        void create_Registers_With_Input(class OpenAvrilConcurrency::Input* newDEFAULT_Input);
        void create_Registers_With_Output(class OpenAvrilConcurrency::Output* newDEFAULT_Output);
        void initialise_Control(Data* data);
        void initialise_Item_On_list_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_list_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_Item_On_list_Of_doubleBuffer_Input(uint8_t sideRW, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_list_Of_doubleBuffer_Output(uint8_t sideRW, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_Input_Registers(class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Registers_With_Output(class OpenAvrilConcurrency::Output* newINITIALISED_Output);
    // get.
        uint8_t get_Length_Of_list_Of_buffer_Input_ReferenceForThread();
        uint8_t get_Length_Of_list_Of_buffer_Output_ReferenceForThread();
        uint8_t get_Length_Of_vector_Of_stack_Of_InputPraise();
        uint8_t get_Length_Of_vector_Of_stack_Of_OutputPraise();
        std::list<class Input*>* get_ptr_list_Of_buffer_Input_ReferenceForThread();
        std::list<class Output*>* get_ptr_list_Of_buffer_Output_ReferenceForThread();
        std::list<class Input*>* get_ptr_list_Of_doubleBuffer_Input();
        std::list<class Output*>* get_ptr_list_Of_doubleBuffer_Output();
        class User_I* get_ptr_User_I();
        class User_O* get_ptr_User_O();
        std::vector<class Input*>* get_ptr_vector_Of_stack_Of_InputPraise();
        std::vector<class Output*>* get_ptr_vector_Of_stack_Of_OutputPraise();
    // set.
        void set_ptr_Data_Control(class Data_Control* newClass);
        void set_ptr_list_Of_buffer_Input_ReferenceForThread(std::list<class Input*>* newListPtr);
        void set_ptr_list_Of_buffer_Output_ReferenceForThread(std::list<class Output*>* newListPtr);
        void set_ptr_list_Of_doubleBuffer_Input(std::list<class Input*>* newListPtr);
        void set_ptr_list_Of_doubleBuffer_Output(std::list<class Output*>* newListPtr);
        void set_ptr_User_I(class User_I* newClass);
        void set_ptr_User_O(class User_O* newClass);
        void set_ptr_vector_Of_stack_Of_InputPraise(std::vector<class Input*>* newStack);
        void set_ptr_vector_Of_stack_Of_OutputPraise(std::vector<class Output*>* newStack);
    };
}
