#include "pch.h"

// classes.

// registers.
    bool _flag_isLoaded_Stack_InputAction = NULL;
    bool _flag_isLoaded_Stack_OutputSend = NULL;
    bool _side_To_Write_For_list_Of_doubleBuffer_Input = NULL;
    bool _side_To_Write_For_list_Of_doubleBuffer_Output = NULL;

// constructor.
    OpenAvril::Data_Control::Data_Control()
    {
        _flag_isLoaded_Stack_InputAction = bool(false);
        _flag_isLoaded_Stack_OutputSend = bool(false);
        _side_To_Write_For_list_Of_doubleBuffer_Input = bool(false);
        _side_To_Write_For_list_Of_doubleBuffer_Output = bool(false);
    }

// destructor.
    OpenAvril::Data_Control::~Data_Control()
    {

    }

// public.
    void OpenAvril::Data_Control::flip_Input_DoubleBuffer()
    {
        set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input(!get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input());
    }
    void OpenAvril::Data_Control::flip_Output_DoubleBuffer()
    {
        set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output(!get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output());
    }
    void OpenAvril::Data_Control::Pop_From_Stack_Of_Input(OpenAvril::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvril::Input* referenceForCore = data->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class OpenAvril::Input* inputSlot = data->get_ptr_Item_On_vector_Of_stack_Of_InputPraise(1);
        referenceForCore = inputSlot;
        data->get_ptr_vector_Of_stack_Of_InputPraise()->erase(data->get_ptr_vector_Of_stack_Of_InputPraise()->begin() + 1);
        if (sizeof(data->get_ptr_vector_Of_stack_Of_InputPraise()) < 2)
        {
            set_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            set_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void OpenAvril::Data_Control::pop_From_Stack_Of_Output(OpenAvril::Data* data)
    {
        class OpenAvril::Output* distributeBuffer = data->get_doubleBuffer_Output_READ();
        class OpenAvril::Output* outputSlot = data->get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1);
        distributeBuffer = outputSlot;
        data->get_ptr_vector_Of_stack_Of_OutputPraise()->erase(data->get_ptr_vector_Of_stack_Of_OutputPraise()->begin() + 1);
        if (sizeof(data->get_ptr_vector_Of_stack_Of_OutputPraise()) < 2)
        {
            set_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            set_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    void OpenAvril::Data_Control::push_To_Stack_Of_Input(OpenAvril::Data* data)
    {
        class OpenAvril::Input* inputBuffer = data->get_doubleBuffer_Input_READ();
        std::vector<class OpenAvril::Input*>* inputStackt = data->get_ptr_vector_Of_stack_Of_InputPraise();
        inputStackt->push_back(inputBuffer);
        if (sizeof(inputStackt) < 2)
        {
            set_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            set_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void OpenAvril::Data_Control::push_To_Stack_Of_Output(OpenAvril::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvril::Output* referenceForCore = data->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class OpenAvril::Output*>* outputStack = data->get_ptr_vector_Of_stack_Of_OutputPraise();
        outputStack->push_back(referenceForCore);
        if (sizeof(outputStack) < 2)
        {
            set_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            set_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    // get.
    bool OpenAvril::Data_Control::get_flag_isLoaded_Stack_InputAction()
    {
        return _flag_isLoaded_Stack_InputAction;
    }
    bool OpenAvril::Data_Control::get_flag_isLoaded_Stack_OutputSend()
    {
        return _flag_isLoaded_Stack_OutputSend;
    }
    uint8_t OpenAvril::Data_Control::get_STATE_Of_READ_For_list_Of_doubleBuffer_Input()
    {
        return boolToInt(!_side_To_Write_For_list_Of_doubleBuffer_Input);
    }
    uint8_t OpenAvril::Data_Control::get_STATE_Of_READ_For_list_Of_doubleBuffer_Output()
    {
        return boolToInt(!_side_To_Write_For_list_Of_doubleBuffer_Output);;
    }
    uint8_t OpenAvril::Data_Control::get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input()
    {
        return boolToInt(_side_To_Write_For_list_Of_doubleBuffer_Input);
    }
    uint8_t OpenAvril::Data_Control::get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output()
    {
        return boolToInt(_side_To_Write_For_list_Of_doubleBuffer_Output);
    }
    // set.
    void OpenAvril::Data_Control::set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input(bool value)
    {
        _side_To_Write_For_list_Of_doubleBuffer_Input = value;
    }
    void OpenAvril::Data_Control::set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output(bool value)
    {
        _side_To_Write_For_list_Of_doubleBuffer_Output = value;
    }

// private.
    uint8_t OpenAvril::Data_Control::boolToInt(bool bufferSide)
    {
        uint8_t temp = 2;
        if (bufferSide)
        {
            temp = 1;
        }
        else
        {
            temp = 0;
        }
        return temp;
    }
    void OpenAvril::Data_Control::create_flag_isLoaded_Stack_InputAction()
    {
        set_flag_isLoaded_Stack_InputAction(false);
    }
    void OpenAvril::Data_Control::create_flag_isLoaded_Stack_OutputSend()
    {
        set_flag_isLoaded_Stack_OutputSend(false);
    }
    void OpenAvril::Data_Control::create_side_To_Write_For_list_Of_doubleBuffer_Input()
    {
        _side_To_Write_For_list_Of_doubleBuffer_Input = bool(false);
    }
    void OpenAvril::Data_Control::create_side_To_Write_For_list_Of_doubleBuffer_Output()
    {
        _side_To_Write_For_list_Of_doubleBuffer_Output = bool(false);
    }
    // get.
    // set.
    void OpenAvril::Data_Control::set_flag_isLoaded_Stack_InputAction(bool value)
    {
        _flag_isLoaded_Stack_InputAction = value;
    }
    void OpenAvril::Data_Control::set_flag_isLoaded_Stack_OutputSend(bool value)
    {
        _flag_isLoaded_Stack_OutputSend = value;
    }