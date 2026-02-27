#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework();

// public.
    // dynamic.
        void initialise(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        // get.
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* get_ptr_WriteEnable();
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
        static void stat_create_WriteEnable();
        // get.
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* stat_get_ptr_WriteEnable();
        // set.
        static void stat_set_ptr_WriteEnable(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* writeEnable);
    // pointers.
        // classes.
        static OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* _ptr_WriteEnable;
        // registers.
    };
}