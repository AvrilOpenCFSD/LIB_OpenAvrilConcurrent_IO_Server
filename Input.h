#pragma once

namespace OpenAvril
{
    class Input
    {
// calsses.

// registers.

    public:
// constructor.
        Input();

// destructor.
        virtual ~Input();

// public.
        void initialise_Control();
    // get.
        uint8_t get_in_praiseEventId();
        uint8_t get_in_playerId();
        class Input_Control* get_ptr_Input_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID);
    // set.

// private.
        void create_ptr_Input_Control();
        void create_in_praiseEventId();
        void create_in_playerId();
        void create_list_Of_Praise_In_Subsets();
        void create_ptr_list_Of_Praise_In_Subsets();
    // get.
        uint8_t get_lenght_Of_list_Of_Praise_In_Subsets();
    // set.
        void set_in_praiseEventId(uint8_t praiseEventId);
        void set_in_playerId(uint8_t praiseEventId);
        void set_ptr_Input_Control(class Input_Control* newClass);
        void set_Subset_InputBuffer(class Praise0_Input* value);
    };
}