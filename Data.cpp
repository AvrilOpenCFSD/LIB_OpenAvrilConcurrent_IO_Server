#include "pch.h"

// classes.
    class OpenAvrilConcurrency::Data_Control* _ptr_Data_Control = NULL;
    class OpenAvrilConcurrency::User_I* _ptr_User_I = NULL;
    class OpenAvrilConcurrency::User_O* _ptr_User_O = NULL;

// registers.
    std::list<class OpenAvrilConcurrency::Input*> _list_Of_buffer_Input_ReferenceForThread = { NULL };
    std::list<class OpenAvrilConcurrency::Output*> _list_Of_buffer_Output_ReferenceForThread = { NULL };
    std::list<class OpenAvrilConcurrency::Input*> _list_Of_doubleBuffer_Input = { NULL };
    std::list<class OpenAvrilConcurrency::Output*> _list_Of_doubleBuffer_Output = { NULL };
    std::vector<class OpenAvrilConcurrency::Input*> _vector_Of_stack_Of_InputPraise = { NULL };
    std::vector<class OpenAvrilConcurrency::Output*> _vector_Of_stack_Of_OutputPraise = { NULL };

// pointers.
    std::list<class OpenAvrilConcurrency::Input*>* _ptr_list_Of_buffer_Input_ReferenceForThread = NULL;
    std::list<class OpenAvrilConcurrency::Output*>* _ptr_list_Of_buffer_Output_ReferenceForThread = NULL;
    std::list<class OpenAvrilConcurrency::Input*>* _ptr_list_Of_doubleBuffer_Input = NULL;
    std::list<class OpenAvrilConcurrency::Output*>* _ptr_list_Of_doubleBuffer_Output = NULL;
    std::vector<class OpenAvrilConcurrency::Input*>* _ptr_vector_Of_stack_Of_InputPraise = NULL;
    std::vector<class OpenAvrilConcurrency::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = NULL;

// constructor.
    OpenAvrilConcurrency::Data::Data()
    {
        create_ptr_User_I();
        create_ptr_User_O();
        OpenAvrilConcurrency::Input* newDEFAULT_Input = new class OpenAvrilConcurrency::Input();
        while (newDEFAULT_Input == NULL) {}
        create_Registers_With_Input(newDEFAULT_Input);
        delete newDEFAULT_Input;
        OpenAvrilConcurrency::Output* newDEFAULT_output = new class OpenAvrilConcurrency::Output();
        while (newDEFAULT_output == NULL) {}
        create_Registers_With_Output(newDEFAULT_output);
        delete newDEFAULT_output;
    }
    
// destructor.
    OpenAvrilConcurrency::Data::~Data()
    {
        delete _ptr_Data_Control;
        delete _ptr_User_I;
        delete _ptr_User_O;
        delete _ptr_list_Of_buffer_Input_ReferenceForThread;
        delete _ptr_list_Of_buffer_Output_ReferenceForThread;
        delete _ptr_list_Of_doubleBuffer_Input;
        delete _ptr_list_Of_doubleBuffer_Output;
        delete _ptr_vector_Of_stack_Of_InputPraise;
        delete _ptr_vector_Of_stack_Of_OutputPraise;
    }

// public.
    void OpenAvrilConcurrency::Data::initialise(Framework_Server* obj)
    {
        initialise_Control(obj->get_ptr_Server()->get_ptr_Data());
        OpenAvrilConcurrency::Input* newINITIALISED_Input = new class OpenAvrilConcurrency::Input();
        while (newINITIALISED_Input == NULL) {}
        newINITIALISED_Input->initialise_Control();
        initialise_Input_Registers(newINITIALISED_Input);
        delete newINITIALISED_Input;
        OpenAvrilConcurrency::Output* newINITIALISED_Output = new class OpenAvrilConcurrency::Output();
        while (newINITIALISED_Output == NULL) {}
        newINITIALISED_Output->initialise_Control();
        initialise_Registers_With_Output(newINITIALISED_Output);
        delete newINITIALISED_Output;
    }

    // get.
    class OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_doubleBuffer_Input_READ()
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Input()->begin();
        std::advance(temp, get_ptr_Data_Control()->boolToInt(!get_ptr_Data_Control()->get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input()));
        return *temp;
    }
    class OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_doubleBuffer_Input_WRITE()
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Input()->begin();
        std::advance(temp, get_ptr_Data_Control()->boolToInt(get_ptr_Data_Control()->get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input()));
        return *temp;
    }
    class OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_doubleBuffer_Output_READ()
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Output()->begin();
        std::advance(temp, get_ptr_Data_Control()->boolToInt(!get_ptr_Data_Control()->get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output()));
        return *temp;
    }
    class OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_doubleBuffer_Output_WRITE()
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Output()->begin();
        std::advance(temp, get_ptr_Data_Control()->boolToInt(get_ptr_Data_Control()->get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output()));
        return *temp;
    }
    class OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::get_ptr_Data_Control()
    {
        return _ptr_Data_Control;
    }
    class OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    class OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    class OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        return _vector_Of_stack_Of_InputPraise[slot];
    }
    class OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        return _vector_Of_stack_Of_OutputPraise[slot];
    }
    // set.

// private.
    void OpenAvrilConcurrency::Data::create_ptr_Data_Control()
    {
        set_ptr_Data_Control(new class OpenAvrilConcurrency::Data_Control());
        while (get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_ptr_User_I()
    {
        set_ptr_User_I(new class OpenAvrilConcurrency::User_I());
        while (get_ptr_User_I() == NULL) { }
    }
    void OpenAvrilConcurrency::Data::create_ptr_User_O()
    {
        set_ptr_User_O(new class OpenAvrilConcurrency::User_O());
        while (get_ptr_User_O() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_list_Of_buffer_Input_ReferenceForThread(class OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::list<class OpenAvrilConcurrency::Input*> _list_Of_buffer_Input_ReferenceForThread = { newDefault, newDefault, newDefault, newDefault };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_buffer_Input_ReferenceForThread();
        while (get_ptr_list_Of_buffer_Input_ReferenceForThread() == NULL) {}
        for (uint8_t threadID = 0; threadID < get_Length_Of_list_Of_buffer_Input_ReferenceForThread(); threadID++)
        {
            while (get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(threadID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Data::create_list_Of_buffer_Output_ReferenceForThread(class OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::list<class OpenAvrilConcurrency::Output*> _list_Of_buffer_Output_ReferenceForThread = { newDefault, newDefault, newDefault, newDefault };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_buffer_Output_ReferenceForThread();
        while (get_ptr_list_Of_buffer_Output_ReferenceForThread() == NULL) {}
        for (uint8_t threadID = 0; sizeof(get_ptr_list_Of_buffer_Output_ReferenceForThread()); threadID++)
        {
            while (get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(threadID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Data::create_list_Of_doubleBuffer_Input(class OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::list<class OpenAvrilConcurrency::Input*> _list_Of_doubleBuffer_Input = { newDefault, newDefault };
        create_ptr_list_Of_doubleBuffer_Input();
        while (get_ptr_list_Of_doubleBuffer_Input() == NULL) {}
        while (get_doubleBuffer_Input_READ() == NULL) {}
        while (get_doubleBuffer_Input_WRITE() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_list_Of_doubleBuffer_Output(class OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::list<class OpenAvrilConcurrency::Output*> _list_Of_doubleBuffer_Output = { newDefault, newDefault };
        create_ptr_list_Of_doubleBuffer_Output();
        while (get_ptr_list_Of_doubleBuffer_Output() == NULL) {}
        while (get_doubleBuffer_Output_READ() == NULL) {}
        while (get_doubleBuffer_Output_WRITE() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_vector_Of_stack_Of_InputPraise(class OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::vector<class OpenAvrilConcurrency::Input*> _vector_Of_stack_Of_InputPraise = { newDefault };
        create_ptr_vector_Of_stack_Of_InputPraise();
        while (get_ptr_vector_Of_stack_Of_InputPraise() == NULL) {}
        while (get_ptr_Item_On_vector_Of_stack_Of_InputPraise(0) == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_vector_Of_stack_Of_OutputPraise(class OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::vector<class OpenAvrilConcurrency::Output*> _vector_Of_stack_Of_OutputPraise = { newDefault };
        create_ptr_vector_Of_stack_Of_OutputPraise();
        while (get_ptr_vector_Of_stack_Of_OutputPraise() == NULL) {}
        while (get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(0) == NULL) {}
    }
    void OpenAvrilConcurrency::Data::create_ptr_list_Of_buffer_Input_ReferenceForThread()
    {
        std::list<class OpenAvrilConcurrency::Input*>* _ptr_list_Of_buffer_Input_ReferenceForThread = new std::list<class OpenAvrilConcurrency::Input*>();
        while (get_ptr_list_Of_buffer_Input_ReferenceForThread() == NULL) {}
        set_ptr_list_Of_buffer_Input_ReferenceForThread(&_list_Of_buffer_Input_ReferenceForThread);
    }
    void OpenAvrilConcurrency::Data::create_ptr_list_Of_buffer_Output_ReferenceForThread()
    {
        std::list<class OpenAvrilConcurrency::Output*>* _ptr_list_Of_buffer_Output_ReferenceForThread = new std::list<class OpenAvrilConcurrency::Output*>();
        while (get_ptr_list_Of_buffer_Output_ReferenceForThread() == NULL) {}
        set_ptr_list_Of_buffer_Output_ReferenceForThread(&_list_Of_buffer_Output_ReferenceForThread);
    }
    void OpenAvrilConcurrency::Data::create_ptr_list_Of_doubleBuffer_Input()
    {
        std::list<class OpenAvrilConcurrency::Input*>* _ptr_list_Of_doubleBuffer_Input = new std::list<class OpenAvrilConcurrency::Input*>();
        while (get_ptr_list_Of_doubleBuffer_Input() == NULL) {}
        set_ptr_list_Of_doubleBuffer_Input(&_list_Of_doubleBuffer_Input);
    }
    void OpenAvrilConcurrency::Data::create_ptr_list_Of_doubleBuffer_Output()
    {
        std::list<class OpenAvrilConcurrency::Output*>* _ptr_list_Of_doubleBuffer_Output = new std::list<class OpenAvrilConcurrency::Output*>();
        while (get_ptr_list_Of_doubleBuffer_Output() == NULL) {}
        set_ptr_list_Of_doubleBuffer_Output(&_list_Of_doubleBuffer_Output);
    }
    void OpenAvrilConcurrency::Data::create_ptr_vector_Of_stack_Of_InputPraise()
    {
        std::vector<class OpenAvrilConcurrency::Input*>* _ptr_vector_Of_stack_Of_InputPraise = new std::vector<class OpenAvrilConcurrency::Input*>();
        while (get_ptr_vector_Of_stack_Of_InputPraise() == NULL) {}
        set_ptr_vector_Of_stack_Of_InputPraise(&_vector_Of_stack_Of_InputPraise);
    }
    void OpenAvrilConcurrency::Data::create_ptr_vector_Of_stack_Of_OutputPraise()
    {
        std::list<class OpenAvrilConcurrency::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = new std::list<class OpenAvrilConcurrency::Output*>();
        while (get_ptr_vector_Of_stack_Of_OutputPraise() == NULL) {}
        set_ptr_vector_Of_stack_Of_OutputPraise(&_vector_Of_stack_Of_OutputPraise);
    }
    void OpenAvrilConcurrency::Data::create_Registers_With_Input(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        create_list_Of_buffer_Input_ReferenceForThread(newDefault);
        create_list_Of_doubleBuffer_Input(newDefault);
        create_vector_Of_stack_Of_InputPraise(newDefault);
    }
    void OpenAvrilConcurrency::Data::create_Registers_With_Output(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        create_list_Of_buffer_Output_ReferenceForThread(newDefault);
        create_list_Of_doubleBuffer_Output(newDefault);
        create_vector_Of_stack_Of_OutputPraise(newDefault);
    }
    void OpenAvrilConcurrency::Data::initialise_Control(OpenAvrilConcurrency::Data* data)
    {
        data->set_ptr_Data_Control(new class OpenAvrilConcurrency::Data_Control());
        while (data->get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_list_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        auto temp = get_ptr_list_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newINITIALISED_Input;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_list_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        auto temp = get_ptr_list_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newINITIALISED_Output;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_list_Of_doubleBuffer_Input(uint8_t sideRW, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Input()->begin();
        std::advance(temp, sideRW);
        *temp = newINITIALISED_Input;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_list_Of_doubleBuffer_Output(uint8_t sideRW, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        auto temp = get_ptr_list_Of_doubleBuffer_Output()->begin();
        std::advance(temp, sideRW);
        *temp = newINITIALISED_Output;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        auto temp = get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_Input;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        auto temp = get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_Output;
    }
    void OpenAvrilConcurrency::Data::initialise_Input_Registers(OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < get_Length_Of_list_Of_buffer_Input_ReferenceForThread(); concurrentThreadID++)
        {
            initialise_Item_On_list_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
        }
        for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
        {
            initialise_Item_On_list_Of_doubleBuffer_Input(sideID, newINITIALISED_Input);
        }
        for (uint8_t slotID = 0; slotID < get_Length_Of_vector_Of_stack_Of_InputPraise(); slotID++)
        {
            initialise_Item_On_vector_Of_stack_Of_InputPraise(slotID, newINITIALISED_Input);
        }
    }
    void OpenAvrilConcurrency::Data::initialise_Registers_With_Output(OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < get_Length_Of_list_Of_buffer_Output_ReferenceForThread(); concurrentThreadID++)
        {
            initialise_Item_On_list_Of_doubleBuffer_Output(concurrentThreadID, newINITIALISED_Output);
        }
        for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
        {
            initialise_Item_On_list_Of_doubleBuffer_Output(sideID, newINITIALISED_Output);
        }
        for (uint8_t slotID = 0; slotID < get_Length_Of_vector_Of_stack_Of_OutputPraise(); slotID++)
        {
            initialise_Item_On_vector_Of_stack_Of_OutputPraise(slotID, newINITIALISED_Output);
        }
  
    }
    // get.
    uint8_t OpenAvrilConcurrency::Data::get_Length_Of_list_Of_buffer_Input_ReferenceForThread()
    {
        return sizeof(_list_Of_buffer_Input_ReferenceForThread);
    }
    uint8_t OpenAvrilConcurrency::Data::get_Length_Of_list_Of_buffer_Output_ReferenceForThread()
    {
        return sizeof(_list_Of_buffer_Output_ReferenceForThread);
    }
    uint8_t OpenAvrilConcurrency::Data::get_Length_Of_vector_Of_stack_Of_InputPraise()
    {
        return sizeof(_vector_Of_stack_Of_InputPraise);
    }
    uint8_t OpenAvrilConcurrency::Data::get_Length_Of_vector_Of_stack_Of_OutputPraise()
    {
        return sizeof(_vector_Of_stack_Of_OutputPraise);
    }
    std::list<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::get_ptr_list_Of_buffer_Input_ReferenceForThread()
    {
        return _ptr_list_Of_buffer_Input_ReferenceForThread;
    }
    std::list<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::get_ptr_list_Of_buffer_Output_ReferenceForThread()
    {
        return _ptr_list_Of_buffer_Output_ReferenceForThread;
    }
    std::list<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::get_ptr_list_Of_doubleBuffer_Input()
    {
        return _ptr_list_Of_doubleBuffer_Input;
    }
    std::list<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::get_ptr_list_Of_doubleBuffer_Output()
    {
        return _ptr_list_Of_doubleBuffer_Output;
    }
    OpenAvrilConcurrency::User_I* OpenAvrilConcurrency::Data::get_ptr_User_I()
    {
        return _ptr_User_I;
    }
    OpenAvrilConcurrency::User_O* OpenAvrilConcurrency::Data::get_ptr_User_O()
    {
        return _ptr_User_O;
    }
    std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _ptr_vector_Of_stack_Of_OutputPraise;
    }
    // set.
    void OpenAvrilConcurrency::Data::set_ptr_Data_Control(OpenAvrilConcurrency::Data_Control* newClass)
    {
        _ptr_Data_Control = newClass;
    }
    void OpenAvrilConcurrency::Data::set_ptr_list_Of_buffer_Input_ReferenceForThread(std::list<class Input*>* newListPtr)
    {
        _ptr_list_Of_buffer_Input_ReferenceForThread = newListPtr;
    }
    void OpenAvrilConcurrency::Data::set_ptr_list_Of_buffer_Output_ReferenceForThread(std::list<class Output*>* newListPtr)
    {
        _ptr_list_Of_buffer_Output_ReferenceForThread = newListPtr;
    }
    void OpenAvrilConcurrency::Data::set_ptr_list_Of_doubleBuffer_Input(std::list<class Input*>* newListPtr)
    {
        _ptr_list_Of_doubleBuffer_Input = newListPtr;
    }
    void OpenAvrilConcurrency::Data::set_ptr_list_Of_doubleBuffer_Output(std::list<class Output*>* newListPtr)
    {
        _ptr_list_Of_doubleBuffer_Output = newListPtr;
    }
    void OpenAvrilConcurrency::Data::set_ptr_User_I(OpenAvrilConcurrency::User_I* newClass)
    {
        _ptr_User_I = newClass;
    }
    void OpenAvrilConcurrency::Data::set_ptr_User_O(OpenAvrilConcurrency::User_O* newClass)
    {
        _ptr_User_O = newClass;
    }
    void OpenAvrilConcurrency::Data::set_ptr_vector_Of_stack_Of_InputPraise(std::vector<OpenAvrilConcurrency::Input*>* newStackPtr)
    {
        _ptr_vector_Of_stack_Of_InputPraise = newStackPtr;
    }
    void OpenAvrilConcurrency::Data::set_ptr_vector_Of_stack_Of_OutputPraise(std::vector<OpenAvrilConcurrency::Output*>* newStackPtr)
    {
        _ptr_vector_Of_stack_Of_OutputPraise = newStackPtr;
    }