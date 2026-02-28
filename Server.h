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
        static void stat_set_ptr_Algorithms(class Algorithms* algorithms);
        static void stat_set_ptr_Data(class Data* data);
        static void stat_set_ptr_Execute(class Execute* execute);
        static void stat_set_ptr_Global(class Global* global);
    // pointers.
        // classes.
        static class Algorithms* _ptr_Algorithms;
        static class Data* _ptr_Data;
        static class Execute* _ptr_Execute;
        static class Global* _ptr_Global;
        // registers.
    };
}