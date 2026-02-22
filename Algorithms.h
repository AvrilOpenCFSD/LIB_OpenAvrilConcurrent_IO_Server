#pragma once

namespace OpenAvril
{
    class Algorithms
    {
// calsses.

// registers.

    public:
// constructor.
        Algorithms();

// destructor.
        virtual ~Algorithms();

// public.
    // get.
		class Concurrent* get_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t threadID);
        std::list<class Concurrent*>* get_ptr_list_Of_ptr_Concurrent();
        class User_Alg* get_ptr_User_Algorithms();
    // set.

    private:
// private.
        void create_list_Of_ptr_Concurrent();
        void create_ptr_User_Algorithms();
        void create_ptr_list_Of_ptr_Concurrent();
	// get.
        std::list<class OpenAvril::Concurrent*> get_list_Of_ptr_Concurrent();
	// set.
        void set_ptr_list_Of_ptr_Concurrent(std::list<class Concurrent*>* newList);
        void set_ptr_User_Algorithms(class User_Alg* user_Algorithms);
    };
}