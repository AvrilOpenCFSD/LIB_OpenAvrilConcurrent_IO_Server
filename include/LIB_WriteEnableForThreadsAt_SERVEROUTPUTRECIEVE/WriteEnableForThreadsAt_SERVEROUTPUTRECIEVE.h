#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

// destructor.
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

// public.
    // dynamic.
        void initialise_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* get_ptr_WriteEnable_Control();
        // set.
    // static.
        // get.
        // set.
    
    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_ptr_Global();
        static void create_ptr_WriteEnable_Control();
        // get.
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* stat_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* stat_get_ptr_WriteEnable_Control();
        // set.
        static void stat_set_ptr_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global);
        static void stat_set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* writeEnableControl);
    // pointers.
        // classes.
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* _ptr_Global;
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* _ptr_WriteEnable_Control;
        // registers.
    };
}