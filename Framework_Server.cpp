#include "pch.h"

// calsses.
	class OpenAvril::Server* _ptr_Server = NULL;

// registers.

// constructor.
	OpenAvril::Framework_Server::Framework_Server()
	{
		std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;
		create_ptr_Server();
		std::cout << "Created => Created Server Assembly()" << std::endl;
	}

// destructor.
	OpenAvril::Framework_Server::~Framework_Server()
	{
		delete _ptr_Server;
	}

// public.
	void OpenAvril::Framework_Server::initialise_Program(OpenAvril::Framework_Server* obj)
	{
		std::cout << "entered => OpenAvril::Framework_Server::initialise_Program()" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Libraries();
		std::cout << "INIT Libraries" << std::endl;
		obj->get_ptr_Server()->get_ptr_Execute()->initialise_Threads(obj);
		std::cout << "INIT Thread(s)" << std::endl;
	}
	// get.
	class OpenAvril::Server* OpenAvril::Framework_Server::get_ptr_Server()
	{
		return _ptr_Server;
	}
	// set.

// private.
	void OpenAvril::Framework_Server::create_ptr_Server()
	{
		set_ptr_Server(new class OpenAvril::Server());
		while (get_ptr_Server() == NULL) { }
	}
	// get.
	// set.
	void OpenAvril::Framework_Server::set_ptr_Server(OpenAvril::Server* server)
	{
		_ptr_Server = server;
	}