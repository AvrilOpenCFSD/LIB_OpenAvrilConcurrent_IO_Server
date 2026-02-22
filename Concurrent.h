#pragma once

namespace OpenAvril
{
    class Concurrent
    {
// calsses.

// registers.

    public:
// constructor.
        Concurrent();

// destructor.
        virtual ~Concurrent();

// public.
        void do_Concurrent_Algorithm_For_PraiseEventId(class Framework_Server* obj, char playerId, uint8_t ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void initialise_Control();
    // get.
        class Concurrent_Control* get_ptr_Concurrent_Control();
        class Object* get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
        std::list<class Object*>* get_ptr_list_Of_ptr_Algorithms_Subset();
    // set.

    // static.
        static void thread_Concurrency(class Framework_Server* obj, uint8_t concurrent_threadID);

    private:
// private.
        void create_ptr_Concurrent_Control();
        void create_list_Of_ptr_Algorithms_Subset();
        void create_ptr_list_Of_ptr_Algorithms_Subset();
    // get.
    // set.
        void set_ptr_Concurrent_Control(class Concurrent_Control* newClass);
        void set_Algorithm_Subset(class Praise0_Algorithm* praise0_algorithm);
    };
}