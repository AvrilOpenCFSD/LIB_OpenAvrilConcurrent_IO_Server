#pragma once

namespace OpenAvrilConcurrencyLIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
    {
        // classes.

        // registers.

        // pointers.

    public:
        // constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

        // destructor.
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

        // public.
        void initialise_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* get_ptr_WriteEnable_Control();
        // set.

    private:
        // private.
        void create_ptr_Global();
        void create_ptr_WriteEnable_Control();
        // get.
        // set.
        static void set_ptr_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global);
        static void set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* writeEnableControl);
    };
}