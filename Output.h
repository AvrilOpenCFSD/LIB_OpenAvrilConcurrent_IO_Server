#pragma once

namespace OpenAvrilConcurrency
{
    class Output
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
        Output();

        // destructor.
        virtual ~Output();

        // public.
        void initialise(class Framework_Server* obj);
        void initialise_Control();
        // get.
        uint8_t get_out_praiseEventId();
        uint8_t get_out_playerId();
        class Output_Control* get_ptr_Output_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID);
        // set.

    // private.
        void stat_create_ptr_Output_Control();
        void stat_create_in_praiseEventId();
        void stat_create_in_playerId();
        void stat_create_list_Of_Praise_In_Subsets(Object* newDEFAULT_Object);
        void stat_create_ptr_list_Of_Praise_In_Subsets();
        void initialise_list_Of_Praise_In_Subsets();
        // get.
        std::list<Object*>* get_ptr_list_Of_Praise_In_Subsets();
        // set.
        void set_in_praiseEventId(uint8_t praiseEventId);
        void set_in_playerId(uint8_t praiseEventId);
        void set_ptr_Output_Control(class Output_Control* newClass);
        void set_Subset_OutputBuffer(class Praise0_Output* value);
    };
}