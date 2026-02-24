#include "pch.h"

// calsses.
	class OpenAvrilConcurrency::Server* _ptr_Server = NULL;

// registers.

// constructor.
	OpenAvrilConcurrency::Framework_Server::Framework_Server()
	{
		std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;
		create_ptr_Server();
		std::cout << "Created => Created Server Assembly()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::Framework_Server::~Framework_Server()
	{
		delete _ptr_Server;
	}

// public.
	void OpenAvrilConcurrency::Framework_Server::initialise_Program(OpenAvrilConcurrency::Framework_Server* obj)
	{
		obj->get_ptr_Server()->get_ptr_Global()->initialise();
		obj->get_ptr_Server()->get_ptr_Algorithms()->initialise(obj);
		obj->get_ptr_Server()->get_ptr_Data()->initialise(obj);
		//todo:

		std::cout << "entered => OpenAvrilConcurrency::Framework_Server::initialise_Program()" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Libraries();
		std::cout << "INIT Libraries" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Threads(obj);
		std::cout << "INIT Thread(s)" << std::endl;
	}
	// get.
	class OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::get_ptr_Server()
	{
		return _ptr_Server;
	}
	// set.

// private.
	void OpenAvrilConcurrency::Framework_Server::create_ptr_Server()
	{
		set_ptr_Server(new class OpenAvrilConcurrency::Server());
		while (get_ptr_Server() == NULL) { }
	}
	// get.
	// set.
	void OpenAvrilConcurrency::Framework_Server::set_ptr_Server(OpenAvrilConcurrency::Server* server)
	{
		_ptr_Server = server;
	}