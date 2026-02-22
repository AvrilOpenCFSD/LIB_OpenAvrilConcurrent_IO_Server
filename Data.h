#pragma once

namespace OpenAvril
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
        void initialise_Control(Data* data);
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
        void create_list_Of_buffer_Input_ReferenceForThread();
        void create_list_Of_buffer_Output_ReferenceForThread();
        void create_list_Of_doubleBuffer_Input();          
        void create_list_Of_doubleBuffer_Output();
        void create_vector_Of_stack_Of_InputPraise();
        void create_vector_Of_stack_Of_OutputPraise();
        void create_ptr_list_Of_buffer_Input_ReferenceForThread();
        void create_ptr_list_Of_buffer_Output_ReferenceForThread();
        void create_ptr_list_Of_doubleBuffer_Input();
        void create_ptr_list_Of_doubleBuffer_Output();
        void create_ptr_vector_Of_stack_Of_InputPraise();
        void create_ptr_vector_Of_stack_Of_OutputPraise();
    // get.
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
