#include "pch.h"

// pointers.
    // pointers.
    class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnable_ServerInputAction = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnable_ServerOutputRecieve = NULL;
    // classes.
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::_ptr_Execute_Control = NULL;
    // registers.
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::_ptr_array_Of_ptr_list_Of_Threads = NULL;

// constructor.
    OpenAvrilConcurrency::Execute::Execute()
    {
        std::thread* newDEFAULT_Thread = new std::thread(NULL);
        stat_create_list_Of_Threads(newDEFAULT_Thread);
        delete newDEFAULT_Thread;
    }

// destructor.
    OpenAvrilConcurrency::Execute::~Execute()
    {
        delete _ptr_Execute_Control;
        delete _ptr_array_Of_ptr_list_Of_Threads;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Execute::initialise_Control(uint8_t number_Implemented_Cores)
    {
        set_ptr_Execute_Control(new class OpenAvrilConcurrency::Execute_Control(number_Implemented_Cores));
        while (get_ptr_Execute_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::initialise_Libraries()
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::generate_Program();
        while (get_program_ConcurrentQue_Server() == NULL) {}

        OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnable_ServerInputAction = OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program();
        while (get_program_WriteEnable_ServerInputAction() == NULL) {}

        OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnable_ServerOutputRecieve = OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program();
        while (get_program_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::initialise_Threads(OpenAvrilConcurrency::Framework_Server* obj)
    {
        for (uint8_t threadID = 0; threadID < sizeof(stat_get_ptr_array_Of_ptr_list_Of_Threads()); threadID++)
        {
            auto temp = get_ptr_list_Of_Threads()->begin();
            std::advance(temp, threadID);
            *temp = new std::thread(obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(threadID)->thread_Concurrency, obj, threadID);
            while (get_Item_On_ptr_list_Of_Threads(threadID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Execute::initialise_ptr_array_Of_ptr_list_Of_Threads(uint8_t threadId, std::thread* newINITSIALISED_Thread)
    {
        stat_set_Item_On_array_Of_ptr_list_Of_Threads(threadId, newINITSIALISED_Thread);
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilConcurrency::Execute::get_program_ConcurrentQue_Server()
    {
        return stat_get_program_ConcurrentQue_Server();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerInputAction()
    {
        return stat_get_program_WriteEnable_ServerInputAction();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerOutputRecieve()
    {
        return stat_get_program_WriteEnable_ServerOutputRecieve();
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
    void OpenAvrilConcurrency::Execute::stat_create_ptr_Execute_Control()
    {
        OpenAvrilConcurrency::Execute_Control* _ptr_Execute_Control = new class OpenAvrilConcurrency::Execute_Control();
        while (stat_get_ptr_Execute_Control() == NULL) { }
    }
    void OpenAvrilConcurrency::Execute::stat_create_ptr_array_Of_ptr_list_Of_Threads(std::thread* newDEFAULT_Thread)
    {
        std::list<std::thread*>* _ptr_array_Of_ptr_list_Of_Threads = new std::list<std::thread*>(NULL);
        while (stat_get_ptr_array_Of_ptr_list_Of_Threads() == NULL) { }
        *_ptr_array_Of_ptr_list_Of_Threads = { *newDEFAULT_Thread, *newDEFAULT_Thread, *newDEFAULT_Thread, *newDEFAULT_Thread };
    }
        // get.
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::stat_get_ptr_Execute_Control()
    {
        return _ptr_Execute_Control;
    }
    std::thread* OpenAvrilConcurrency::Execute::stat_get_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadID)
    {
        auto temp = stat_get_ptr_array_Of_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::stat_get_ptr_array_Of_ptr_list_Of_Threads()
    {
        return _ptr_array_Of_ptr_list_Of_Threads;
    }
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::get_ptr_Execute_Control()
    {
        return _ptr_Execute_Control;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilConcurrency::Execute::stat_get_program_ConcurrentQue_Server()
    {
        return _program_ConcurrentQue_Server;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilConcurrency::Execute::stat_get_program_WriteEnable_ServerInputAction()
    {
        return _program_WriteEnable_ServerInputAction;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilConcurrency::Execute::stat_get_program_WriteEnable_ServerOutputRecieve()
    {
        return _program_WriteEnable_ServerOutputRecieve;
    }
        // set.
    void OpenAvrilConcurrency::Execute::stat_set_ptr_Execute_Control(OpenAvrilConcurrency::Execute_Control* newClass)
    {
        *_ptr_Execute_Control = *newClass;
    }
    void OpenAvrilConcurrency::Execute::stat_set_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadID, std::thread* newThread)
    {
        auto temp = stat_get_ptr_array_Of_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
    }
 