#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Control
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_SERVERINPUTACTION_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* global);

// destructor.
        ~WriteEnableForThreadsAt_SERVERINPUTACTION_Control();
// public.
    // dynamic.
        void writeEnable_Activate(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void writeEnable_SortQue(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void writeEnable_Request(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void writeQue_Update(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void initialise_flag_praisingWrite(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, bool newDEAFULT_bool);
        void initialise_Item_On_list_Of_2ibt_flag_WriteState(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t slot, std::list<bool>* newINITIALISED_boolList);
        void initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_new_writeCycle_Try_ThreadId_Index(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t* newINITIALISED_uint8_t);
        void initialise_Item_On_QUE_List_Of_ThreadToWrite(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t slotID, uint8_t* newINITIALISED_uint8_t);
        void initialise_writeCycle_Try_ThreadId_Index(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t* newINITIALISED_uint8_t);
        // get.
        bool get_flag_praisingWrite();
        std::list<bool> get_Item_On_list_Of_2ibt_flag_WriteState(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteActive_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteWait_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID);
        uint8_t get_Item_On_QUE_List_Of_ThreadToWrite(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t slotID);
        uint8_t get_new_writeCycle_Try_ThreadId_Index();
        std::list<std::list<bool>>* get_ptr_list_Of_2ibt_flag_WriteState();
        std::list<uint32_t>* get_ptr_list_Of_WriteActive_Count_For_ThreadId();
        std::list<uint32_t>* get_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        std::list<uint32_t>* get_ptr_list_Of_WriteWait_Count_For_ThreadId();
        std::list<uint8_t>* get_ptr_QUE_List_Of_ThreadToWrite();
        uint8_t get_writeCycle_Try_ThreadId_Index();
        // set.
        void set_flag_praisingWrite(bool newFlag);
        void set_Item_On_list_Of_2ibt_flag_WriteState(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, std::list<bool> newState);
        void set_Item_On_list_Of_WriteActive_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteWait_Count_For_ThreadId(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrentThreadID, uint32_t newCount);
        void set_Item_On_QUE_List_Of_ThreadToWrite(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t slotID, uint8_t concurrentThreadID);
        void set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue);
        void set_writeCycle_Try_ThreadId_Index(uint8_t newValue);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        void dynamicStagger(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t concurrent_ThreadId_A, uint8_t concurrent_ThreadId_B);
        // get.
        // set.
    // static.
        static void create_flag_praisingWrite(bool newDEAFULT_bool);
        static void create_list_Of_2ibt_flag_WriteState(bool newDEAFULT_bool);
        static void create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        static void create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint8_t);
        static void create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        static void create_ptr_list_Of_2ibt_flag_WriteState();
        static void create_ptr_list_Of_WriteActive_Count_For_ThreadId();
        static void create_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        static void create_ptr_list_Of_WriteWait_Count_For_ThreadId();
        static void create_ptr_QUE_List_Of_ThreadToWrite();
        // get.
        static std::list<std::list<bool>>* Get_ptr_list_Of_2ibt_flag_WriteState();
        static std::list<uint32_t>* Get_ptr_list_Of_WriteActive_Count_For_ThreadId();
        static std::list<uint32_t>* Get_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        static std::list<uint32_t>* Get_ptr_list_Of_WriteWait_Count_For_ThreadId();
        static std::list<uint8_t>* Get_ptr_QUE_List_Of_ThreadToWrite();
        // set.
        static void Set_flag_praisingWrite(bool newFlag);
        static void set_ptr_list_Of_2ibt_flag_WriteState(std::list<std::list<bool>>* newPtr);
        static void set_ptr_list_Of_WriteActive_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        static void set_ptr_list_Of_WriteIdle_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        static void set_ptr_list_Of_WriteWait_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        static void set_ptr_QUE_List_Of_ThreadToWrite(std::list<uint8_t>* newPtr);
        static void Set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue);
        static void Set_writeCycle_Try_ThreadId_Index(uint8_t newValue);
    };
}