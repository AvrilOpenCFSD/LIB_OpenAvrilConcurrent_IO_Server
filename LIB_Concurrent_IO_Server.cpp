// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

// pointers.
	// programs.
	// classes.
	OpenAvrilConcurrency::Framework_Server* _ptr_Framework_Server = NULL;
	// registers.

// constructor.
	OpenAvrilConcurrency::CLIBConcurrentServerIO::CLIBConcurrentServerIO()
	{
		return;
	}

// destructor.

// public.
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::generate_Program()
	{
		stat_set_ptr_Framework_Server(new class OpenAvrilConcurrency::Framework_Server());
		while (stat_get_ptr_Framework_Server() == NULL) {}
		stat_get_ptr_Framework_Server()->initialise_Program(stat_get_ptr_Framework_Server());
		return (void*)stat_get_ptr_Framework_Server();;
	}
	// dynamic.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::initalise_Program(OpenAvrilConcurrency::Framework_Server* obj)
	{
		obj->initialise_Program(obj);
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::flip_Input_DoubleBuffer(OpenAvrilConcurrency::Framework_Server* obj)
	{
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->flip_Input_DoubleBuffer();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isStackLoaded_Server_InputAction(OpenAvrilConcurrency::Framework_Server* obj)
	{
		return obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isLoaded_Stack_OutputSend(OpenAvrilConcurrency::Framework_Server* obj)
	{
		return obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_OutputSend();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(OpenAvrilConcurrency::Framework_Server* obj)
	{
		return obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_flag_is_SystemInitialised();
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerInputAction(OpenAvrilConcurrency::Framework_Server* obj)
	{
		return obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerInputAction();
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerOutputRecieve(OpenAvrilConcurrency::Framework_Server* obj)	
	{
		return obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve();
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::pop_From_Stack_Of_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->pop_From_Stack_Of_Output(obj->get_ptr_Server()->get_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::push_To_Stack_Of_Input(OpenAvrilConcurrency::Framework_Server* obj)
	{
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->push_To_Stack_Of_Input(obj->get_ptr_Server()->get_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::select_set_Intput_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
	{
		obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->get_ptr_Input_Control()->select_And_Set_Input_Subset(obj, praiseEventId);
	}
	uint8_t OpenAvrilConcurrency::CLIBConcurrentServerIO::get_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj)
	{
		return obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Output_WRITE()->get_out_praiseEventId();
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj, uint8_t value)
	{
		obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_in_praiseEventId(value);
	}
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
	OpenAvrilConcurrency::Framework_Server* OpenAvrilConcurrency::CLIBConcurrentServerIO::stat_get_ptr_Framework_Server()
	{
		return _ptr_Framework_Server;
	}
		// set.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::stat_set_ptr_Framework_Server(OpenAvrilConcurrency::Framework_Server* newClass)
	{
		_ptr_Framework_Server = newClass;
	}