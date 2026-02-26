#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Global
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION_Global();

// destructor.
        ~WriteEnableForThreadsAt_SERVERINPUTACTION_Global();

// public.
    // dynamic.
        void initialise_Item_Of_2bit_flag_write_IDLE(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WAIT(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WRITE(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_number_Of_Implemented_Threads(uint8_t* newValue);
        // get.
        std::array<bool, 2> get_2bit_flag_write_IDLE();
        std::array<bool, 2> get_2bit_flag_write_WAIT();
        std::array<bool, 2> get_2bit_flag_write_WRITE();
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
        static void create_2bit_flag_write_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void create_2bit_flag_write_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void create_2bit_flag_write_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        // get.
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_IDLE();
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_WAIT();
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_WRITE();
        static uint8_t* stat_get_ptr_number_Of_Implemented_Threads();
        // set.
        static void stat_set_2bit_flag_write_IDLE(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_2bit_flag_write_WAIT(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_2bit_flag_write_WRITE(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_number_Of_Implemented_Threads(uint8_t newValue);
    // pointers.
        // classes.
        // registers.
        static std::array<bool, 2>* _ptr_2bit_flag_write_IDLE;
        static std::array<bool, 2>* _ptr_2bit_flag_write_WAIT;
        static std::array<bool, 2>* _ptr_2bit_flag_write_WRITE;
        static uint8_t* _ptr_number_Of_Implemented_Threads;
    };
}

