#include "pch.h"
// classes.

// registers.

// pointers.

// constructor.

// destructor.

// public.
    // dynamic.
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
        // set.
// classes.
    class OpenAvrilConcurrency::Algorithms* _ptr_Algorithms = NULL;
    class OpenAvrilConcurrency::Data* _ptr_Data = NULL;
    class OpenAvrilConcurrency::Execute* _ptr_Execute = NULL;
    class OpenAvrilConcurrency::Global* _ptr_Global = NULL;

// registers.

// constructor.
    OpenAvrilConcurrency::Server::Server()
    {
		create_ptr_Global();
		create_ptr_Algorithms();
		create_ptr_Data();
        get_ptr_Data()->initialise_Control(get_ptr_Data());
		create_ptr_Execute();
        get_ptr_Execute()->initialise_Control(get_ptr_Global()->get_number_Of_Implemented_Cores());
    }

// destructor.
    OpenAvrilConcurrency::Server::~Server()
    {
        delete _ptr_Global;
        delete _ptr_Algorithms;
        delete _ptr_Data;
        delete _ptr_Execute;
    }

// public.
    void OpenAvrilConcurrency::Server::create_ptr_Algorithms()
    {
		set_ptr_Algorithms(new class OpenAvrilConcurrency::Algorithms());
        while (get_ptr_Algorithms() == NULL) { }
    }
    void OpenAvrilConcurrency::Server::create_ptr_Data()
    {
		set_ptr_Data(new class OpenAvrilConcurrency::Data());
		while (get_ptr_Data() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::create_ptr_Execute()
    {
		set_ptr_Execute(new class OpenAvrilConcurrency::Execute());
		while (get_ptr_Execute() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::create_ptr_Global()
    {
		set_ptr_Global(new class OpenAvrilConcurrency::Global());
		while (get_ptr_Global() == NULL) {}
    }
    // get.
    OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::get_ptr_Algorithms()
    {
        return _ptr_Algorithms;
    }
    OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::get_ptr_Data()
    {
        return _ptr_Data;
    }
    OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::get_ptr_Execute()
    {
        return _ptr_Execute;
    }
    OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::get_ptr_Global()
    {
        return _ptr_Global;
    }
    // set.

// private.
    // get.
    // set.
    void OpenAvrilConcurrency::Server::set_ptr_Algorithms(OpenAvrilConcurrency::Algorithms* algorithms)
    {
        _ptr_Algorithms = algorithms;
    }
    void OpenAvrilConcurrency::Server::set_ptr_Data(OpenAvrilConcurrency::Data* data)
    {
        _ptr_Data = data;
    }
    void OpenAvrilConcurrency::Server::set_ptr_Execute(OpenAvrilConcurrency::Execute* execute)
    {
        _ptr_Execute = execute;
    }
    void OpenAvrilConcurrency::Server::set_ptr_Global(OpenAvrilConcurrency::Global* global)
    {
        _ptr_Global = global;
    }