#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Global
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_SERVER_Global();

// destructor.
        ~LaunchEnableForConcurrentThreadsAt_SERVER_Global();

// public.
    // dynamic.
        void initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag);
        void initialise_flag_core_IDLE(bool* newINISIALISED_Flag);
        void initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value);
        // get.
        bool get_flag_core_ACTIVE();
        bool get_flag_core_IDLE();
        uint8_t get_number_Implemented_Threads();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_flag_core_ACTIVE(bool* newDEFAULT_Flag);
        static void create_flag_core_IDLE(bool* newDEFAULT_Flag);
        static void create_number_Implemented_Threads(uint8_t* newDEFAULT_Value);
        // get.
        static bool* stat_get_ptr_flag_core_ACTIVE();
        static bool* stat_get_ptr_flag_core_IDLE();
        static uint8_t* stat_get_ptr_number_Implemented_Threads();
        // set.
        static void stat_set_flag_core_ACTIVE(bool value);
        static void stat_set_flag_core_IDLE(bool value);
        static void stat_set_number_Implemented_Threads(uint8_t coreId);
    // pointers.
        // classes.
        // registers.
        static bool* _ptr_flag_core_ACTIVE;
        static bool* _ptr_flag_core_IDLE;
        static uint8_t* _ptr_number_Implemented_Threads;

    };
}
