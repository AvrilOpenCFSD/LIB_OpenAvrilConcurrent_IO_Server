#include "pch.h"

// pointers.
    // classes.
    OpenAvrilConcurrency::Algorithms* _ptr_Algorithms = NULL;
    OpenAvrilConcurrency::Data* _ptr_Data = NULL;
    OpenAvrilConcurrency::Execute* _ptr_Execute = NULL;
    OpenAvrilConcurrency::Global* _ptr_Global = NULL;
    // registers.

// constructor.
    OpenAvrilConcurrency::Server::Server()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Server::Server()" << std::endl;
        stat_create_ptr_Global();
        std::cout << "alpha." << std::endl;
        stat_create_ptr_Algorithms();
        std::cout << "bravo." << std::endl;
        stat_create_ptr_Data();
        std::cout << "charlie." << std::endl;
        stat_get_ptr_Data()->initialise_Control();
        std::cout << "delta." << std::endl;
        stat_create_ptr_Execute();
        std::cout << "echo." << std::endl;
        stat_get_ptr_Execute()->initialise_Control(stat_get_ptr_Global()->get_number_Of_Implemented_Cores());
        std::cout << "exiting constructor of OpenAvrilConcurrency::Server::Server()" << std::endl;
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
    // dynamic.
        // get.
        OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::get_ptr_Algorithms()
        {
            return stat_get_ptr_Algorithms();
        }
        OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::get_ptr_Data()
        {
            return stat_get_ptr_Data();
        }
        OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::get_ptr_Execute()
        {
            return stat_get_ptr_Execute();
        }
        OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::get_ptr_Global()
        {
            return stat_get_ptr_Global();
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
    void OpenAvrilConcurrency::Server::stat_create_ptr_Algorithms()
    {
        stat_set_ptr_Algorithms(new class OpenAvrilConcurrency::Algorithms());
        while (stat_get_ptr_Algorithms() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_create_ptr_Data()
    {
        stat_set_ptr_Data(new class OpenAvrilConcurrency::Data());
        while (stat_get_ptr_Data() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_create_ptr_Execute()
    {
        stat_set_ptr_Execute(new class OpenAvrilConcurrency::Execute());
        while (stat_get_ptr_Execute() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_create_ptr_Global()
    {
        stat_set_ptr_Global(new class OpenAvrilConcurrency::Global());
        while (stat_get_ptr_Global() == NULL) {}
    }
        // get.
    OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::stat_get_ptr_Algorithms()
    {
        return _ptr_Algorithms;
    }
    OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::stat_get_ptr_Data()
    {
        return _ptr_Data;
    }
    OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::stat_get_ptr_Execute()
    {
        return _ptr_Execute;
    }
    OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::stat_get_ptr_Global()
    {
        return _ptr_Global;
    }
        // set.
    void OpenAvrilConcurrency::Server::stat_set_ptr_Algorithms(OpenAvrilConcurrency::Algorithms* algorithms)
    {
        *_ptr_Algorithms = *algorithms;
    }
    void OpenAvrilConcurrency::Server::stat_set_ptr_Data(OpenAvrilConcurrency::Data* data)
    {
        *_ptr_Data = *data;
    }
    void OpenAvrilConcurrency::Server::stat_set_ptr_Execute(OpenAvrilConcurrency::Execute* execute)
    {
        *_ptr_Execute = *execute;
    }
    void OpenAvrilConcurrency::Server::stat_set_ptr_Global(OpenAvrilConcurrency::Global* global)
    {
        *_ptr_Global = *global;
    }