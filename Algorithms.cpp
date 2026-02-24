#include "pch.h"

// classes.
    class OpenAvrilConcurrency::User_Alg* _ptr_User_Algorithms = NULL;

// registers.
    std::list<class OpenAvrilConcurrency::Concurrent*> _list_Of_ptr_Concurrent = { NULL };
    
// pointers.
    std::list<class OpenAvrilConcurrency::Concurrent*>* _ptr_list_Of_ptr_Concurrent = &_list_Of_ptr_Concurrent;
    
// constructor.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered => Algorithms()" << std::endl;
		create_ptr_User_Algorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        create_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
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
    void OpenAvrilConcurrency::Algorithms::initialise(OpenAvrilConcurrency::Framework_Server* obj)
    {
        class OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newINITIALISED_Concurrent == NULL) {}
        newINITIALISED_Concurrent->initialise(obj);
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < get_Length_Of_list_Of_ptr_Concurrent(); concurrentThreadID++)
        {
            initialise_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
        }
        delete newINITIALISED_Concurrent;
    }
    // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::get_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t threadID)
    {
        auto temp = _ptr_list_Of_ptr_Concurrent->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    std::list<class OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::get_ptr_list_Of_ptr_Concurrent()
    {
        return _ptr_list_Of_ptr_Concurrent;
    }
    OpenAvrilConcurrency::User_Alg* OpenAvrilConcurrency::Algorithms::get_ptr_User_Algorithms()
    {
        return _ptr_User_Algorithms;
    }
    // set.

// private.
    void OpenAvrilConcurrency::Algorithms::create_list_Of_ptr_Concurrent(class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent)
    {
        std::list<class OpenAvrilConcurrency::Concurrent*> _list_Of_ptr_Concurrent = { newDEFAULT_Concurrent , newDEFAULT_Concurrent, newDEFAULT_Concurrent };
        create_ptr_list_Of_ptr_Concurrent();
        while (get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        for (uint8_t praiseID = 0; praiseID < get_Length_Of_list_Of_ptr_Concurrent(); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_ptr_Concurrent(praiseID) == NULL) {}
        }
    }
    void OpenAvrilConcurrency::Algorithms::create_ptr_User_Algorithms()
    {
        set_ptr_User_Algorithms(new class OpenAvrilConcurrency::User_Alg());
        while (get_ptr_User_Algorithms() == NULL) {}
    }
    void OpenAvrilConcurrency::Algorithms::create_ptr_list_Of_ptr_Concurrent()
    {
        _ptr_list_Of_ptr_Concurrent = &_list_Of_ptr_Concurrent;
        while (get_ptr_list_Of_ptr_Concurrent() == NULL) {}
    }
    void OpenAvrilConcurrency::Algorithms::initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        auto temp = get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newINITIALISED_Concurrent;
    }
    // get.
    uint8_t OpenAvrilConcurrency::Algorithms::get_Length_Of_list_Of_ptr_Concurrent()
    {
        return sizeof(_list_Of_ptr_Concurrent);
    }
    std::list<OpenAvrilConcurrency::Concurrent*> OpenAvrilConcurrency::Algorithms::get_list_Of_ptr_Concurrent()
    {
        return _list_Of_ptr_Concurrent;
    }
    // set.
    void OpenAvrilConcurrency::Algorithms::set_ptr_list_Of_ptr_Concurrent(std::list<class OpenAvrilConcurrency::Concurrent*>* newList)
    {
        _ptr_list_Of_ptr_Concurrent = newList;
    }
    void OpenAvrilConcurrency::Algorithms::set_ptr_User_Algorithms(User_Alg* user_Algorithms)
    {
        _ptr_User_Algorithms = user_Algorithms;
    }