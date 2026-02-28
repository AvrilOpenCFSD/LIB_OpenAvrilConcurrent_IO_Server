#include "pch.h"
// enums.
    enum Axis { X, Y, Z };
    enum Praise
    {
        ADDER
    };

// pointers.
    // classes.
    // registers.
    uint8_t* OpenAvrilConcurrency::Global::_ptr_number_Of_Implemented_Cores = NULL;
    uint8_t* OpenAvrilConcurrency::Global::_ptr_number_Of_Praise_Events = NULL;
    
// constructor.
    OpenAvrilConcurrency::Global::Global()
    {
        uint8_t* newDEFAULT_Value = new uint8_t(NULL);
        while (newDEFAULT_Value == NULL) { }
        *newDEFAULT_Value = uint8_t(UINT8_MAX);
        stat_create_number_Of_Implemented_Cores(newDEFAULT_Value);
        stat_create_number_Of_Praise_Events(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilConcurrency::Global::~Global()
    {
        delete _ptr_number_Of_Implemented_Cores;
        delete _ptr_number_Of_Praise_Events;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Global::initialise_number_Of_Implemented_Cores(uint8_t* newINITIALISED_Value)
    {
        stat_set_number_Of_Implemented_Cores(newINITIALISED_Value);
    }
    void OpenAvrilConcurrency::Global::initialise_number_Of_Praise_Events(uint8_t* newINITIALISED_Value)
    {
        stat_set_number_Of_Praise_Events(newINITIALISED_Value);
    }
        // get.
    uint8_t OpenAvrilConcurrency::Global::get_number_Of_Implemented_Cores()
    {
        return stat_get_number_Of_Implemented_Cores();
    }
    uint8_t OpenAvrilConcurrency::Global::_get_number_Of_Praise_Events()
    {
        return stat_get_number_Of_Praise_Events();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Global::stat_create_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value)
    {
        stat_set_number_Of_Implemented_Cores(new uint8_t(UINT8_MAX));
        while(stat_get_number_Of_Implemented_Cores() == NULL) { }
        stat_set_number_Of_Implemented_Cores(newDEFAULT_Value);
    }
    void OpenAvrilConcurrency::Global::stat_create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value)
    {
        stat_set_number_Of_Implemented_Cores(new uint8_t(UINT8_MAX));
        while (stat_get_number_Of_Praise_Events() == NULL) {}
        stat_set_number_Of_Praise_Events(newDEFAULT_Value);
    }
        // get.
    uint8_t OpenAvrilConcurrency::Global::stat_get_number_Of_Implemented_Cores()
    {
        return *_ptr_number_Of_Implemented_Cores;
    }
    uint8_t OpenAvrilConcurrency::Global::stat_get_number_Of_Praise_Events()
    {
        return *_ptr_number_Of_Praise_Events;
    }
        // set.
    void OpenAvrilConcurrency::Global::stat_set_number_Of_Implemented_Cores(uint8_t* newValue)
    {
        *_ptr_number_Of_Implemented_Cores = *newValue;
    }
    void OpenAvrilConcurrency::Global::stat_set_number_Of_Praise_Events(uint8_t* newValue)
    {
        *_ptr_number_Of_Praise_Events = *newValue;
    }