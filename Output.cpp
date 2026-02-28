#include "pch.h"

// pointers.
    // calsses.
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::_ptr_Output_Control = NULL;
    // registers.
    uint8_t* OpenAvrilConcurrency::Output::_ptr_out_praiseEventId = NULL;
    uint8_t* OpenAvrilConcurrency::Output::_ptr_out_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::_ptr_list_Of_Praise_Out_Subsets = { NULL };

// constructor.
    OpenAvrilConcurrency::Output::Output()
    {
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        while (newDEFAULT_uint8_t == NULL) {}
        stat_create_ptr_out_playerId(newDEFAULT_uint8_t);
        stat_create_ptr_out_praiseEventId(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        Object* newDEFAULT_Object;
        while (newDEFAULT_Object == NULL) {}
        stat_create_ptr_list_Of_Praise_Out_Subsets(newDEFAULT_Object);
        delete newDEFAULT_Object;
    }

// destructor.
    OpenAvrilConcurrency::Output::~Output()
    {
        delete _ptr_Output_Control;
        delete _ptr_out_praiseEventId;
        delete _ptr_out_playerId;
        delete _ptr_list_Of_Praise_Out_Subsets;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Output::intitialise_Control()
    {
        stat_create_ptr_Output_Control();
    }
    void OpenAvrilConcurrency::Output::intitialise_list_Of_Praise_Out_Subsets(Framework_Server* obj)
    {
        set_Subset_With_OutputSubet(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_ptr_Praise0_Output());
    }
        // get.
    uint8_t OpenAvrilConcurrency::Output::get_out_praiseEventId()
    {
        return *stat_get_ptr_out_playerId();
    }
    uint8_t OpenAvrilConcurrency::Output::get_out_playerId()
    {
        return *stat_get_ptr_out_praiseEventId();
    }
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::get_ptr_Output_Control()
    {
        return stat_get_ptr_Output_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_ptr_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID)
    {
        return stat_get_Item_On_list_Of_Praise_Out_Subsets(praiseID);
    }
        // set.
    void OpenAvrilConcurrency::Output::set_Subset_With_OutputSubet(Praise0_Output* praise0_Output)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<class Object*>(praise0_Output);
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Output::stat_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_out_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_get_ptr_out_playerId() == NULL) {}
        *_ptr_out_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_out_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_get_ptr_out_praiseEventId() == NULL) {}
        *_ptr_out_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_create_ptr_Output_Control()
    {
        stat_set_ptr_Output_Control(new class OpenAvrilConcurrency::Output_Control());
        while (stat_get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Output::stat_create_ptr_list_Of_Praise_Out_Subsets(Object* newDEFAULT_Object)
    {
        std::list<class Object*>* _ptr_list_Of_Praise_Out_Subsets = new std::list<class Object*>();
        while (stat_get_ptr_Item_On_list_Of_Praise_Out_Subsets() == NULL) {}
        *_ptr_list_Of_Praise_Out_Subsets = { newDEFAULT_Object };//NUMBER OF PRAISES.
    }
        // get.
    uint8_t* OpenAvrilConcurrency::Output::stat_get_ptr_out_playerId()
    {
        return _ptr_out_playerId;
    }
    uint8_t* OpenAvrilConcurrency::Output::stat_get_ptr_out_praiseEventId()
    {
        return _ptr_out_praiseEventId;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::stat_get_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID)
    {
        auto temp = stat_get_ptr_Item_On_list_Of_Praise_Out_Subsets()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::stat_get_ptr_Item_On_list_Of_Praise_Out_Subsets()
    {
        return _ptr_list_Of_Praise_Out_Subsets;
    }
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_get_ptr_Output_Control()
    {
        return _ptr_Output_Control;
    }
        // set.
    void OpenAvrilConcurrency::Output::stat_set_ptr_out_playerId(uint8_t* new_uint8_t)
    {
        *_ptr_out_playerId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_set_ptr_out_praiseEventId(uint8_t* new_uint8_t)
    {
        *_ptr_out_praiseEventId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_set_ptr_Output_Control(Output_Control* newClass)
    {
        *_ptr_Output_Control = *newClass;
    }
    void OpenAvrilConcurrency::Output::stat_set_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID, Object* newObject)
    {
        auto temp = stat_get_ptr_Item_On_list_Of_Praise_Out_Subsets()->begin();
        std::advance(temp, praiseID);
        *temp = newObject;
    }