#include "pch.h"

// classes.
    OpenAvril::Execute_Control* _ptr_Execute_Control = NULL;

// registers.
    std::list<std::thread*> _list_Of_Threads = { NULL };

// pointers.
    std::list<std::thread*>* _ptr_list_Of_Threads =  NULL;
    // programgs.
    OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server = NULL;
    OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnableStack_ServerInputAction = NULL;
    OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnableStack_ServerOutputRecieve = NULL;

// constructor.
    OpenAvril::Execute::Execute()
    {
        create_list_Of_Threads();
    }

// desructor.
    OpenAvril::Execute::~Execute()
{
    delete _ptr_Execute_Control;
    delete _ptr_list_Of_Threads;
    delete _program_ConcurrentQue_Server;
    delete _program_WriteEnableStack_ServerInputAction;
    delete _program_WriteEnableStack_ServerOutputRecieve;
}

// public.
    void OpenAvril::Execute::initialise_Control(uint8_t number_Implemented_Cores)
{
    set_ptr_Execute_Control(new class OpenAvril::Execute_Control(number_Implemented_Cores));
    while (get_ptr_Execute_Control() == NULL) { }
}
    void OpenAvril::Execute::initialise_Libraries()
    {
        set_program_ConcurrentQue_Server(static_cast<OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Initialise_LaunchEnableForConcurrentThreadsAt()));
        while (get_program_ConcurrentQue_Server() == NULL) {}

        set_program_WriteEnableStack_ServerInputAction(static_cast<OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*>(OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Initialise_WriteEnable()));
        while (get_program_WriteEnable_ServerInputAction() == NULL) {}

        set_program_WriteEnableStack_ServerOutputRecieve(static_cast<OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*>(OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Initialise_WriteEnable()));
        while (get_program_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvril::Execute::initialise_Threads(OpenAvril::Framework_Server* obj)
    {
        std::list<std::thread*> _list_Of_Threads = { NULL, NULL, NULL, NULL };
        create_ptr_list_Of_Threads();
        auto temp = get_ptr_list_Of_Threads()->begin();
        std::advance(temp, obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input());
        for (uint8_t threadID = 0; threadID < sizeof(_list_Of_Threads); threadID++)
        {
            *temp = new std::thread(obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(threadID)->thread_Concurrency, obj, threadID);
            while (get_Item_On_ptr_list_Of_Threads(threadID) == NULL) {}
        }
    }
    // get.
    std::thread* OpenAvril::Execute::get_Item_On_ptr_list_Of_Threads(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvril::Execute_Control* OpenAvril::Execute::get_ptr_Execute_Control()
    {
        return _ptr_Execute_Control;
    }
    OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvril::Execute::get_program_ConcurrentQue_Server()
    {
        return _program_ConcurrentQue_Server;
    }
    OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvril::Execute::get_program_WriteEnable_ServerInputAction()
    {
        return _program_WriteEnableStack_ServerInputAction;
    }
    OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvril::Execute::get_program_WriteEnable_ServerOutputRecieve()
    {
        return _program_WriteEnableStack_ServerOutputRecieve;
    }
    // set.

// private.
    void OpenAvril::Execute::create_list_Of_Threads()
    {
        std::list<std::thread*> _list_Of_Threads = { NULL, NULL, NULL, NULL };
        create_ptr_list_Of_Threads();
    }
    void OpenAvril::Execute::create_ptr_list_Of_Threads()
    {
        set_ptr_list_Of_Threads();
    }
    // get.
    std::list<std::thread*> OpenAvril::Execute::get_list_Of_Threads()
    {
        return _list_Of_Threads;
    }
    std::list<std::thread*>* OpenAvril::Execute::get_ptr_list_Of_Threads()
    {
        return _ptr_list_Of_Threads;
    }
    // set.
    void OpenAvril::Execute::set_Item_On_list_Of_Threads(uint8_t threadID, std::thread* thread)
    {
        auto temp = get_list_Of_Threads().begin();
        std::advance(temp, threadID);
        *temp = thread;
    }
    void OpenAvril::Execute::set_program_ConcurrentQue_Server(LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID)
    {
        _program_ConcurrentQue_Server = pgmID;
    }
    void OpenAvril::Execute::set_program_WriteEnableStack_ServerInputAction(WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerInputAction = pgmID;
    }
    void OpenAvril::Execute::set_program_WriteEnableStack_ServerOutputRecieve(WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerOutputRecieve = pgmID;
    }
    void OpenAvril::Execute::set_ptr_Execute_Control(OpenAvril::Execute_Control* execute_Control)
    {
        _ptr_Execute_Control = execute_Control;
    }
    void OpenAvril::Execute::set_ptr_list_Of_Threads()
    {
        _ptr_list_Of_Threads = &_list_Of_Threads;
    }