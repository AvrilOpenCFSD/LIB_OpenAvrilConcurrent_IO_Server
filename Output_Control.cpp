#include "pch.h"
// classes.

// registers.

// pointers.

// constructor.
	OpenAvrilConcurrency::Output_Control::Output_Control()
	{
		std::cout << "entered => OpenAvrilConcurrency::Output_Control::Output_Control()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::Output_Control::~Output_Control()
	{

	}

// public.
	// dynamic.
		// get.
		// set.
	void OpenAvrilConcurrency::Output_Control::selectset_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
	{
		switch (praiseEventId)
		{
		case 0:
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_array_Of_doubleBuffer_Output_WRITE()->set_Subset_With_OutputSubet(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_ptr_Praise0_Output()); 
			break;
		}
	}
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