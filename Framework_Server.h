#pragma once

namespace OpenAvril
{
    class Framework_Server
    {
// calsses.

// registers.

    public:
// constructor.
        Framework_Server();

// destructor.
        virtual ~Framework_Server();

// public.
        void initialise_Program(Framework_Server* obj);
    // get.
        class Server* get_ptr_Server();
    // set.

    private:
// private.
        void create_ptr_Server();
    // get.
    // set.
        void set_ptr_Server(Server* server);
    };
}