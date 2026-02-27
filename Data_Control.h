#pragma once

namespace OpenAvrilConcurrency
{
    class Data_Control
    {
    public:
// constructor.
        Data_Control();

// destructor.
        virtual ~Data_Control();

// public.
    // dynamic.
        uint8_t boolToInt(bool bufferSide);
        void flip_Input_DoubleBuffer();
        void flip_Output_DoubleBuffer();
        void initialise_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool);
        void initialise_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool);
        void initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newINITIALISED_Bool);
        void initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* newINITIALISED_Bool);
        void pop_From_Stack_Of_Input(class OpenAvrilConcurrency::Data* obj, uint8_t concurrentThreadID);
        void pop_From_Stack_Of_Output(class OpenAvrilConcurrency::Data* obj);
        void push_To_Stack_Of_Input(class OpenAvrilConcurrency::Data* obj);
        void push_To_Stack_Of_Output(class OpenAvrilConcurrency::Data* obj, uint8_t concurrentThreadID);
        // get.
        bool get_ptr_flag_isLoaded_Stack_InputAction();
        bool get_ptr_flag_isLoaded_Stack_OutputSend();
        uint8_t get_STATE_Of_READ_For_array_Of_doubleBuffer_Input();
        uint8_t get_STATE_Of_READ_For_array_Of_doubleBuffer_Output();
        uint8_t get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Input();
        uint8_t get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Output();
        // set.
        void set_ptr_flag_isLoaded_Stack_InputAction(bool value);
        void set_ptr_flag_isLoaded_Stack_OutputSend(bool value);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
    
        // get.
        // set.
    // static.
        static void stat_create_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool);
        static void stat_create_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool);
        static void stat_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newINITIALISED_Bool);
        static void stat_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newINITIALISED_Bool);
        // get.
        static bool* stat_get_ptr_flag_isLoaded_Stack_InputAction();
        static bool* stat_get_ptr_flag_isLoaded_Stack_OutputSend();
        static bool* stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
        static bool* stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output();
        // set.
        static void stat_set_ptr_flag_isLoaded_Stack_InputAction(bool* newPtr);
        static void stat_set_ptr_flag_isLoaded_Stack_OutputSend(bool* newPtr);
        static void stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newPtr);
        static void stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* newPtr);
    };
}