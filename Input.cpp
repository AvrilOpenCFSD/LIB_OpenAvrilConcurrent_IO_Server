#include "pch.h"

// calsses.
    OpenAvril::Input_Control* _ptr_Input_Control = NULL;

// registers.
    uint8_t _in_praiseEventId = NULL;
    uint8_t _in_playerId = NULL;
    std::list<OpenAvril::Object*> _list_Of_Praise_In_Subsets = { NULL };

// pointers.
    std::list<OpenAvril::Object*>* _ptr_list_Of_Praise_In_Subsets = NULL;

// constructor.
    OpenAvril::Input::Input()
    {
        create_ptr_Input_Control();
        create_in_praiseEventId();
        create_in_playerId();
        create_list_Of_Praise_In_Subsets();
    }

// destructor.
    OpenAvril::Input::~Input()
    {
        delete _ptr_Input_Control;
        delete _ptr_list_Of_Praise_In_Subsets;
    }

// public.
    void OpenAvril::Input::initialise_Control()
    {
        set_ptr_Input_Control(new class OpenAvril::Input_Control());
        while (get_ptr_Input_Control() == NULL) {}
    }
    // get.
    uint8_t OpenAvril::Input::get_in_praiseEventId()
    {
        return _in_praiseEventId;
    }
    uint8_t OpenAvril::Input::get_in_playerId()
    {
        return _in_playerId;
    }
    class OpenAvril::Input_Control* OpenAvril::Input::get_ptr_Input_Control()
    {
        return _ptr_Input_Control;
    }
    class OpenAvril::Object* OpenAvril::Input::get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.

// private.
    void OpenAvril::Input::create_ptr_Input_Control()
    {
        set_ptr_Input_Control(new class OpenAvril::Input_Control());
        while (get_ptr_Input_Control() == NULL) { }
    }
    void OpenAvril::Input::create_in_praiseEventId()
    {
        set_in_praiseEventId(255);
    }
    void OpenAvril::Input::create_in_playerId()
    {
        set_in_playerId(255);
    }
    void OpenAvril::Input::create_list_Of_Praise_In_Subsets()
    {
        std::list<OpenAvril::Object*> _list_Of_Praise_In_Subsets = { NULL };
        std::list<OpenAvril::Object*>* _ptr_list_Of_Praise_In_Subsets = new std::list<class OpenAvril::Object*>(1);//NUMBER OF PRAISES.
        while(_ptr_list_Of_Praise_In_Subsets == NULL) { }
        for (uint8_t praiseID = 0; praiseID < sizeof(_list_Of_Praise_In_Subsets); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_Praise_In_Subsets(praiseID) == NULL) {}
            auto temp1 = _ptr_list_Of_Praise_In_Subsets->begin();
            std::advance(temp1, praiseID);
            auto temp2 = _list_Of_Praise_In_Subsets.begin();
            std::advance(temp2, praiseID);
            temp2 = temp1;
        }
        create_ptr_list_Of_Praise_In_Subsets();
        set_Subset_InputBuffer(new class OpenAvril::Praise0_Input());
    }
    void OpenAvril::Input::create_ptr_list_Of_Praise_In_Subsets()
    {
        _ptr_list_Of_Praise_In_Subsets = &_list_Of_Praise_In_Subsets;
    }
    // get.
    uint8_t OpenAvril::Input::get_lenght_Of_list_Of_Praise_In_Subsets()
    {
        return sizeof(_list_Of_Praise_In_Subsets);
    }
    // set.
    void OpenAvril::Input::set_in_praiseEventId(uint8_t value)
    {
        _in_praiseEventId = value;
    }
    void OpenAvril::Input::set_in_playerId(uint8_t value)
    {
        _in_playerId = value;
    }
    void OpenAvril::Input::set_ptr_Input_Control(Input_Control* newClass)
    {
        _ptr_Input_Control = newClass;
    }
    void OpenAvril::Input::set_Subset_InputBuffer(OpenAvril::Praise0_Input* praise0_value)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvril::Object*>(praise0_value);
        while(*temp == NULL) { }
    }
