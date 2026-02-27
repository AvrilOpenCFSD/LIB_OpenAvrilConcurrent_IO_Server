#pragma once

namespace OpenAvrilConcurrency
{
    class Server
    {
    public:
// classes.

// registers.

// pointers.

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

// private.
    // dynamic.
        // get.
        // set.
    // static.
        void create_ptr_Algorithms();
        void create_ptr_Data();
        void create_ptr_Execute();
        void create_ptr_Global();
        // get.
        class Algorithms* stat_get_ptr_Algorithms();
        class Data* stat_get_ptr_Data();
        class Execute* stat_get_ptr_Execute();
        class Global* stat_get_ptr_Global();
        // set.
        void stat_set_ptr_Algorithms(class Algorithms* algorithms);
        void stat_set_ptr_Data(class Data* data);
        void stat_set_ptr_Execute(class Execute* execute);
        void stat_set_ptr_Global(class Global* global);
    };
}