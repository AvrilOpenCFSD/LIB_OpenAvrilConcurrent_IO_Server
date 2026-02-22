#include "pch.h"
// calsses.
	class OpenAvril::Praise0_Output* ptr_Praise0_Output = NULL;

// registers.

// pointers.

// constructor.
	OpenAvril::User_O::User_O()
	{
		create_Praise0_Output();
	}

// destructor.
	OpenAvril::User_O::~User_O()
	{
		delete ptr_Praise0_Output;
	}

// public.
	// get.
	class OpenAvril::Praise0_Output* OpenAvril::User_O::get_Praise0_Output()
	{
		return ptr_Praise0_Output;
	}
	// set.

// private.
	void OpenAvril::User_O::create_Praise0_Output()
	{
		set_Praise0_Output(new class OpenAvril::Praise0_Output());
		while (get_Praise0_Output() == NULL) {}
	}
	// get.
	// set.
	void OpenAvril::User_O::set_Praise0_Output(OpenAvril::Praise0_Output* praise0_O)
	{
		ptr_Praise0_Output = praise0_O;
	}