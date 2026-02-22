#pragma once

namespace OpenAvrilConcurrencyLIB_WriteEnableForThreadsAt_SERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION
    {
        // classes.

        // registers.

        // pointers.

    public:
        // constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION();

        // destructor.
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION();

        // public.
        void initialise_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* get_ptr_WriteEnable_Control();
        // set.

    private:
        // private.
        void create_ptr_Global();
        void create_ptr_WriteEnable_Control();
        // get.
        // set.
        static void set_ptr_Global(class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* global);
        static void set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* writeEnableControl);
    };
}