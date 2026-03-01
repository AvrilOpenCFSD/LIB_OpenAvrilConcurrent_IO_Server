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
        std::cout << "entered constructor of OpenAvrilConcurrency::Global::Global()." << std::endl;
        uint8_t* newDEFAULT_Value = new uint8_t(NULL);
        std::cout << "alpha." << std::endl;
        while (newDEFAULT_Value == NULL) { }
        std::cout << "bravo." << std::endl;
        *newDEFAULT_Value = uint8_t(UINT8_MAX);
        std::cout << "charlie." << std::endl;
        stat_create_number_Of_Implemented_Cores(newDEFAULT_Value);
        std::cout << "delta." << std::endl;
        stat_create_number_Of_Praise_Events(newDEFAULT_Value);
        std::cout << "echo." << std::endl;
        delete newDEFAULT_Value;
        std::cout << "exiting constructor of OpenAvrilConcurrency::Global::Global()." << std::endl;
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
        std::cout << "entered member function OpenAvrilConcurrency::Global::stat_create_number_Of_Implemented_Cores()." << std::endl;
        uint8_t* _ptr_number_Of_Implemented_Cores = new uint8_t(NULL);
        std::cout << "alpha." << std::endl;
        while (_ptr_number_Of_Implemented_Cores == NULL) {}
        std::cout << "bravo." << std::endl;
        *_ptr_number_Of_Implemented_Cores = *newDEFAULT_Value;
        std::cout << "exiting member function OpenAvrilConcurrency::Global::stat_create_number_Of_Implemented_Cores()." << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value)
    {
        std::cout << "entered OpenAvrilConcurrency::Global::stat_create_number_Of_Praise_Events()." << std::endl;
        uint8_t* _ptr_number_Of_Praise_Events = new uint8_t(NULL);
        std::cout << "alpha." << std::endl;
        while (_ptr_number_Of_Praise_Events == NULL) {}
        std::cout << "bravo." << std::endl;
        *_ptr_number_Of_Praise_Events = *newDEFAULT_Value;
        std::cout << "exiting OpenAvrilConcurrency::Global::stat_create_number_Of_Praise_Events()." << std::endl;
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