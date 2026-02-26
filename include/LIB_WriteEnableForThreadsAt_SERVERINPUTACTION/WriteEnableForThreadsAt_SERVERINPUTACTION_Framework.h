#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION_Framework();

// public.
    // dynamic.
        void initialise(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        // get.
        class WriteEnableForThreadsAt_SERVERINPUTACTION* get_ptr_WriteEnable();
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
        static void create_WriteEnable();
        // get.
        static class WriteEnableForThreadsAt_SERVERINPUTACTION* stat_get_ptr_WriteEnable();
        // set.
        static void stat_set_ptr_WriteEnable(class WriteEnableForThreadsAt_SERVERINPUTACTION* writeEnable);
    // pointers.
        // classes.
        static OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION* _ptr_WriteEnable;
        // registers.
    };
}