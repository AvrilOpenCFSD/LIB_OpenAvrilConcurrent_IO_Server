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
    // pointers.
        // programs.
        static OpenAvrilConcurrency::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server;
        static OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnableStack_ServerInputAction;
        static OpenAvrilConcurrency::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnableStack_ServerOutputRecieve;
        // classes.
        static OpenAvrilConcurrency::Execute_Control* _ptr_Execute_Control;
        // registers.
        static std::list<std::thread*>* _ptr_list_Of_Threads;




// classes.

// registers.

// pointers

    
// constructor.

// destructor.

// public.
    // get.
        std::thread* get_Item_On_ptr_list_Of_Threads(uint8_t threadID);
        class Execute_Control* get_ptr_Execute_Control();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_program_ConcurrentQue_Server();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_program_WriteEnable_ServerInputAction();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_program_WriteEnable_ServerOutputRecieve();
    //set.

    private:
// privte.
        void stat_create_list_Of_Threads(std::thread* newDEFAULT_Thread);
        void stat_create_ptr_list_Of_Threads();
    // get.
        std::list<std::thread*> get_list_Of_Threads();
        std::list<std::thread*>* get_ptr_list_Of_Threads();
    // set.
        void set_Item_On_list_Of_Threads(uint8_t threadID, std::thread* thread);
        void set_program_ConcurrentQue_Server(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID);
        void set_program_WriteEnableStack_ServerInputAction(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID);
        void set_program_WriteEnableStack_ServerOutputRecieve(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID);
        void set_ptr_Execute_Control(class Execute_Control* execute_Control);
        void set_ptr_list_Of_Threads();
    };
}