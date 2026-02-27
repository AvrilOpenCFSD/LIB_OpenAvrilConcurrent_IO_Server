#pragma once

namespace OpenAvrilConcurrency
{
    class Input
    {
// classes.

// registers.

// pointers.

// constructor.

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.


// calsses.

// registers.

    public:
// constructor.
        Input();

// destructor.
        virtual ~Input();

// public.
        void initialise(class Framework_Server* obj);
        void initialise_Control();
    // get.
        uint8_t get_in_praiseEventId();
        uint8_t get_in_playerId();
        class Input_Control* get_ptr_Input_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID);
    // set.

// private.
        void stat_create_ptr_Input_Control();
        void stat_create_in_praiseEventId();
        void stat_create_in_playerId();
        void stat_create_list_Of_Praise_In_Subsets(Object* newDEFAULT_Object);
        void stat_create_ptr_list_Of_Praise_In_Subsets();
        void initialise_list_Of_Praise_In_Subsets();
    // get.
        uint8_t get_Lenght_Of_list_Of_Praise_In_Subsets();
        std::list<Object*>* get_ptr_list_Of_Praise_In_Subsets();
    // set.
        void set_in_praiseEventId(uint8_t praiseEventId);
        void set_in_playerId(uint8_t praiseEventId);
        void set_ptr_Input_Control(class Input_Control* newClass);
        void set_Subset_InputBuffer(class Praise0_Input* value);
    };
}