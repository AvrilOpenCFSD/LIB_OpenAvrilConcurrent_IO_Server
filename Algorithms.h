#pragma once

namespace OpenAvrilConcurrency
{
    class Algorithms
    {
    public:
// constructor.
        Algorithms();

// destructor.
        virtual ~Algorithms();

// public.
    // dynamic.
        void initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newINITIALISED_Concurrent);
        // get.
        class Concurrent* get_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
        class User_Alg* get_ptr_User_Algorithms();
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
        static  void stat_create_ptr_list_Of_ptr_Concurrent(class Concurrent* newDEFAULT_Concurrent);
        static void stat_create_ptr_User_Algorithms();
        // get.
        static class Concurrent* stat_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
        static std::list<class Concurrent*>* stat_get_ptr_list_Of_ptr_Concurrent();
        static class User_Alg* stat_get_ptr_User_Algorithms();
        // set.
        static void stat_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newClass);
        static  void stat_set_ptr_User_Algorithms(class User_Alg* newClass);
    // pointers.
        // classes.
        // registers.
        static std::list<class Concurrent*>* _ptr_list_Of_ptr_Concurrent;
    };
}