#include "pch.h"

// pointers.
    // calsses.
    OpenAvrilConcurrency::Input_Control* _ptr_Input_Control = NULL;
    // registers.
    uint8_t* OpenAvrilConcurrency::Input::_ptr_in_praiseEventId = NULL;
    uint8_t* OpenAvrilConcurrency::Input::_ptr_in_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::_ptr_list_Of_Praise_In_Subsets = { NULL };

// constructor.
    OpenAvrilConcurrency::Input::Input()
    {
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        while (newDEFAULT_uint8_t == NULL) {}
        stat_create_ptr_in_playerId(newDEFAULT_uint8_t);
        stat_create_ptr_in_praiseEventId(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        stat_create_ptr_list_Of_Praise_In_Subsets();
    }

// destructor.
    OpenAvrilConcurrency::Input::~Input()
    {
        delete _ptr_Input_Control;
        delete _ptr_list_Of_Praise_In_Subsets;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Input::initialise_Control()
    {
        stat_create_ptr_Input_Control();
    }
    void OpenAvrilConcurrency::Input::initialise_list_Of_Praise_In_Subsets(Framework_Server* obj)
    {
        set_Subset_With_InputSubet(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_ptr_Praise0_Input());
    }
    // get.
    uint8_t OpenAvrilConcurrency::Input::get_in_praiseEventId()
    {
        return *stat_get_ptr_in_praiseEventId();
    }
    uint8_t OpenAvrilConcurrency::Input::get_in_playerId()
    {
        return *stat_get_ptr_in_playerId();
    }
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::get_ptr_Input_Control()
    {
        return stat_get_ptr_Input_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID)
    {
        return stat_get_Item_On_list_Of_Praise_In_Subsets(praiseID);
    }
        // set.
    void OpenAvrilConcurrency::Input::set_Subset_With_InputSubet(Praise0_Input* praise0_Input)
    {
        auto temp = _ptr_list_Of_Praise_In_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<class Object*>(praise0_Input);
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Input::stat_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_in_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_get_ptr_in_playerId() == NULL) {}
        *_ptr_in_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_in_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_get_ptr_in_praiseEventId() == NULL) {}
        *_ptr_in_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_create_ptr_Input_Control()
    {
        stat_set_ptr_Input_Control(new class OpenAvrilConcurrency::Input_Control());
        while (stat_get_ptr_Input_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Input::stat_create_ptr_list_Of_Praise_In_Subsets()
    {
        std::list<class Object*>* _ptr_list_Of_Praise_In_Subsets = new std::list<class Object*>();
        while (stat_get_ptr_Item_On_list_Of_Praise_In_Subsets() == NULL) { }
        _ptr_list_Of_Praise_In_Subsets->resize(1);//NUMBER OF PRAISES.
    }
    // get.
    uint8_t* OpenAvrilConcurrency::Input::stat_get_ptr_in_playerId()
    {
        return _ptr_in_playerId;
    }
    uint8_t* OpenAvrilConcurrency::Input::stat_get_ptr_in_praiseEventId()
    {
        return _ptr_in_praiseEventId;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::stat_get_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID)
    {
        auto temp = stat_get_ptr_Item_On_list_Of_Praise_In_Subsets()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::stat_get_ptr_Item_On_list_Of_Praise_In_Subsets()
    {
        return _ptr_list_Of_Praise_In_Subsets;
    }
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::stat_get_ptr_Input_Control()
    {
        return _ptr_Input_Control;
    }
        // set.
    void OpenAvrilConcurrency::Input::stat_set_ptr_in_playerId(uint8_t* new_uint8_t)
    {
        *_ptr_in_playerId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_set_ptr_in_praiseEventId(uint8_t* new_uint8_t)
    {
        *_ptr_in_praiseEventId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_set_ptr_Input_Control(Input_Control* newClass)
    {
        *_ptr_Input_Control = *newClass;
    }
    void OpenAvrilConcurrency::Input::stat_set_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID, Object* newObject)
    {
        auto temp = stat_get_ptr_Item_On_list_Of_Praise_In_Subsets()->begin();
        std::advance(temp, praiseID);
        *temp = newObject;
    }






