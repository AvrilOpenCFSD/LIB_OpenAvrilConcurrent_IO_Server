#include "pch.h"

// classes.
    class OpenAvril::Algorithms* _ptr_Algorithms = NULL;
    class OpenAvril::Data* _ptr_Data = NULL;
    class OpenAvril::Execute* _ptr_Execute = NULL;
    class OpenAvril::Global* _ptr_Global = NULL;

// registers.

// constructor.
    OpenAvril::Server::Server()
    {
		create_ptr_Global();
		create_ptr_Algorithms();
		create_ptr_Data();
        get_ptr_Data()->initialise_Control(get_ptr_Data());
		create_ptr_Execute();
        get_ptr_Execute()->initialise_Control(get_ptr_Global()->get_number_Of_Implemented_Cores());
    }

// destructor.
    OpenAvril::Server::~Server()
    {
        delete _ptr_Global;
        delete _ptr_Algorithms;
        delete _ptr_Data;
        delete _ptr_Execute;
    }

// public.
    void OpenAvril::Server::create_ptr_Algorithms()
    {
		set_ptr_Algorithms(new class OpenAvril::Algorithms());
        while (get_ptr_Algorithms() == NULL) { }
    }
    void OpenAvril::Server::create_ptr_Data()
    {
		set_ptr_Data(new class OpenAvril::Data());
		while (get_ptr_Data() == NULL) {}
    }
    void OpenAvril::Server::create_ptr_Execute()
    {
		set_ptr_Execute(new class OpenAvril::Execute());
		while (get_ptr_Execute() == NULL) {}
    }
    void OpenAvril::Server::create_ptr_Global()
    {
		set_ptr_Global(new class OpenAvril::Global());
		while (get_ptr_Global() == NULL) {}
    }
    // get.
    OpenAvril::Algorithms* OpenAvril::Server::get_ptr_Algorithms()
    {
        return _ptr_Algorithms;
    }
    OpenAvril::Data* OpenAvril::Server::get_ptr_Data()
    {
        return _ptr_Data;
    }
    OpenAvril::Execute* OpenAvril::Server::get_ptr_Execute()
    {
        return _ptr_Execute;
    }
    OpenAvril::Global* OpenAvril::Server::get_ptr_Global()
    {
        return _ptr_Global;
    }
    // set.

// private.
    // get.
    // set.
    void OpenAvril::Server::set_ptr_Algorithms(OpenAvril::Algorithms* algorithms)
    {
        _ptr_Algorithms = algorithms;
    }
    void OpenAvril::Server::set_ptr_Data(OpenAvril::Data* data)
    {
        _ptr_Data = data;
    }
    void OpenAvril::Server::set_ptr_Execute(OpenAvril::Execute* execute)
    {
        _ptr_Execute = execute;
    }
    void OpenAvril::Server::set_ptr_Global(OpenAvril::Global* global)
    {
        _ptr_Global = global;
    }