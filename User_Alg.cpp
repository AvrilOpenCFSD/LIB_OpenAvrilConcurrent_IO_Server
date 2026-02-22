#include "pch.h"

// classes.
	OpenAvril::Praise0_Algorithm* ptr_Praise0_Algorithm = NULL;

// registers.

// pointers.

// constructor.
	OpenAvril::User_Alg::User_Alg()
	{
		std::cout << "entered => User_Alg()" << std::endl;
		create_Praise0_Algorithm();
		std::cout << "exiting => User_Alg()" << std::endl;
	}

// destructor.
	OpenAvril::User_Alg::~User_Alg()
{
	delete ptr_Praise0_Algorithm;
}

// public.
	// get.
	OpenAvril::Praise0_Algorithm* OpenAvril::User_Alg::get_Praise0_Algorithm()
{
	return ptr_Praise0_Algorithm;
}
	// set.

// private.
	void OpenAvril::User_Alg::create_Praise0_Algorithm()
{
	set_Praise0_Algorithm(new class OpenAvril::Praise0_Algorithm());
	while (get_Praise0_Algorithm() == NULL) {}
}
	// get.
	// set.
	void OpenAvril::User_Alg::set_Praise0_Algorithm(OpenAvril::Praise0_Algorithm* praise0_A)
{
	ptr_Praise0_Algorithm = praise0_A;
}
