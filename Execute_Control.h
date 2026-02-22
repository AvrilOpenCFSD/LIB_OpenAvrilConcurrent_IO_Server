#pragma once

namespace OpenAvril
{
    class Execute_Control
    {
// calsses.

// registers.

    public:
// constructor.
        Execute_Control(uint8_t number_Implemented_Cores);

// destructor.
        virtual ~Execute_Control();

// public.
    // get.
        bool get_flag_is_SystemInitialised();
        bool get_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID);
        uint8_t get_length_Of_list_Of_flag_ThreadInitialised();
        std::list<bool>* get_ptr_list_Of_flag_ThreadInitialised();
    // set.
        void set_ConditionCode_Of_Thread(uint8_t threadID);

    private:
// private.
        void create_flag_is_SystemInitialised();
        void create_list_Of_flag_ThreadInitialised();
        void create_ptr_list_Of_flag_ThreadInitialised();
    // get.
    // set.
        void set_flag_is_SystemInitialised(bool newFlag);
        void set_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID, bool newFlag);
        void set_ptr_list_Of_flag_ThreadInitialised(std::list<bool>* newList);
    };
}