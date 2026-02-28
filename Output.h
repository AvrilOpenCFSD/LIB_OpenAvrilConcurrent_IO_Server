#pragma once

namespace OpenAvrilConcurrency
{
    class Output
    {
    public:
        // constructor.
        Output();

        // destructor.
        virtual ~Output();

        // public.
            // dynamic.
        void initialise_Control();
        void initialise_list_Of_Praise_Out_Subsets(class Framework_Server* obj);
        // get.
        uint8_t get_out_praiseEventId();
        uint8_t get_out_playerId();
        class Output_Control* get_ptr_Output_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID);
        // set.
        void set_Subset_With_OutputSubet(class Praise0_Output* praise0_Output);
    // static.
        // get.
        // set.

    private:
        // private.
            // dynamic.
                // get.
                // set.
        // static.
        static void stat_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_ptr_Output_Control();
        static void stat_create_ptr_list_Of_Praise_Out_Subsets();
        // get.
        static uint8_t* stat_get_ptr_out_playerId();
        static uint8_t* stat_get_ptr_out_praiseEventId();
        static class Object* stat_get_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID);
        static std::list<OpenAvrilConcurrency::Object*>* stat_get_ptr_Item_On_list_Of_Praise_Out_Subsets();
        static Output_Control* stat_get_ptr_Output_Control();
        // set.
        static void stat_set_ptr_out_playerId(uint8_t* new_uint8_t);
        static  void stat_set_ptr_out_praiseEventId(uint8_t* new_uint8_t);
        static  void stat_set_ptr_Output_Control(class Output_Control* newClass);
        static void stat_set_Item_On_list_Of_Praise_Out_Subsets(uint8_t praiseID, class Object* newObject);
        // pooutters.
            // calsses.
        static class Output_Control* _ptr_Output_Control;
        // registers.
        static uint8_t* _ptr_out_praiseEventId;
        static uint8_t* _ptr_out_playerId;
        static std::list<class Object*>* _ptr_list_Of_Praise_Out_Subsets;
    };
}