#pragma once

namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
    public:
// constructor.
        Framework_Server();

// destructor.
        virtual ~Framework_Server();

// public.
    // dynamic.
        void initialise_Program(class Framework_Server* obj);
        // get.
        class Server* get_ptr_Server();
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
        static void create_ptr_Server();
        // get.
        static class Server* stat_get_ptr_Server();
        // set.
        static void stat_set_ptr_Server(class Server* server);
    // pointers.
        // classes.
        static Server* _ptr_Server;
        // registers.

    };
}