#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Framework
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_SERVER_Framework();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Framework();

// public.
    // dynamic.
        void initialise(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        // get.
        class LaunchEnableForConcurrentThreadsAt_SERVER* get_ptr_LaunchConcurrency();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynaminc.
        // get.
        // set.
    // static.
        static void stat_create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_SERVER* stat_get_ptr_LaunchConcurrency();
        // set.
        static void stat_set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_SERVER* concurrentQue);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_SERVER* _ptr_LaunchConcurrency;
        // registers.
    };
}