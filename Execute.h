#pragma once

namespace OpenAvrilConcurrency
{
    class Execute
    {
    public:
// constructor.
        Execute();

// destructor.
        virtual ~Execute();

// public.
    // dynamic.
        void initialise_Control(uint8_t number_Implemented_Cores);
        void initialise_Libraries();
        void initialise_Threads(class Framework_Server* obj);
        void initialise_ptr_array_Of_ptr_list_Of_Threads(uint8_t threadId, std::thread* newINITSIALISED_Thread);
        // get.
        class Execute_Control* get_ptr_Execute_Control();
        class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_program_ConcurrentQue_Server();
        class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_program_WriteEnable_ServerInputAction();
        class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_program_WriteEnable_ServerOutputRecieve();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void stat_create_ptr_Execute_Control();
        static void stat_create_ptr_array_Of_ptr_list_Of_Threads(std::thread* newDEFAULT_Thread);
        // get.
        static class Execute_Control* stat_get_ptr_Execute_Control();
        static std::thread* stat_get_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadId);
        static std::list<std::thread*>* stat_get_ptr_array_Of_ptr_list_Of_Threads();
        static class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* stat_get_program_ConcurrentQue_Server();
        static class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* stat_get_program_WriteEnable_ServerInputAction();
        static class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_get_program_WriteEnable_ServerOutputRecieve();
        // set.
        static void stat_set_ptr_Execute_Control(class Execute_Control* newClass);
        static void stat_set_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadID, std::thread* newThread);
    // pointers.
        // programs.
        static class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server;
        static class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnable_ServerInputAction;
        static class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnable_ServerOutputRecieve;
        // classes.
        static class Execute_Control* _ptr_Execute_Control;
        // registers.
        static std::list<std::thread*>* _ptr_array_Of_ptr_list_Of_Threads;
    };
}