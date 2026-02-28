#include "pch.h"

// pointers.
	// classes.	
	class OpenAvrilConcurrency::Praise0_Output* _ptr_Praise0_Output = NULL;
	// registers.

// constructor.
	OpenAvrilConcurrency::User_O::User_O()
	{
		stat_create_ptr_Praise0_Output();
	}

// destructor.
	OpenAvrilConcurrency::User_O::~User_O()
	{
		delete _ptr_Praise0_Output;
	}

	OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_O::get_ptr_Praise0_Output()
	{
		return stat_get_ptr_Praise0_Output();
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
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::User_O::stat_create_ptr_Praise0_Output()
	{
		stat_set_Praise0_ptr_Output(new class OpenAvrilConcurrency::Praise0_Output());
		while (stat_get_ptr_Praise0_Output() == NULL) {}
	}
		// get.
	class OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_O::stat_get_ptr_Praise0_Output()
	{
		return _ptr_Praise0_Output;
	}
		// set.
	void OpenAvrilConcurrency::User_O::stat_set_Praise0_ptr_Output(OpenAvrilConcurrency::Praise0_Output* praise0_O)
	{
		*_ptr_Praise0_Output = *praise0_O;
	}