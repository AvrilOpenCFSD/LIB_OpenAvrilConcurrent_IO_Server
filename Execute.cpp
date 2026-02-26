#include "pch.h"
// pointers.
    // programs.

    // registers.

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
    OpenAvrilConcurrency::Execute_Control* _ptr_Execute_Control = NULL;

// registers.
    std::list<std::thread*> _list_Of_Threads = { NULL };

// pointers.
    std::list<std::thread*>* _ptr_list_Of_Threads =  NULL;
    // programgs.
    OpenAvrilConcurrency::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server = NULL;
    OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnableStack_ServerInputAction = NULL;
    OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnableStack_ServerOutputRecieve = NULL;

// constructor.
    OpenAvrilConcurrency::Execute::Execute()
    {
        std::thread* newDEFAULT_Thread = new std::thread(NULL);
        create_list_Of_Threads(newDEFAULT_Thread);
    }

// desructor.
    OpenAvrilConcurrency::Execute::~Execute()
{
    delete _ptr_Execute_Control;
    delete _ptr_list_Of_Threads;
    delete _program_ConcurrentQue_Server;
    delete _program_WriteEnableStack_ServerInputAction;
    delete _program_WriteEnableStack_ServerOutputRecieve;
}

// public.
    void OpenAvrilConcurrency::Execute::initialise_Control(uint8_t number_Implemented_Cores)
{
    set_ptr_Execute_Control(new class OpenAvrilConcurrency::Execute_Control(number_Implemented_Cores));
    while (get_ptr_Execute_Control() == NULL) { }
}
    void OpenAvrilConcurrency::Execute::initialise_Libraries()
    {
        set_program_ConcurrentQue_Server(static_cast<OpenAvrilConcurrency::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(OpenAvrilConcurrency::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Initialise_LaunchEnableForConcurrentThreadsAt()));
        while (get_program_ConcurrentQue_Server() == NULL) {}

        set_program_WriteEnableStack_ServerInputAction(static_cast<OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*>(OpenAvrilConcurrency::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Initialise_WriteEnable()));
        while (get_program_WriteEnable_ServerInputAction() == NULL) {}

        set_program_WriteEnableStack_ServerOutputRecieve(static_cast<OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*>(OpenAvrilConcurrency::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Initialise_WriteEnable()));
        while (get_program_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::initialise_Threads(OpenAvrilConcurrency::Framework_Server* obj)
    {
        for (uint8_t threadID = 0; threadID < sizeof(_list_Of_Threads); threadID++)
        {
            auto temp = get_ptr_list_Of_Threads()->begin();
            std::advance(temp, threadID);
            *temp = new std::thread(obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(threadID)->thread_Concurrency, obj, threadID);
            while (get_Item_On_ptr_list_Of_Threads(threadID) == NULL) {}
        }
    }
    // get.
    std::thread* OpenAvrilConcurrency::Execute::get_Item_On_ptr_list_Of_Threads(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::get_ptr_Execute_Control()
    {
        return _ptr_Execute_Control;
    }
    OpenAvrilConcurrency::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilConcurrency::Execute::get_program_ConcurrentQue_Server()
    {
        return _program_ConcurrentQue_Server;
    }
    OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerInputAction()
    {
        return _program_WriteEnableStack_ServerInputAction;
    }
    OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerOutputRecieve()
    {
        return _program_WriteEnableStack_ServerOutputRecieve;
    }
    // set.

// private.
    void OpenAvrilConcurrency::Execute::create_list_Of_Threads(std::thread* newDEFAULT_Thread)
    {
        std::list<std::thread*> _list_Of_Threads = { newDEFAULT_Thread, newDEFAULT_Thread, newDEFAULT_Thread, newDEFAULT_Thread };//NUMBER OF THREADS
        create_ptr_list_Of_Threads();
        while (get_ptr_list_Of_Threads() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::create_ptr_list_Of_Threads()
    {
        set_ptr_list_Of_Threads();
    }
    // get.
    std::list<std::thread*> OpenAvrilConcurrency::Execute::get_list_Of_Threads()
    {
        return _list_Of_Threads;
    }
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::get_ptr_list_Of_Threads()
    {
        return _ptr_list_Of_Threads;
    }
    // set.
    void OpenAvrilConcurrency::Execute::set_Item_On_list_Of_Threads(uint8_t threadID, std::thread* thread)
    {
        auto temp = get_list_Of_Threads().begin();
        std::advance(temp, threadID);
        *temp = thread;
    }
    void OpenAvrilConcurrency::Execute::set_program_ConcurrentQue_Server(LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID)
    {
        _program_ConcurrentQue_Server = pgmID;
    }
    void OpenAvrilConcurrency::Execute::set_program_WriteEnableStack_ServerInputAction(WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerInputAction = pgmID;
    }
    void OpenAvrilConcurrency::Execute::set_program_WriteEnableStack_ServerOutputRecieve(WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerOutputRecieve = pgmID;
    }
    void OpenAvrilConcurrency::Execute::set_ptr_Execute_Control(OpenAvrilConcurrency::Execute_Control* execute_Control)
    {
        _ptr_Execute_Control = execute_Control;
    }
    void OpenAvrilConcurrency::Execute::set_ptr_list_Of_Threads()
    {
        _ptr_list_Of_Threads = &_list_Of_Threads;
    }