#include "pch.h"

// pointers.
    // classes.
    // registers.
    bool* _ptr_flag_isLoaded_Stack_InputAction = NULL;
    bool* _ptr_flag_isLoaded_Stack_OutputSend = NULL;
    bool* _ptr_side_To_Write_For_array_Of_doubleBuffer_Input = NULL;
    bool* _ptr_side_To_Write_For_array_Of_doubleBuffer_Output = NULL;

    
// constructor.
    OpenAvrilConcurrency::Data_Control::Data_Control()
    {
        bool* newDEFAULT_Bool = new bool(true);
        create_ptr_flag_isLoaded_Stack_InputAction(newDEFAULT_Bool);
        create_ptr_flag_isLoaded_Stack_OutputSend(newDEFAULT_Bool);
        create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(newDEFAULT_Bool);
        create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(newDEFAULT_Bool);
        delete newDEFAULT_Bool;
    }

// destructor.
    OpenAvrilConcurrency::Data_Control::~Data_Control()
    {
        delete _ptr_flag_isLoaded_Stack_InputAction;
        delete _ptr_flag_isLoaded_Stack_OutputSend;
        delete _ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
        delete _ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }

// public.
    // dynamic.
    uint8_t OpenAvrilConcurrency::Data_Control::boolToInt(bool bufferSide)
    {
        uint8_t temp = new uint8_t(UINT8_MAX);
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
    void OpenAvrilConcurrency::Data_Control::flip_Input_DoubleBuffer()
    {
        stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(!stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    void OpenAvrilConcurrency::Data_Control::flip_Output_DoubleBuffer()
    {
        stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(!stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());
    }
    void OpenAvrilConcurrency::Data_Control::pop_From_Stack_Of_Input(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Input* referenceForCore = data->get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class OpenAvrilConcurrency::Input* inputSlot = data->get_ptr_Item_On_vector_Of_stack_Of_InputPraise(1);
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
    void OpenAvrilConcurrency::Data_Control::pop_From_Stack_Of_Output(OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Output* distributeBuffer = data->get_ptr_array_Of_doubleBuffer_Output_READ();
        class OpenAvrilConcurrency::Output* outputSlot = data->get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1);
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
    void OpenAvrilConcurrency::Data_Control::push_To_Stack_Of_Input(OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Input* inputBuffer = data->get_ptr_array_Of_doubleBuffer_Input_READ();
        std::vector<class OpenAvrilConcurrency::Input*>* inputStackt = data->get_ptr_vector_Of_stack_Of_InputPraise();
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
    void OpenAvrilConcurrency::Data_Control::push_To_Stack_Of_Output(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Output* referenceForCore = data->get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class OpenAvrilConcurrency::Output*>* outputStack = data->get_ptr_vector_Of_stack_Of_OutputPraise();
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
    bool OpenAvrilConcurrency::Data_Control::get_ptr_flag_isLoaded_Stack_InputAction()
    {
        return _ptr_flag_isLoaded_Stack_InputAction;
    }
    bool OpenAvrilConcurrency::Data_Control::get_ptr_flag_isLoaded_Stack_OutputSend()
    {
        return _ptr_flag_isLoaded_Stack_OutputSend;
    }
    uint8_t OpenAvrilConcurrency::Data_Control::get_STATE_Of_READ_For_array_Of_doubleBuffer_Input()
    {
        return boolToInt(!stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    uint8_t OpenAvrilConcurrency::Data_Control::get_STATE_Of_READ_For_array_Of_doubleBuffer_Output()
    {
        return boolToInt(!stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());;
    }
    uint8_t OpenAvrilConcurrency::Data_Control::get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Input()
    {
        return boolToInt(stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    uint8_t OpenAvrilConcurrency::Data_Control::get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Output()
    {
        return boolToInt(stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());
    }
        // set.
    void OpenAvrilConcurrency::Data_Control::set_ptr_flag_isLoaded_Stack_InputAction(bool value)
    {
        *_ptr_flag_isLoaded_Stack_InputAction = value;
    }
    void OpenAvrilConcurrency::Data_Control::set_ptr_flag_isLoaded_Stack_OutputSend(bool value)
    {
        *_ptr_flag_isLoaded_Stack_OutputSend = value;
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.

        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Data_Control::create_ptr_flag_isLoaded_Stack_InputAction(bool* newDEFAULT_Bool)
    {
        bool* _ptr_flag_isLoaded_Stack_InputAction = new bool(true);
        while (stat_get_ptr_flag_isLoaded_Stack_InputAction() == NULL) {}
        *_ptr_flag_isLoaded_Stack_InputAction = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::create_ptr_flag_isLoaded_Stack_OutputSend(bool* newDEFAULT_Bool)
    {
        bool* _ptr_flag_isLoaded_Stack_OutputSend = new bool(true);
        while (stat_get_ptr_flag_isLoaded_Stack_OutputSend() == NULL) {}
        *_ptr_flag_isLoaded_Stack_OutputSend = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newDEFAULT_Bool)
    {
        bool* _ptr_side_To_Write_For_array_Of_doubleBuffer_Input = new bool(true);
        while (stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input() == NULL) {}
        *_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newDEFAULT_Bool)
    {
        bool* _ptr_side_To_Write_For_array_Of_doubleBuffer_Output = new bool(true);
        while (stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output() == NULL) {}
        *_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = *newDEFAULT_Bool;
    }
        // get.

    bool* OpenAvrilConcurrency::Data_Control::stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return _ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_get_ptr_flag_isLoaded_Stack_OutputSend()
    {
        return _ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return _ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return _ptr_side_To_Write_For_array_Of_doubleBuffer_Outpu;
    }
        // set.
    void OpenAvrilConcurrency::Data_Control::stat_set_ptr_flag_isLoaded_Stack_InputAction(bool* newPtr)
    {
        *_ptr_flag_isLoaded_Stack_InputAction = *newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_set_ptr_flag_isLoaded_Stack_InputAction(bool* newPtr)
    {
        *_ptr_flag_isLoaded_Stack_InputAction = *newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newPtr)
    {
        *_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = *newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* newPtr)
    {
        *_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = *newPtr;
    }

