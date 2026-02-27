#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control
    {
    public:
// constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global);

// destructor.
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control();

// public.
    // dynamin.  
        void initialise_flag_praisingWrite(bool* newDEAFULT_bool);
        void initialise_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2>* newINITIALISED_boolList);
        void initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void initialise_new_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t);
        void initialise_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t* newINITIALISED_uint8_t);
        void initialise_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t);
        void writeEnable_Activate(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void writeEnable_SortQue(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void writeEnable_Request(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void writeQue_Update(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        // get.
        bool get_flag_praisingWrite();
        std::array<bool, 2> get_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t get_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint8_t get_new_writeCycle_Try_ThreadId_Index();
        uint8_t get_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID);
        uint8_t get_writeCycle_Try_ThreadId_Index();
        // set.
        void set_flag_praisingWrite(bool newBoolValue);
        void set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        void set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void set_new_writeCycle_Try_ThreadId_Index(uint8_t newID);
        void set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID);
        void set_writeCycle_Try_ThreadId_Index(uint8_t newID);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamin.
        void dynamicStagger(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId_A, uint8_t coreId_B);
        // get.
        // set.
    // static.
        static void stat_create_flag_praisingWrite(bool* newDEFAULT_bool);
        static void stat_create_list_Of_2ibt_flag_WriteState(std::array<bool, 2>* newDEFAULT_boolList);
        static void stat_create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void stat_create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void stat_create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void stat_create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint8_t);
        static void stat_create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        // get.
        static bool* stat_get_ptr_flag_praisingWrite();
        static std::list<std::array<bool, 2>>* stat_get_ptr_list_Of_2ibt_flag_WriteState();
        static std::list<uint32_t>* stat_get_ptr_list_Of_WriteActive_Count_For_ThreadId();
        static std::list<uint32_t>* stat_get_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        static std::list<uint32_t>* stat_get_ptr_list_Of_WriteWait_Count_For_ThreadId();
        static uint8_t* stat_get_ptr_new_writeCycle_Try_ThreadId_Index();
        static std::list<uint8_t>* stat_get_ptr_QUE_List_Of_ThreadToWrite();
        static uint8_t* stat_get_ptr_writeCycle_Try_ThreadId_Index();
        // set.
        static void stat_set_flag_praisingWrite(bool newFlag);
        static void stat_set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue);
        static void stat_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID);
        static void stat_set_writeCycle_Try_ThreadId_Index(uint8_t newValue);
    // pointers.
        // classes.
        // registers.
        static bool* _ptr_flag_praisingWrite;
        static std::list<std::array<bool, 2>>* _ptr_list_Of_2ibt_flag_WriteState;
        static std::list<uint32_t>* _ptr_list_Of_WriteActive_Count_For_ThreadId;
        static std::list<uint32_t>* _ptr_list_Of_WriteIdle_Count_For_ThreadId;
        static std::list<uint32_t>* _ptr_list_Of_WriteWait_Count_For_ThreadId;
        static uint8_t* _ptr_new_writeCycle_Try_ThreadId_Index;
        static std::list<uint8_t>* _ptr_QUE_List_Of_ThreadToWrite;
        static uint8_t* _ptr_writeCycle_Try_ThreadId_Index;
    };
}