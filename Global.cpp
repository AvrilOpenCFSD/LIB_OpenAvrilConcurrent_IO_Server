#include "pch.h"
// enums.
    public enum Axis { X, Y, Z };

// classes.

// registers.
    uint8_t _number_Of_Implemented_Cores = NULL;
    uint8_t _number_Of_Praise_Events = NULL;

// constructor.
    OpenAvril::Global::Global()
    {
        create_number_Of_Implemented_Cores();
        create_number_Of_Praise_Events();
    }

// destructor.
    OpenAvril::Global::~Global()
{
        
}

// public.
    // get.
    uint8_t OpenAvril::Global::get_number_Of_Implemented_Cores()
    {
        return _number_Of_Implemented_Cores;
    }
    uint8_t OpenAvril::Global::get_number_Of_Praise_Events()
    {
        return 0;
    }
    // set.

// private.
    void OpenAvril::Global::create_number_Of_Implemented_Cores()
    {
        set_number_Of_Implemented_Cores(uint8_t(4));//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvril::Global::create_number_Of_Praise_Events()
    {
        set_number_Of_Praise_Events(uint8_t(3));//NUMBER OF PRAISES
    }
    // get.
    // set.
    void OpenAvril::Global::set_number_Of_Implemented_Cores(uint8_t newValue)
{
    _number_Of_Implemented_Cores = newValue;
}
    void OpenAvril::Global::set_number_Of_Praise_Events(uint8_t newValue)
{
    _number_Of_Praise_Events = newValue;
}
