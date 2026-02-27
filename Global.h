#pragma once

namespace OpenAvrilConcurrency
{
    class Global
    {
    public:
// classes.

// registers.

// pointers.

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
        void create_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value);
        void create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value);
        // get.
        uint8_t stat_get_number_Of_Implemented_Cores();
        uint8_t stat_get_number_Of_Praise_Events();
        // set.
        void stat_set_number_Of_Implemented_Cores(uint8_t* newValue);
        void stat_set_number_Of_Praise_Events(uint8_t* newValue);
    };
}
