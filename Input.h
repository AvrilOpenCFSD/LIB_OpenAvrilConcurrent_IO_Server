#pragma once

namespace OpenAvrilConcurrency
{
    class Input
    {
    public:
// constructor.
        Input();

// destructor.
        virtual ~Input();

// public.
    // dynamic.
        void initialise_Control();
        void initialise_list_Of_Praise_In_Subsets(class Framework_Server* obj);
        // get.
        uint8_t get_in_praiseEventId();
        uint8_t get_in_playerId();
        class Input_Control* get_ptr_Input_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID);
        // set.
        void set_Subset_With_InputSubet(class Praise0_Input* praise0_Input);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void stat_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_ptr_Input_Control();
        static void stat_create_ptr_list_Of_Praise_In_Subsets(class Object* newDEFAULT_Object);
        // get.
        static uint8_t* stat_get_ptr_in_playerId();
        static uint8_t* stat_get_ptr_in_praiseEventId();
        static class Object* stat_get_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID);
        static std::list<OpenAvrilConcurrency::Object*>* stat_get_ptr_Item_On_list_Of_Praise_In_Subsets();
        static Input_Control* stat_get_ptr_Input_Control();
        // set.
        static void stat_set_ptr_in_playerId(uint8_t* new_uint8_t);
        static void stat_set_ptr_in_praiseEventId(uint8_t* new_uint8_t);
        static void stat_set_ptr_Input_Control(class Input_Control* newClass);
        static void stat_set_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID, class Object* newObject);
    // pointers.
        // calsses.
        static class Input_Control* _ptr_Input_Control;
        // registers.
        static uint8_t* _ptr_in_praiseEventId;
        static uint8_t* _ptr_in_playerId;
        static std::list<class Object*>* _ptr_list_Of_Praise_In_Subsets;
    };
}