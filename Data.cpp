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
        create_list_Of_buffer_Input_ReferenceForThread();
        create_list_Of_buffer_Output_ReferenceForThread();
        create_list_Of_doubleBuffer_Input();
        create_list_Of_doubleBuffer_Output();
        create_vector_Of_stack_Of_InputPraise();
        create_vector_Of_stack_Of_OutputPraise();
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
    void OpenAvrilConcurrency::Data::initialise_Control(OpenAvrilConcurrency::Data* data)
    {
        data->set_ptr_Data_Control(new class OpenAvrilConcurrency::Data_Control());
        while (data->get_ptr_Data_Control() == NULL) {}
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
    void OpenAvrilConcurrency::Data::create_list_Of_buffer_Input_ReferenceForThread()
    {
        OpenAvrilConcurrency::Input* newTemp = new class OpenAvrilConcurrency::Input();
        while (newTemp == NULL) { }
        std::list<class OpenAvrilConcurrency::Input*> _list_Of_buffer_Input_ReferenceForThread = { newTemp, newTemp, newTemp, newTemp };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_buffer_Input_ReferenceForThread();
        for (uint8_t threadID = 0; sizeof(get_ptr_list_Of_buffer_Input_ReferenceForThread()); threadID++)
        {
            while (get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvrilConcurrency::Data::create_list_Of_buffer_Output_ReferenceForThread()
    {
        OpenAvrilConcurrency::Output* newTemp = new class OpenAvrilConcurrency::Output();
        while (newTemp == NULL) {}
        std::list<class OpenAvrilConcurrency::Output*> _list_Of_buffer_Output_ReferenceForThread = { newTemp, newTemp, newTemp, newTemp };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_buffer_Output_ReferenceForThread();
        for (uint8_t threadID = 0; sizeof(get_ptr_list_Of_buffer_Output_ReferenceForThread()); threadID++)
        {
            while (get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvrilConcurrency::Data::create_list_Of_doubleBuffer_Input()
    {
        OpenAvrilConcurrency::Input* newTemp = new class OpenAvrilConcurrency::Input();
        while (newTemp == NULL) { }
        std::list<class OpenAvrilConcurrency::Input*> _list_Of_doubleBuffer_Input = { newTemp, newTemp };
        create_ptr_list_Of_doubleBuffer_Input();
        while (get_doubleBuffer_Input_READ() == NULL) {}
        while (get_doubleBuffer_Input_WRITE() == NULL) {}
        delete newTemp;
    }
    void OpenAvrilConcurrency::Data::create_list_Of_doubleBuffer_Output()
    {
        OpenAvrilConcurrency::Output* newTemp = new class OpenAvrilConcurrency::Output();
        while (newTemp == NULL) { }
        std::list<class OpenAvrilConcurrency::Output*> _list_Of_doubleBuffer_Output = { newTemp, newTemp };
        create_ptr_list_Of_doubleBuffer_Output();
        while (get_doubleBuffer_Output_READ() == NULL) {}
        while (get_doubleBuffer_Output_WRITE() == NULL) {}
        delete newTemp;
    }
    void OpenAvrilConcurrency::Data::create_vector_Of_stack_Of_InputPraise()
    {
        OpenAvrilConcurrency::Input* newTemp = new class OpenAvrilConcurrency::Input();
        while (newTemp == NULL) {}
        std::vector<class OpenAvrilConcurrency::Input*> _vector_Of_stack_Of_InputPraise = { newTemp };
        create_ptr_vector_Of_stack_Of_InputPraise();
        for (uint8_t threadID = 0; threadID < sizeof(get_ptr_vector_Of_stack_Of_InputPraise()); threadID++)
        {
            while (get_ptr_Item_On_vector_Of_stack_Of_InputPraise(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvrilConcurrency::Data::create_vector_Of_stack_Of_OutputPraise()
    {
        OpenAvrilConcurrency::Output* newTemp = new class OpenAvrilConcurrency::Output();
        while (newTemp == NULL) {}
        std::vector<class OpenAvrilConcurrency::Output*> _vector_Of_stack_Of_OutputPraise = { newTemp };
        create_ptr_vector_Of_stack_Of_OutputPraise();
        for (uint8_t threadID = 0; threadID < sizeof(get_ptr_vector_Of_stack_Of_OutputPraise()); threadID++)
        {
            while (get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(threadID) == NULL) {}
        }
        delete newTemp;
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
    // get.
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