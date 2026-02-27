#include "pch.h"

// pointers.
    // calsses.
    OpenAvrilConcurrency::Input_Control* _ptr_Input_Control = NULL;
    // registers.
    uint8_t* _ptr_in_praiseEventId = NULL;
    uint8_t* _ptr_in_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_Praise_In_Subsets = { NULL };



// constructor.

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.


// pointers.
    std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_Praise_In_Subsets = NULL;

// constructor.
    OpenAvrilConcurrency::Input::Input()
    {
        stat_create_in_praiseEventId();
        stat_create_in_playerId();
        Object* newDEFAULT_Object;
        stat_create_list_Of_Praise_In_Subsets(newDEFAULT_Object);
        delete newDEFAULT_Object;
    }

// destructor.
    OpenAvrilConcurrency::Input::~Input()
    {
        delete _ptr_Input_Control;
        delete _ptr_list_Of_Praise_In_Subsets;
    }

// public.
    void OpenAvrilConcurrency::Input::initialise(class OpenAvrilConcurrency::Framework_Server* obj)
    {
        initialise_Control();
        Object* newDEFAULT_Objcet;
        stat_create_list_Of_Praise_In_Subsets(newDEFAULT_Objcet);
        initialise_list_Of_Praise_In_Subsets();
        delete newDEFAULT_Objcet;
    }
    
    // get.
    uint8_t OpenAvrilConcurrency::Input::get_in_praiseEventId()
    {
        return _in_praiseEventId;
    }
    uint8_t OpenAvrilConcurrency::Input::get_in_playerId()
    {
        return _in_playerId;
    }
    class OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::get_ptr_Input_Control()
    {
        return _ptr_Input_Control;
    }
    class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.

// private.
    void OpenAvrilConcurrency::Input::stat_create_ptr_Input_Control()
    {
        set_ptr_Input_Control(new class OpenAvrilConcurrency::Input_Control());
        while (get_ptr_Input_Control() == NULL) { }
    }
    void OpenAvrilConcurrency::Input::stat_create_in_praiseEventId()
    {
        set_in_praiseEventId(255);
    }
    void OpenAvrilConcurrency::Input::stat_create_in_playerId()
    {
        set_in_playerId(255);
    }
    void OpenAvrilConcurrency::Input::stat_create_list_Of_Praise_In_Subsets(OpenAvrilConcurrency::Object* newDEFAULT_Object)
    {
        std::list<OpenAvrilConcurrency::Object*> _list_Of_Praise_In_Subsets = { NULL };//NUMBER OF PRAISES.
        stat_create_ptr_list_Of_Praise_In_Subsets();
        while(get_ptr_list_Of_Praise_In_Subsets() == NULL) {}
        for (uint8_t praiseID = 0; praiseID < get_Lenght_Of_list_Of_Praise_In_Subsets(); praiseID++)
        {
            auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
            std::advance(temp, praiseID);
            *temp = newDEFAULT_Object;
            while (get_ptr_Item_On_list_Of_Praise_In_Subsets(praiseID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Input::stat_create_ptr_list_Of_Praise_In_Subsets()
    {
        _ptr_list_Of_Praise_In_Subsets = &_list_Of_Praise_In_Subsets;
    }
    void OpenAvrilConcurrency::Input::initialise_Control()
    {
        set_ptr_Input_Control(new class OpenAvrilConcurrency::Input_Control());
        while (get_ptr_Input_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Input::initialise_list_Of_Praise_In_Subsets()
    {
        set_Subset_InputBuffer(new class OpenAvrilConcurrency::Praise0_Input());
    }

    // get.
    uint8_t OpenAvrilConcurrency::Input::get_Lenght_Of_list_Of_Praise_In_Subsets()
    {
        return sizeof(_list_Of_Praise_In_Subsets);
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::get_ptr_list_Of_Praise_In_Subsets()
    {
        return _ptr_list_Of_Praise_In_Subsets;
    }
    // set.
    void OpenAvrilConcurrency::Input::set_in_praiseEventId(uint8_t value)
    {
        _in_praiseEventId = value;
    }
    void OpenAvrilConcurrency::Input::set_in_playerId(uint8_t value)
    {
        _in_playerId = value;
    }
    void OpenAvrilConcurrency::Input::set_ptr_Input_Control(Input_Control* newClass)
    {
        _ptr_Input_Control = newClass;
    }
    void OpenAvrilConcurrency::Input::set_Subset_InputBuffer(OpenAvrilConcurrency::Praise0_Input* praise0_Input)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(praise0_Input);
        while(*temp == NULL) { }
    }
