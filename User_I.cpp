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
	OpenAvrilConcurrency::Praise0_Input* ptr_Praise0_Input = NULL;

// constructor.
	OpenAvrilConcurrency::User_I::User_I()
	{
		create_Praise0_Input();
	}

// destructor.
	OpenAvrilConcurrency::User_I::~User_I()
	{
		delete ptr_Praise0_Input;
	}

// public.
	// get.
	OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_I::get_Praise0_Input()
	{
		return ptr_Praise0_Input;
	}
	// set.

// private.
	void OpenAvrilConcurrency::User_I::create_Praise0_Input()
	{
		set_Praise0_Input(new class OpenAvrilConcurrency::Praise0_Input());
		while (get_Praise0_Input() == NULL) {}
	}
	// get.
	// set.
	void OpenAvrilConcurrency::User_I::set_Praise0_Input(OpenAvrilConcurrency::Praise0_Input* praise0_I)
	{
		ptr_Praise0_Input = praise0_I;
	}
