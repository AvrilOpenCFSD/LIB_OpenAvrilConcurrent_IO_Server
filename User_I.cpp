#include "pch.h"
// calsses.

// registers.
	OpenAvril::Praise0_Input* ptr_Praise0_Input = NULL;

// constructor.
	OpenAvril::User_I::User_I()
	{
		create_Praise0_Input();
	}

// destructor.
	OpenAvril::User_I::~User_I()
	{
		delete ptr_Praise0_Input;
	}

// public.
	// get.
	OpenAvril::Praise0_Input* OpenAvril::User_I::get_Praise0_Input()
	{
		return ptr_Praise0_Input;
	}
	// set.

// private.
	void OpenAvril::User_I::create_Praise0_Input()
	{
		set_Praise0_Input(new class OpenAvril::Praise0_Input());
		while (get_Praise0_Input() == NULL) {}
	}
	// get.
	// set.
	void OpenAvril::User_I::set_Praise0_Input(OpenAvril::Praise0_Input* praise0_I)
	{
		ptr_Praise0_Input = praise0_I;
	}
