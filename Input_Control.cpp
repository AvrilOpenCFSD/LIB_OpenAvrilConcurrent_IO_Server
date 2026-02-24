#include "pch.h"
// classes.

// registers.

// pointers.

// constructor.

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.
// calsses.

// registers.

// constructor.
    OpenAvrilConcurrency::Input_Control::Input_Control()
    {

    }

// destructor.
    OpenAvrilConcurrency::Input_Control::~Input_Control()
    {

    }

// public.
    void OpenAvrilConcurrency::Input_Control::select_And_Aet_Input_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
    {
        switch (praiseEventId)
        {
        case 0:
            obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_Subset_InputBuffer(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise0_Input());
            break;
        }
    }
    // get.
    // set.

// private.
    // get.
    // set.