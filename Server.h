#pragma once

namespace OpenAvrilConcurrency
{
    class Server
    {
    public:
// constructor.
        Server();

// destructor.
        virtual ~Server();

// public.
    // dynamic.
        // get.
        class Algorithms* get_ptr_Algorithms();
        class Data* get_ptr_Data();
        class Execute* get_ptr_Execute();
        class Global* get_ptr_Global();
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
        static void stat_create_ptr_Algorithms();
        static void stat_create_ptr_Data();
        static void stat_create_ptr_Execute();
        static void stat_create_ptr_Global();
        // get.
        static class Algorithms* stat_get_ptr_Algorithms();
        static class Data* stat_get_ptr_Data();
        static class Execute* stat_get_ptr_Execute();
        static class Global* stat_get_ptr_Global();
        // set.
    // pointers.
        // classes.
        // registers.
    };
}