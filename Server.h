#pragma once

namespace OpenAvril
{
    class Server
    {
// calsses.

// registers.

    public:
// constructor.
        Server();

// destructor.
        virtual ~Server();

// public.
		void create_ptr_Algorithms();
		void create_ptr_Data();
		void create_ptr_Execute();
		void create_ptr_Global();
    // get.
        class Algorithms* get_ptr_Algorithms();
        class Data* get_ptr_Data();
        class Execute* get_ptr_Execute();
        class Global* get_ptr_Global();
    // set.

    private:
// private.
    // get.
    // set.
        void set_ptr_Algorithms(class Algorithms* algorithms);
        void set_ptr_Data(class Data* data);
        void set_ptr_Execute(class Execute* execute);
        void set_ptr_Global(class Global* global);
    };
}