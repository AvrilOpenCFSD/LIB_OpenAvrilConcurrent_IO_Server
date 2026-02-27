#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Praise0_Input* _ptr_Praise0_Input = NULL;
	// registers.
	
// constructor.
	OpenAvrilConcurrency::User_I::User_I()
	{
		stat_create_ptr_Praise0_Input();
	}

// destructor.
	OpenAvrilConcurrency::User_I::~User_I()
	{
		delete _ptr_Praise0_Input;
	}

// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_I::get_ptr_Praise0_Input()
	{
		return _ptr_Praise0_Input;
	}
		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::User_I::stat_create_ptr_Praise0_Input()
	{
		stat_set_ptr_Praise0_Input(new class OpenAvrilConcurrency::Praise0_Input());
		while (get_create_ptr_Praise0_Input() == NULL) {}
	}
		// get.
	OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_I::get_create_ptr_Praise0_Input()
	{
		return _ptr_Praise0_Input;
	}
		// set.
	void OpenAvrilConcurrency::User_I::stat_set_ptr_Praise0_Input(OpenAvrilConcurrency::Praise0_Input* praise0_I)
	{
		*_ptr_Praise0_Input = *praise0_I;
	}