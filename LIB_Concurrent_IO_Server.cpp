// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

// classes.
	class OpenAvrilConcurrency::Framework_Server* _ptr_Framework_Server;

// registers.
	bool _flag_IsStackLoaded_Server_InputAction;
	bool _flag_IsStackLoaded_Server_OutputRecieve;
	bool _flag_IsInitialised_Avril_FSD_ServerAssembly;
	// Praise Event Id
	uint8_t _PraiseEventId;
	// Praise 0 Data
	uint8_t _input_Value_A;
	uint8_t _input_Value_B;
	// Praise 1 Data

// programs.
	void* programHandleId_WriteEnalbe_ServerInputAction;
	void* programHandleId_WriteEnalbe_ServerOutputRecieve;
	
// constructor.
	OpenAvrilConcurrency::CLIBConcurrentServerIO::CLIBConcurrentServerIO()
	{
	return;
	}

// public.
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::create_Program()
	{
	set_ptr_Framework_Server(new class OpenAvrilConcurrency::Framework_Server());
	while (get_ptr_Framework_Server() == NULL) {}
	get_ptr_Framework_Server()->initialise_Program(get_ptr_Framework_Server());
	return (void*)get_ptr_Framework_Server();;
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::initalise_Programs(OpenAvrilConcurrency::Framework_Server* obj)
	{
	obj->initialise_Program(obj);
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::flip_Input_DoubleBuffer(OpenAvrilConcurrency::Framework_Server* obj)
	{
	obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->flip_Input_DoubleBuffer();
	}

	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isStackLoaded_Server_InputAction(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	_flag_IsStackLoaded_Server_InputAction = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction();
	return _flag_IsStackLoaded_Server_InputAction;
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isLoaded_Stack_OutputSend(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	_flag_IsStackLoaded_Server_OutputRecieve = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_OutputSend();
	return _flag_IsStackLoaded_Server_OutputRecieve;
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	_flag_IsInitialised_Avril_FSD_ServerAssembly = obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_flag_is_SystemInitialised();
	return _flag_IsInitialised_Avril_FSD_ServerAssembly;
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerInputAction()
	{
	return (void*)programHandleId_WriteEnalbe_ServerInputAction;
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerOutputRecieve()
	{
	return (void*)programHandleId_WriteEnalbe_ServerOutputRecieve;
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::pop_From_Stack_Of_Output(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->pop_From_Stack_Of_Output(obj->get_ptr_Server()->get_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::push_To_Stack_Of_Input(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->push_To_Stack_Of_Input(obj->get_ptr_Server()->get_ptr_Data());
	}

	void OpenAvrilConcurrency::CLIBConcurrentServerIO::select_set_Intput_Subset(class OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
	{
	obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->get_ptr_Input_Control()->Selectset_Input_Subset(obj, praiseEventId);
	}

	uint8_t OpenAvrilConcurrency::CLIBConcurrentServerIO::get_PraiseEventId(class OpenAvrilConcurrency::Framework_Server* obj)
	{
	_PraiseEventId = obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Output_WRITE()->get_out_praiseEventId();
	return _PraiseEventId;
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_PraiseEventId(class OpenAvrilConcurrency::Framework_Server* obj, uint8_t value)
	{
	obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_in_praiseEventId(value);
	}



// private.
	// get.
	OpenAvrilConcurrency::Framework_Server* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_ptr_Framework_Server()
	{
		return _ptr_Framework_Server;
	}
	// set.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_ptr_Framework_Server(OpenAvrilConcurrency::Framework_Server* newClass)
	{
		_ptr_Framework_Server = newClass;
	}