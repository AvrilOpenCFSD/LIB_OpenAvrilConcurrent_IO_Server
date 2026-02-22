#include "pch.h"

// calsses.

// registers.

// constructor.
    OpenAvril::Input_Control::Input_Control()
    {

    }

// destructor.
    OpenAvril::Input_Control::~Input_Control()
    {

    }

// public.
    void OpenAvril::Input_Control::Selectset_Input_Subset(OpenAvril::Framework_Server* obj, uint8_t praiseEventId)
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