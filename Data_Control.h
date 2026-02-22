#pragma once

namespace OpenAvril
{
    class Data_Control
    {
// classes.

// registers.

    public:
// constructor.
        Data_Control();

// destructor.
        virtual ~Data_Control();

// public.
        uint8_t boolToInt(bool bufferSide);
        void flip_Input_DoubleBuffer();
        void flip_Output_DoubleBuffer();
        void Pop_From_Stack_Of_Input(class OpenAvril::Data* obj, uint8_t concurrentThreadID);
        void pop_From_Stack_Of_Output(class OpenAvril::Data* obj);
        void push_To_Stack_Of_Input(class OpenAvril::Data* obj);
        void push_To_Stack_Of_Output(class OpenAvril::Data* obj, uint8_t concurrentThreadID);
    // get.
        bool get_flag_isLoaded_Stack_InputAction();
        bool get_flag_isLoaded_Stack_OutputSend();
        uint8_t get_STATE_Of_READ_For_list_Of_doubleBuffer_Input();
        uint8_t get_STATE_Of_READ_For_list_Of_doubleBuffer_Output();
        uint8_t get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input();
        uint8_t get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output();
    // set.
        void set_flag_isLoaded_Stack_InputAction(bool value);
        void set_flag_isLoaded_Stack_OutputSend(bool value);

    private:
// private.
        void create_flag_isLoaded_Stack_InputAction();
        void create_flag_isLoaded_Stack_OutputSend();
        void create_side_To_Write_For_list_Of_doubleBuffer_Input();
        void create_side_To_Write_For_list_Of_doubleBuffer_Output();
    // get.
    // set.
        void set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input(bool value);
        void set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output(bool value);
    };
}