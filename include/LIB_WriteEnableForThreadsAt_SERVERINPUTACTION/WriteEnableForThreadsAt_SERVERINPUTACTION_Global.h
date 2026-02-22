#pragma once

namespace OpenAvrilConcurrencyLIB_WriteEnableForThreadsAt_SERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Global
    {
        // classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION_Global();

// destructor.
        ~WriteEnableForThreadsAt_SERVERINPUTACTION_Global();

// public.
    // get.
        std::list<bool>* get_ptr_2bit_flag_write_IDLE();
        std::list<bool>* get_ptr_2bit_flag_write_WAIT();
        std::list<bool>* get_ptr_2bit_flag_write_WRITE();
        uint8_t get_number_Of_Implemented_Threads();
    // set.

// private.
        void create_2bit_flag_write_IDLE();
        void create_2bit_flag_write_WAIT();
        void create_2bit_flag_write_WRITE();
        void create_number_Of_Implemented_Threads();
        void create_ptr_2bit_flag_write_IDLE();
        void create_ptr_2bit_flag_write_WAIT();
        void create_ptr_2bit_flag_write_WRITE();
    // get.
        std::list<bool> get_2bit_flag_write_IDLE();
        std::list<bool> get_2bit_flag_write_WAIT();
        std::list<bool> get_2bit_flag_write_WRITE();
    // set.
        void set_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newValue);
        void set_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newValue);
        void set_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newValue);
        void set_ptr_2bit_flag_write_IDLE(std::list<bool>* newPtr);
        void set_ptr_2bit_flag_write_WAIT(std::list<bool>* newPtr);
        void set_ptr_2bit_flag_write_WRITE(std::list<bool>* newPtr);
        void set_number_Of_Implemented_Threads(uint8_t newValue);
    };
}

