#include "pch.h"
// classes.

// registers.

// pointers.

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
// calsses.
    OpenAvrilConcurrency::Output_Control* _ptr_Output_Control = NULL;

// registers.
    uint8_t _out_praiseEventId = NULL;
    uint8_t _out_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*> _list_Of_Praise_In_Subsets = { NULL };

// pointers.
    std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_Praise_In_Subsets = NULL;

// constructor.
    OpenAvrilConcurrency::Output::Output()
    {
        create_in_praiseEventId();
        create_in_playerId();
        Object* newDEFAULT_Object;
        create_list_Of_Praise_In_Subsets(newDEFAULT_Object);
        delete newDEFAULT_Object;
    }

// destructor.
    OpenAvrilConcurrency::Output::~Output()
    {
        delete _ptr_Output_Control;
        delete _ptr_list_Of_Praise_In_Subsets;
    }

// public.
    void OpenAvrilConcurrency::Output::initialise(class OpenAvrilConcurrency::Framework_Server* obj)
    {
        initialise_Control();
        Object* newDEFAULT_Objcet;
        create_list_Of_Praise_In_Subsets(newDEFAULT_Objcet);
        initialise_list_Of_Praise_In_Subsets();
        delete newDEFAULT_Objcet;
    }

    // get.
    uint8_t OpenAvrilConcurrency::Output::get_out_praiseEventId()
    {
        return _out_praiseEventId;
    }
    uint8_t OpenAvrilConcurrency::Output::get_out_playerId()
    {
        return _out_playerId;
    }
    class OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::get_ptr_Output_Control()
    {
        return _ptr_Output_Control;
    }
    class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.

    // private.
    void OpenAvrilConcurrency::Output::create_ptr_Output_Control()
    {
        set_ptr_Output_Control(new class OpenAvrilConcurrency::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Output::create_in_praiseEventId()
    {
        set_in_praiseEventId(255);
    }
    void OpenAvrilConcurrency::Output::create_in_playerId()
    {
        set_in_playerId(255);
    }
    void OpenAvrilConcurrency::Output::create_list_Of_Praise_In_Subsets(OpenAvrilConcurrency::Object* newDEFAULT_Object)
    {
        std::list<OpenAvrilConcurrency::Object*> _list_Of_Praise_In_Subsets = { NULL };//NUMBER OF PRAISES.
        create_ptr_list_Of_Praise_In_Subsets();
        while (get_ptr_list_Of_Praise_In_Subsets() == NULL) {}
        for (uint8_t praiseID = 0; praiseID < get_Lenght_Of_list_Of_Praise_In_Subsets(); praiseID++)
        {
            auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
            std::advance(temp, praiseID);
            *temp = newDEFAULT_Object;
            while (get_ptr_Item_On_list_Of_Praise_In_Subsets(praiseID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Output::create_ptr_list_Of_Praise_In_Subsets()
    {
        _ptr_list_Of_Praise_In_Subsets = &_list_Of_Praise_In_Subsets;
    }
    void OpenAvrilConcurrency::Output::initialise_Control()
    {
        set_ptr_Output_Control(new class OpenAvrilConcurrency::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Output::initialise_list_Of_Praise_In_Subsets()
    {
        set_Subset_OutputBuffer(new class OpenAvrilConcurrency::Praise0_Output());
    }

    // get.
    uint8_t OpenAvrilConcurrency::Output::get_Lenght_Of_list_Of_Praise_In_Subsets()
    {
        return sizeof(_list_Of_Praise_In_Subsets);
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::get_ptr_list_Of_Praise_In_Subsets()
    {
        return _ptr_list_Of_Praise_In_Subsets;
    }
    // set.
    void OpenAvrilConcurrency::Output::set_in_praiseEventId(uint8_t value)
    {
        _out_praiseEventId = value;
    }
    void OpenAvrilConcurrency::Output::set_in_playerId(uint8_t value)
    {
        _out_playerId = value;
    }
    void OpenAvrilConcurrency::Output::set_ptr_Output_Control(Output_Control* newClass)
    {
        _ptr_Output_Control = newClass;
    }
    void OpenAvrilConcurrency::Output::set_Subset_OutputBuffer(OpenAvrilConcurrency::Praise0_Output* praise0_Output)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(praise0_Output);
        while (*temp == NULL) {}
    }
