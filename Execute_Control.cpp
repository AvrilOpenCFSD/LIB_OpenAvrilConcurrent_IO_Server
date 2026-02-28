#include "pch.h"

// pointers.
	// classes.
	// registers.
	bool* OpenAvrilConcurrency::Execute_Control::_ptr_flag_is_SystemInitialised = NULL;
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::_ptr_list_Of_flag_ThreadInitialised = { NULL };//NUMBER OF THREADS

// constructor.
	OpenAvrilConcurrency::Execute_Control::Execute_Control(uint8_t number_Implemented_Cores)
	{
		bool* newDEFAULT_Bool = new bool(true);
		while (newDEFAULT_Bool == NULL) {}
		stat_create_flag_is_SystemInitialised(newDEFAULT_Bool);
		stat_create_list_Of_flag_ThreadInitialised(newDEFAULT_Bool);
		delete newDEFAULT_Bool;
	}

// destructor.
	OpenAvrilConcurrency::Execute_Control::~Execute_Control()
	{
		delete _ptr_flag_is_SystemInitialised;
	}

// public.
	// dynamic.
		// get.
	bool OpenAvrilConcurrency::Execute_Control::get_flag_is_SystemInitialised()
	{
		stat_set_flag_is_SystemInitialised(new bool(false));
		for (uint8_t index = 0; index < sizeof(stat_get_ptr_flag_is_SystemInitialised()); index++)
		{
			if (stat_get_Item_On_ptr_list_Of_flag_ThreadInitialised(index) == true)
			{
				stat_set_flag_is_SystemInitialised(new bool(true));
			}
		}
		return stat_get_ptr_flag_is_SystemInitialised();
	}
	bool OpenAvrilConcurrency::Execute_Control::get_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
		// set.
	void OpenAvrilConcurrency::Execute_Control::set_ConditionCode_Of_Thread(uint8_t threadID)
	{
		set_Item_On_list_Of_flag_ThreadInitialised(threadID, new bool(true));
	}
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::Execute_Control::stat_create_flag_is_SystemInitialised(bool* newDEFAULT_Bool)
	{
		bool* _ptr_flag_is_SystemInitialised = new bool(true);
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == NULL) { }
	}
	void OpenAvrilConcurrency::Execute_Control::stat_create_list_Of_flag_ThreadInitialised(bool* newDEFAULT_Bool)
	{
		std::array<bool, 4>* _ptr_list_Of_flag_ThreadInitialised = new std::array<bool, 4>();//NUMBER OF THREADS
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == NULL) {}
		*_ptr_list_Of_flag_ThreadInitialised = { *newDEFAULT_Bool, *newDEFAULT_Bool, *newDEFAULT_Bool, *newDEFAULT_Bool };//NUMBER OF THREADS
	}
		// get.
	bool OpenAvrilConcurrency::Execute_Control::stat_get_ptr_flag_is_SystemInitialised()
	{
		return _ptr_flag_is_SystemInitialised;
	}
	bool OpenAvrilConcurrency::Execute_Control::stat_get_Item_On_ptr_list_Of_flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::stat_get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _ptr_list_Of_flag_ThreadInitialised;
	}
		// set.
	void OpenAvrilConcurrency::Execute_Control::stat_set_flag_is_SystemInitialised(bool* newFlag)
	{
		*_ptr_flag_is_SystemInitialised = *newFlag;
	}
	void OpenAvrilConcurrency::Execute_Control::set_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID, bool* newFlag)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		*temp = *newFlag;
	}