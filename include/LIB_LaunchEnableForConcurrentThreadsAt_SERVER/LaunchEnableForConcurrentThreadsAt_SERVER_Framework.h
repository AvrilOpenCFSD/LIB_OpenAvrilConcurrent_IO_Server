#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Framework
    {
// classes.

// registers.

// pointers.

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
        void set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_SERVER* concurrentQue);

    // static.
        static void create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_SERVER* Get_ptr_LaunchConcurrency();
        // set.
        static void Set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_SERVER* concurrentQue);
    };
}