#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::User_Alg* _ptr_User_Algorithms = NULL;
    // registers.
    std::list<class OpenAvrilConcurrency::Concurrent*>* _ptr_list_Of_ptr_Concurrent = NULL;

// constructor.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered => Algorithms()" << std::endl;
        stat_create_ptr_User_Algorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        stat_create_ptr_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
        delete newDEFAULT_Concurrent;
        std::cout << "exiting => Algorithms()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _ptr_User_Algorithms;
        delete _ptr_list_Of_ptr_Concurrent;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Algorithms::initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        stat_set_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
    }
        // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::get_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        return stat_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadID);
    }
    OpenAvrilConcurrency::User_Alg* OpenAvrilConcurrency::Algorithms::get_ptr_User_Algorithms()
    {
        return stat_get_ptr_User_Algorithms();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Algorithms::stat_create_ptr_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent)
    {
        std::list<class OpenAvrilConcurrency::Concurrent*>* _list_Of_ptr_Concurrent = new std::list<class OpenAvrilConcurrency::Concurrent*>();
        while (stat_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        *_list_Of_ptr_Concurrent = { newDEFAULT_Concurrent , newDEFAULT_Concurrent, newDEFAULT_Concurrent };
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadID++)
        {
            while (stat_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Algorithms::stat_create_ptr_User_Algorithms()
    {
        class OpenAvrilConcurrency::User_Alg* _ptr_User_Algorithms = new class OpenAvrilConcurrency::User_Alg();
        while (stat_get_ptr_User_Algorithms() == NULL) {}
    }
        // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::stat_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        auto temp = stat_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    std::list<class OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::stat_get_ptr_list_Of_ptr_Concurrent()
    {
        return _ptr_list_Of_ptr_Concurrent;
    }
    OpenAvrilConcurrency::User_Alg* OpenAvrilConcurrency::Algorithms::stat_get_ptr_User_Algorithms()
    {
        return _ptr_User_Algorithms;
    }
        // set.
    void OpenAvrilConcurrency::Algorithms::stat_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newClass)
    {
        auto temp = stat_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Algorithms::stat_set_ptr_User_Algorithms(OpenAvrilConcurrency::User_Alg* newClass)
    {
        *_ptr_User_Algorithms = *newClass;
    }        