#include "pch.h"
// pointers.
	// classes.
	// registers.

// constructor.
	OpenAvrilConcurrency::Praise0_Algorithm::Praise0_Algorithm()
	{

	}

// destructor.
	OpenAvrilConcurrency::Praise0_Algorithm::~Praise0_Algorithm()
	{

	}

// public.
	// dynamic.
	void OpenAvrilConcurrency::Praise0_Algorithm::Do_Praise(OpenAvrilConcurrency::Praise0_Input* ptr_In_SubSet, OpenAvrilConcurrency::Praise0_Output* ptr_Out_SubSet)
	{
		double temp = (ptr_In_SubSet->get_ptr_input_Value_A() + ptr_In_SubSet->get_ptr_input_Value_B());
		ptr_Out_SubSet->stat_set_output_Value(temp);
	}
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