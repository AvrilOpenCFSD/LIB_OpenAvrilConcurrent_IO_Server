#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Alg::_ptr_Praise0_Algorithm = NULL;
	// registers.

// constructor.
	OpenAvrilConcurrency::User_Alg::User_Alg()
	{
		std::cout << "entered => User_Alg()" << std::endl;
		stat_create_ptr_Praise0_Algorithm();
		std::cout << "exiting => User_Alg()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Alg::~User_Alg()
	{
		delete _ptr_Praise0_Algorithm;
	}

// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Alg::get_ptr_Praise0_Algorithm()
	{
		return _ptr_Praise0_Algorithm;
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
	void OpenAvrilConcurrency::User_Alg::stat_create_ptr_Praise0_Algorithm()
	{
		stat_set_ptr_Praise0_Algorithm(new class OpenAvrilConcurrency::Praise0_Algorithm());
		while (stat_get_ptr_Praise0_Algorithm() == NULL) {}
	}
		// get.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Alg::stat_get_ptr_Praise0_Algorithm()
	{
		return _ptr_Praise0_Algorithm;
	}
		// set.
	void OpenAvrilConcurrency::User_Alg::stat_set_ptr_Praise0_Algorithm(OpenAvrilConcurrency::Praise0_Algorithm* praise0_A)
	{
		*_ptr_Praise0_Algorithm = *praise0_A;
	}
