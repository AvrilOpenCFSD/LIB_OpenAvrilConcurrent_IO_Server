#pragma once

namespace OpenAvrilConcurrency
{
    class Execute_Control
    {
    public:
// constructor.
        Execute_Control(uint8_t number_Implemented_Cores);

// destructor.
        virtual ~Execute_Control();

// public.
    // dynamic.
        // get.
        bool get_flag_is_SystemInitialised();
        bool get_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID);
        // set.
        void set_ConditionCode_Of_Thread(uint8_t threadID);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
        
    // static.
        void stat_create_flag_is_SystemInitialised(bool* newDEFAULT_Bool);
        void stat_create_list_Of_flag_ThreadInitialised(bool* newDEFAULT_Bool);
        // get.
        bool stat_get_ptr_flag_is_SystemInitialised();
        static bool stat_get_Item_On_ptr_list_Of_flag_ThreadInitialised(uint8_t threadID);
        static std::array<bool, 4>* stat_get_ptr_list_Of_flag_ThreadInitialised();
        // set.
        void stat_set_flag_is_SystemInitialised(bool* newFlag);
        void set_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID, bool* newFlag);
    // pointers.
        // classes.
        // registers.
        static bool* _ptr_flag_is_SystemInitialised;
        static std::array<bool, 4>* _ptr_list_Of_flag_ThreadInitialised;//NUMBER OF THREADS
    };
}