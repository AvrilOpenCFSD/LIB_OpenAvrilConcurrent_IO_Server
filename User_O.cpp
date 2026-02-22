#include "pch.h"
// calsses.
	class OpenAvrilConcurrency::Praise0_Output* ptr_Praise0_Output = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilConcurrency::User_O::User_O()
	{
		create_Praise0_Output();
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
	void OpenAvrilConcurrency::User_O::create_Praise0_Output()
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