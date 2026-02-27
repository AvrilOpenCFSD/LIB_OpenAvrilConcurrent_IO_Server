#pragma once

namespace OpenAvrilConcurrency
{
    class Global
    {
    public:
// constructor.
        Global();

// destructor.
        virtual ~Global();

// public.
    // dynamic.
        void initialise_number_Of_Implemented_Cores(uint8_t* newINITIALISED_Value);
        void initialise_number_Of_Praise_Events(uint8_t* newINITIALISED_Value);
        // get.
        uint8_t get_number_Of_Implemented_Cores();
        uint8_t _get_number_Of_Praise_Events();
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
        static void stat_create_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value);
        static void stat_create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value);
        // get.
        static  uint8_t stat_get_number_Of_Implemented_Cores();
        static uint8_t stat_get_number_Of_Praise_Events();
        // set.
        static void stat_set_number_Of_Implemented_Cores(uint8_t* newValue);
        static void stat_set_number_Of_Praise_Events(uint8_t* newValue);
    // pointers.
        // classes.
        // registers.
        static uint8_t* _ptr_number_Of_Implemented_Cores;
        static uint8_t* _ptr_number_Of_Praise_Events;
    };
}
