#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION();

// destructor.
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION();

// public.
    // dynamic.
        void initialise_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* get_ptr_WriteEnable_Control();
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
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* stat_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* stat_get_ptr_WriteEnable_Control();
        // set.
        static void stat_set_ptr_Global(class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* global);
        static void stat_set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* writeEnableControl);
    // pointers.
        // classes.
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* _ptr_Global;
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* _ptr_WriteEnable_Control;
        // registers.
    };
}