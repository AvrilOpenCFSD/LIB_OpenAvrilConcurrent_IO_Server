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
        create_list_Of_ptr_Concurrent();
        std::cout << "exiting => Algorithms()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _ptr_User_Algorithms;;
        delete _ptr_list_Of_ptr_Concurrent;
    }

// public.
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
    void OpenAvrilConcurrency::Algorithms::create_list_Of_ptr_Concurrent()
    {
        OpenAvrilConcurrency::Concurrent* tempNew = new class OpenAvrilConcurrency::Concurrent();
        while (tempNew == NULL) {}
        std::list<class OpenAvrilConcurrency::Concurrent*> _list_Of_ptr_Concurrent = { tempNew , tempNew, tempNew, tempNew };
        create_ptr_list_Of_ptr_Concurrent();
        for (uint8_t threadID = 0; threadID < sizeof(_list_Of_ptr_Concurrent); threadID++)//NUMBER OF CONCURRENT THREADS
        {
            while(get_ptr_Item_On_list_Of_ptr_Concurrent(threadID) == NULL) { }
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
    // get.
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