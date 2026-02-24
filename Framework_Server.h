#pragma once

namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
// classes.

// registers.

// pointers.

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






// calsses.

// registers.

    public:
// constructor.
        Framework_Server();

// destructor.
        virtual ~Framework_Server();

// public.
        void initialise_Program(class Framework_Server* obj);
    // get.
        class Server* get_ptr_Server();
    // set.

    private:
// private.
        void create_ptr_Server();
    // get.
    // set.
        void set_ptr_Server(class Server* server);
    };
}