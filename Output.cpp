#include "pch.h"

// calsses.
    OpenAvrilConcurrency::Output_Control* _ptr_Output_Control = NULL;

// registers.
    uint8_t _out_praiseEventId = NULL;
    uint8_t _out_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*> _list_Of_Praise_Out_Subsets = { NULL };

// pointers.
    std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_Praise_Out_Subsets = NULL;

    // constructor.
    OpenAvrilConcurrency::Output::Output()
    {
        create_ptr_Output_Control();
        create_out_praiseEventId();
        create_out_playerId();
        create_list_Of_Praise_Out_Subsets();
    }

    // destructor.
    OpenAvrilConcurrency::Output::~Output()
    {
        delete _ptr_Output_Control;
        delete _ptr_list_Of_Praise_Out_Subsets;
    }

    // public.
    void OpenAvrilConcurrency::Output::initialise_Control()
    {
        set_ptr_Output_Control(new class OpenAvrilConcurrency::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
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
    // set.

// private.
    void OpenAvrilConcurrency::Output::create_ptr_Output_Control()
    {
        set_ptr_Output_Control(new class OpenAvrilConcurrency::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Output::create_out_praiseEventId()
    {
        set_out_praiseEventId(255);
    }
    void OpenAvrilConcurrency::Output::create_out_playerId()
    {
        set_out_playerId(255);
    }
    void OpenAvrilConcurrency::Output::create_list_Of_Praise_Out_Subsets()
    {
        std::list<OpenAvrilConcurrency::Object*> _list_Of_Praise_Out_Subsets = { NULL };
        std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_Praise_Out_Subsets = new std::list<class OpenAvrilConcurrency::Object*>(1);//NUMBER OF PRAISES.
        while (_ptr_list_Of_Praise_Out_Subsets == NULL) {}
        for (uint8_t praiseID = 0; praiseID < sizeof(_list_Of_Praise_Out_Subsets); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_Praise_Out_Subsets(praiseID) == NULL) {}
            auto temp1 = _ptr_list_Of_Praise_Out_Subsets->begin();
            std::advance(temp1, praiseID);
            auto temp2 = _list_Of_Praise_Out_Subsets.begin();
            std::advance(temp2, praiseID);
            temp2 = temp1;
        }
        create_ptr_list_Of_Praise_Out_Subsets();
        set_Subset_OutputBuffer(new class OpenAvrilConcurrency::Praise0_Output());
    }
    void OpenAvrilConcurrency::Output::create_ptr_list_Of_Praise_Out_Subsets()
    {
        _ptr_list_Of_Praise_Out_Subsets = &_list_Of_Praise_Out_Subsets;
    }
    // get.
    uint8_t OpenAvrilConcurrency::Output::get_lenght_Of_list_Of_Praise_Out_Subsets()
    {
        return sizeof(_list_Of_Praise_Out_Subsets);
    }
    class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_ptr_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.
    void OpenAvrilConcurrency::Output::set_out_praiseEventId(uint8_t value)
    {
        _out_praiseEventId = value;
    }
    void OpenAvrilConcurrency::Output::set_out_playerId(uint8_t value)
    {
        _out_playerId = value;
    }
    void OpenAvrilConcurrency::Output::set_ptr_Output_Control(Output_Control* newClass)
    {
        _ptr_Output_Control = newClass;
    }
    void OpenAvrilConcurrency::Output::set_Subset_OutputBuffer(OpenAvrilConcurrency::Praise0_Output* praise0_value)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(praise0_value);
        while (*temp == NULL) {}
    }
