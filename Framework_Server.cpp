#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Server* _ptr_Server = NULL;
	// registers.

// constructor.
	OpenAvrilConcurrency::Framework_Server::Framework_Server()
	{
		std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;
		stat_create_ptr_Server();
		std::cout << "Created => Created Server Assembly()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::Framework_Server::~Framework_Server()
	{
		delete _ptr_Server;
	}

// public.
	// dynamic.
	void OpenAvrilConcurrency::Framework_Server::initialise_Program(OpenAvrilConcurrency::Framework_Server* obj)
	{
	// server.
		// global.
		uint8_t* newINITIALISED_Value = new uint8_t(UINT8_MAX);
		while (newINITIALISED_Value) {}
		*newINITIALISED_Value = uint8_t(4);
		obj->get_ptr_Server()->get_ptr_Global()->initialise_number_Of_Implemented_Cores(newINITIALISED_Value);
		*newINITIALISED_Value = uint8_t(1);
		obj->get_ptr_Server()->get_ptr_Global()->initialise_number_Of_Praise_Events(newINITIALISED_Value);
		delete newINITIALISED_Value;
		// algorithms.
			// concurrent.
		OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent = new class OpenAvrilConcurrency::Concurrent();
		while (newINITIALISED_Concurrent == NULL) {}
		newINITIALISED_Concurrent->initialise_Control();
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof((obj->get_ptr_Server()->get_ptr_Global()->get_number_Of_Implemented_Cores() - 1)); concurrentThreadID++)
		{
			obj->get_ptr_Server()->get_ptr_Algorithms()->initialise_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
		}
		delete newINITIALISED_Concurrent;
		// data.
			// input.
		OpenAvrilConcurrency::Input* newINITIALISED_Input = new class OpenAvrilConcurrency::Input();
		while (newINITIALISED_Input == NULL) {}
		newINITIALISED_Input->initialise_Control();
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_Server()->get_ptr_Global()->get_number_Of_Implemented_Cores() - 1); concurrentThreadID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
		}
		for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_array_Of_doubleBuffer_Input(sideID, newINITIALISED_Input);
		}
		for (uint8_t slotID = 0; slotID < obj->get_ptr_Server()->get_ptr_Global()->_get_number_Of_Praise_Events(); slotID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_vector_Of_stack_Of_InputPraise(slotID, newINITIALISED_Input);
		}
		delete newINITIALISED_Input;
			// output.
		OpenAvrilConcurrency::Output* newINITIALISED_Output = new class OpenAvrilConcurrency::Output();
		while (newINITIALISED_Output == NULL) {}
		newINITIALISED_Output->initialise_Control();
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_Server()->get_ptr_Global()->get_number_Of_Implemented_Cores() - 1); concurrentThreadID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newINITIALISED_Output);
		}
		for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_array_Of_doubleBuffer_Output(sideID, newINITIALISED_Output);
		}
		for (uint8_t slotID = 0; slotID < obj->get_ptr_Server()->get_ptr_Global()->_get_number_Of_Praise_Events(); slotID++)
		{
			obj->get_ptr_Server()->get_ptr_Data()->initialise_Item_On_vector_Of_stack_Of_OutputPraise(slotID, newINITIALISED_Output);
		}
		delete newINITIALISED_Output;
		
		//todo:
		
		
		


		std::cout << "entered => OpenAvrilConcurrency::Framework_Server::initialise_Program()" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Libraries();
		std::cout << "INIT Libraries" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Threads(obj);
		std::cout << "INIT Thread(s)" << std::endl;
	}
		// get.
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::get_ptr_Server()
	{
		return stat_get_ptr_Server();
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
	void OpenAvrilConcurrency::Framework_Server::stat_create_ptr_Server()
	{
		stat_set_ptr_Server(new class OpenAvrilConcurrency::Server());
		while (stat_get_ptr_Server() == NULL) {}
	}
		// get.
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::stat_get_ptr_Server()
	{
		return _ptr_Server;
	}
		// set.
	void OpenAvrilConcurrency::Framework_Server::stat_set_ptr_Server(OpenAvrilConcurrency::Server* server)
	{
		*_ptr_Server = *server;
	}