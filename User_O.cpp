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
	class OpenAvrilConcurrency::Praise0_Output* ptr_Praise0_Output = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilConcurrency::User_O::User_O()
	{
		stat_create_Praise0_Output();
	}

// destructor.
	OpenAvrilConcurrency::User_O::~User_O()
	{
		delete ptr_Praise0_Output;
	}

// public.
	// get.
	class OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_O::get_Praise0_Output()
	{
		return ptr_Praise0_Output;
	}
	// set.

// private.
	void OpenAvrilConcurrency::User_O::stat_create_Praise0_Output()
	{
		set_Praise0_Output(new class OpenAvrilConcurrency::Praise0_Output());
		while (get_Praise0_Output() == NULL) {}
	}
	// get.
	// set.
	void OpenAvrilConcurrency::User_O::set_Praise0_Output(OpenAvrilConcurrency::Praise0_Output* praise0_O)
	{
		ptr_Praise0_Output = praise0_O;
	}