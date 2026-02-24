#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();

// destructor.
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();

// public.
    // dynamic.
        void initialise_Item_Of_2bit_flag_write_IDLE(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WAIT(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WRITE(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_number_Of_Implemented_Threads(uint8_t* newValue);
        // get.
        std::list<bool>* get_ptr_2bit_flag_write_IDLE();
        std::list<bool>* get_ptr_2bit_flag_write_WAIT();
        std::list<bool>* get_ptr_2bit_flag_write_WRITE();
        uint8_t get_number_Of_Implemented_Threads();
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_2bit_flag_write_IDLE(bool newDEAFULT_FlagBit);
        static void create_2bit_flag_write_WAIT(bool newDEAFULT_FlagBit);
        static void create_2bit_flag_write_WRITE(bool newDEAFULT_FlagBit);
        static void create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        static void create_ptr_2bit_flag_write_IDLE();
        static void create_ptr_2bit_flag_write_WAIT();
        static void create_ptr_2bit_flag_write_WRITE();
        // get.
        static std::list<bool>* Get_ptr_2bit_flag_write_IDLE();
        static std::list<bool>* Get_ptr_2bit_flag_write_WAIT();
        static std::list<bool>* Get_ptr_2bit_flag_write_WRITE();
        static uint8_t* get_ptr_number_Of_Implemented_Threads();
        // set.
        static void set_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newValue);
        static void set_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newValue);
        static void set_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newValue);
        static void set_ptr_2bit_flag_write_IDLE(std::list<bool>* newPtr);
        static void set_ptr_2bit_flag_write_WAIT(std::list<bool>* newPtr);
        static void set_ptr_2bit_flag_write_WRITE(std::list<bool>* newPtr);
        static void set_number_Of_Implemented_Threads(uint8_t newValue);
    };
}

