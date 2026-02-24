#include "pch.h"
// enums.
    enum Axis { X, Y, Z };
    enum Praise
    {
        ADDER
    };

// classes.

// registers.
    uint8_t _number_Of_Implemented_Cores = NULL;
    uint8_t _number_Of_Praise_Events = NULL;

// constructor.
    OpenAvrilConcurrency::Global::Global()
    {
        create_number_Of_Implemented_Cores();
        create_number_Of_Praise_Events();
    }

// destructor.
    OpenAvrilConcurrency::Global::~Global()
    {
        
    }

// public.
    void OpenAvrilConcurrency::Global::initialise()
    {
        initialise_number_Of_Implemented_Cores();
        initialise_number_Of_Praise_Events();
    }
    // get.
    uint8_t OpenAvrilConcurrency::Global::get_number_Of_Implemented_Cores()
    {
        return _number_Of_Implemented_Cores;
    }
    uint8_t OpenAvrilConcurrency::Global::get_number_Of_Praise_Events()
    {
        return 0;
    }
    // set.

// private.
    void OpenAvrilConcurrency::Global::create_number_Of_Implemented_Cores()
    {
        set_number_Of_Implemented_Cores(uint8_t(255));
    }
    void OpenAvrilConcurrency::Global::create_number_Of_Praise_Events()
    {
        set_number_Of_Praise_Events(uint8_t(255));
    }
    void OpenAvrilConcurrency::Global::initialise_number_Of_Implemented_Cores()
    {
        set_number_Of_Implemented_Cores(uint8_t(4));//NUMBER OF THREADS
    }
    void OpenAvrilConcurrency::Global::initialise_number_Of_Praise_Events()
    {
        set_number_Of_Praise_Events(uint8_t(1));//NUMBER OF PRAISES
    }
    // get.
    // set.
    void OpenAvrilConcurrency::Global::set_number_Of_Implemented_Cores(uint8_t newValue)
{
    _number_Of_Implemented_Cores = newValue;
}
    void OpenAvrilConcurrency::Global::set_number_Of_Praise_Events(uint8_t newValue)
{
    _number_Of_Praise_Events = newValue;
}
