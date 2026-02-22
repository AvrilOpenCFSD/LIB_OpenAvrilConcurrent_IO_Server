#include "pch.h"

// classes.
    class OpenAvril::User_Alg* _ptr_User_Algorithms = NULL;

// registers.
    std::list<class OpenAvril::Concurrent*> _list_Of_ptr_Concurrent = { NULL };
    
// pointers.
    std::list<class OpenAvril::Concurrent*>* _ptr_list_Of_ptr_Concurrent = &_list_Of_ptr_Concurrent;
    
// constructor.
    OpenAvril::Algorithms::Algorithms()
    {
        std::cout << "entered => Algorithms()" << std::endl;
		create_ptr_User_Algorithms();
        create_list_Of_ptr_Concurrent();
        std::cout << "exiting => Algorithms()" << std::endl;
    }

// destructor.
    OpenAvril::Algorithms::~Algorithms()
    {
        delete _ptr_User_Algorithms;;
        delete _ptr_list_Of_ptr_Concurrent;
    }

// public.
    // get.
    OpenAvril::Concurrent* OpenAvril::Algorithms::get_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t threadID)
    {
        auto temp = _ptr_list_Of_ptr_Concurrent->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    std::list<class OpenAvril::Concurrent*>* OpenAvril::Algorithms::get_ptr_list_Of_ptr_Concurrent()
    {
        return _ptr_list_Of_ptr_Concurrent;
    }
    OpenAvril::User_Alg* OpenAvril::Algorithms::get_ptr_User_Algorithms()
    {
        return _ptr_User_Algorithms;
    }
    // set.

// private.
    void OpenAvril::Algorithms::create_list_Of_ptr_Concurrent()
    {
        OpenAvril::Concurrent* tempNew = new class OpenAvril::Concurrent();
        while (tempNew == NULL) {}
        std::list<class OpenAvril::Concurrent*> _list_Of_ptr_Concurrent = { tempNew , tempNew, tempNew, tempNew };
        create_ptr_list_Of_ptr_Concurrent();
        for (uint8_t threadID = 0; threadID < sizeof(_list_Of_ptr_Concurrent); threadID++)//NUMBER OF CONCURRENT THREADS
        {
            while(get_ptr_Item_On_list_Of_ptr_Concurrent(threadID) == NULL) { }
        }
    }
    void OpenAvril::Algorithms::create_ptr_User_Algorithms()
    {
        set_ptr_User_Algorithms(new class OpenAvril::User_Alg());
        while (get_ptr_User_Algorithms() == NULL) {}
    }
    void OpenAvril::Algorithms::create_ptr_list_Of_ptr_Concurrent()
    {
        _ptr_list_Of_ptr_Concurrent = &_list_Of_ptr_Concurrent;
        while (get_ptr_list_Of_ptr_Concurrent() == NULL) {}
    }
    // get.
    std::list<OpenAvril::Concurrent*> OpenAvril::Algorithms::get_list_Of_ptr_Concurrent()
    {
        return _list_Of_ptr_Concurrent;
    }
    // set.
    void OpenAvril::Algorithms::set_ptr_list_Of_ptr_Concurrent(std::list<class OpenAvril::Concurrent*>* newList)
    {
        _ptr_list_Of_ptr_Concurrent = newList;
    }
    void OpenAvril::Algorithms::set_ptr_User_Algorithms(User_Alg* user_Algorithms)
    {
        _ptr_User_Algorithms = user_Algorithms;
    }