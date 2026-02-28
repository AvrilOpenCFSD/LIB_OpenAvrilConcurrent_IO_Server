#include "pch.h"
// classes.

// registers.

// pointers.

// constructor.
    OpenAvrilConcurrency::Input_Control::Input_Control()
    {

    }

// destructor.
    OpenAvrilConcurrency::Input_Control::~Input_Control()
    {

    }

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
    void OpenAvrilConcurrency::Input_Control::select_And_Set_Input_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
    {
        switch (praiseEventId)
        {
        case 0:
            obj->get_ptr_Server()->get_ptr_Data()->get_ptr_array_Of_doubleBuffer_Input_WRITE()->set_Subset_With_InputSubet(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_ptr_Praise0_Input());
            break;
        }
    }
        // get.
        // set.
    // static.
        // get.
        // set.