#include "pch.h"

// calsses.

// registers.

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
	void OpenAvrilConcurrency::Output_Control::selectset_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t ptr_praiseEventId, uint8_t concurrent_threadID)
	{
		switch (ptr_praiseEventId)
		{
		case 0:
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->set_Subset_OutputBuffer(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise0_Output());
			break;
		}
	}
	// get.
	// set.

// private.
	// get.
	// set.