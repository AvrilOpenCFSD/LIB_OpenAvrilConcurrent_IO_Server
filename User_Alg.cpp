#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Praise0_Algorithm* _ptr_Praise0_Algorithm = NULL;
	// registers.
	std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Alg::_ptr_list_Of_Praise_Alg_Subsets = { NULL };

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
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Alg::get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
	{
		return stat_get_ptr_Item_On_list_Of_Praise_Alg_Subsets(praiseID);
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
	void OpenAvrilConcurrency::User_Alg::stat_create_ptr_list_Of_Praise_Alg_Subsets(Object* newDEFAULT_Object)
	{
	}
		// get.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Alg::stat_get_ptr_Praise0_Algorithm()
	{
		return _ptr_Praise0_Algorithm;
	}
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Alg::stat_get_ptr_Item_On_list_Of_Praise_Alg_Subsets(uint8_t praiseID)
	{
		return nullptr;
	}
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Alg::stat_get_ptr_list_Of_Praise_Alg_Subsets()
	{
		return _ptr_list_Of_Praise_Alg_Subsets;
	}
		// set.
	void OpenAvrilConcurrency::User_Alg::stat_set_ptr_Praise0_Algorithm(OpenAvrilConcurrency::Praise0_Algorithm* praise0_A)
	{
		*_ptr_Praise0_Algorithm = *praise0_A;
	}

	void OpenAvrilConcurrency::User_Alg::stat_set_ptr_Item_On_list_Of_Praise_Alg_Subsets(uint8_t praiseID, OpenAvrilConcurrency::Object* newPtr)
	{
		auto temp = stat_get_ptr_list_Of_Praise_Alg_Subsets()->begin();
		std::advance(temp, praiseID);
		*temp = newPtr;
	}
