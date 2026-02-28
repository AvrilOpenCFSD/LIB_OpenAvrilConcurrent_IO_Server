#pragma once

namespace OpenAvrilConcurrency
{
    class Concurrent
    {
    public:
// constructor.
        Concurrent();

// destructor.
        virtual ~Concurrent();

// public.
    // dynamic.
        void do_Concurrent_Algorithm_For_PraiseEventId(class Framework_Server* obj, char playerId, uint8_t ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void initialise_Control();
        void initialise_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, class Object* newINITIALISED_Object);
        // get.
        class Concurrent_Control* get_ptr_Concurrent_Control();
        class Object* get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
        std::list<class Object*>* get_ptr_list_Of_ptr_Algorithms_Subset();
        // set.
    // static.
        static void thread_Concurrency(class Framework_Server* obj, uint8_t concurrent_threadID);
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void stat_create_list_Of_ptr_list_Of_ptr_Algorithms_Subset();
        static void stat_create_ptr_Concurrent_Control();
        // get.
        static class Concurrent_Control* stat_get_ptr_Concurrent_Control();
        static class Object* stat_get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
        static std::list<class Object*>* stat_get_ptr_list_Of_ptr_Algorithms_Subset();
        // set.
        static void stat_set_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, class Object* newDEFAULT_Object);
    // pointers.
        // classes.
        static class Concurrent_Control* _ptr_Concurrent_Control;
        // registers.
        static std::list<class Object*>* _ptr_list_Of_ptr_Algorithms_Subset;
    };
}