#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_SERVER();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER();

// public.
    // dynamic.
        void initialise_Control(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
        // get.
        class LaunchEnableForConcurrentThreadsAt_SERVER_Global* get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Control* get_ptr_LaunchConcurrency_Control();
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
        static void create_ptr_Global();
        static void create_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        // get.
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* stat_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* stat_get_ptr_LaunchConcurrency_Control();
        // set.
        static void stat_set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_SERVER_Global* newClass);
        static void stat_set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_SERVER_Control* newClass);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_SERVER* _ptr_LaunchConcurrency;
        // registers.
    };
}