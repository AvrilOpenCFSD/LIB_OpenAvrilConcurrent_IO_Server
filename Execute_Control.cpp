#include "pch.h"

// calsses.

// registers.
	bool _flag_is_SystemInitialised = NULL;
	std::list<bool> _list_Of_flag_ThreadInitialised = { NULL };

// pointers.
	std::list<bool>* _ptr_list_Of_flag_ThreadInitialised = NULL;

// constructor.
	OpenAvril::Execute_Control::Execute_Control(uint8_t number_Implemented_Cores)
	{
		create_flag_is_SystemInitialised();
		create_list_Of_flag_ThreadInitialised();
	}

// destructor.
	OpenAvril::Execute_Control::~Execute_Control()
	{
		delete _ptr_list_Of_flag_ThreadInitialised;
	}

// public.
	// get.
	bool OpenAvril::Execute_Control::get_flag_is_SystemInitialised()
	{
		set_flag_is_SystemInitialised(false);
		for (uint8_t index = 0; index < get_length_Of_list_Of_flag_ThreadInitialised(); index++)
		{
			if (get_Item_On_list_Of_flag_ThreadInitialised(index) == true)
			{
				set_flag_is_SystemInitialised(true);
			}
		}
		return _flag_is_SystemInitialised;
	}
	bool OpenAvril::Execute_Control::get_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
	uint8_t OpenAvril::Execute_Control::get_length_Of_list_Of_flag_ThreadInitialised()
	{
		return sizeof(_list_Of_flag_ThreadInitialised);
	}
	std::list<bool>* OpenAvril::Execute_Control::get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _ptr_list_Of_flag_ThreadInitialised;
	}
	// set.
	void OpenAvril::Execute_Control::set_ConditionCode_Of_Thread(uint8_t threadID)
	{
		set_Item_On_list_Of_flag_ThreadInitialised(threadID, true);
	}

// private.
	void OpenAvril::Execute_Control::create_flag_is_SystemInitialised()
	{
		set_flag_is_SystemInitialised(new bool(false));
	}
	void OpenAvril::Execute_Control::create_list_Of_flag_ThreadInitialised()
	{
		bool newTemp = new bool(false);
		std::list<bool> _list_Of_flag_ThreadInitialised = { newTemp, newTemp, newTemp, newTemp };//NUMBER OF CONCURRENT THREADS
		create_ptr_list_Of_flag_ThreadInitialised();
	}
	void OpenAvril::Execute_Control::create_ptr_list_Of_flag_ThreadInitialised()
	{
		std::list<bool>* _ptr_list_Of_flag_ThreadInitialised = new std::list<bool>;
		while (get_ptr_list_Of_flag_ThreadInitialised() == NULL) {}
		set_ptr_list_Of_flag_ThreadInitialised(&_list_Of_flag_ThreadInitialised);
	}
	// get.
	// set.
	void OpenAvril::Execute_Control::set_flag_is_SystemInitialised(bool newFlag)
	{
		_flag_is_SystemInitialised = newFlag;
	}
	void OpenAvril::Execute_Control::set_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID, bool newFlag)
	{
		auto temp = get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		*temp = newFlag;
	}
	void OpenAvril::Execute_Control::set_ptr_list_Of_flag_ThreadInitialised(std::list<bool>* newList)
	{
		_ptr_list_Of_flag_ThreadInitialised = newList;
	}
