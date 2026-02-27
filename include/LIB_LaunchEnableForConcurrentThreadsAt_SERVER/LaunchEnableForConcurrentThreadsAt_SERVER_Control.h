#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Control
    {
// classes.

// registers.

// pointer.

    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_SERVER_Control();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Control();

// public.
    // dynamic.
        void initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit);
        void initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, class LaunchEnableForConcurrentThreadsAt_SERVER_Global* ptr_Global);
        void initialise_Item_On_list_Of_Que_Of_CoreTolaunch(uint8_t slotID);
        void initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void launchEnable_Activate(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        void launchEnable_Request(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
        void launchEnable_SortQue(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t number_Implemented_Threads);
        void launchQue_Update(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t number_Implemented_Threads);
        // get.
        uint8_t get_concurrentCycle_Try_CoreId_Index();
        bool get_flag_praisinglaunch();
        uint32_t get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID);
        uint32_t get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID);
        bool get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID);
        uint8_t get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID);
        uint8_t get_new_concurrentCycle_Try_CoreId_Index();
        // set.
        void set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        void set_flag_praisinglaunch(bool newFlag);
        void set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        void set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        void set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        void dynamicStagger(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t coreId);
        void launchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B);
        // get.
        // set.
    // static.
        static void stat_create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        static void stat_create_flag_praisinglaunch(bool* newDEFAULT_Flagbit);
        static void stat_create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void stat_create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void stat_create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit);
        static void stat_create_list_for_Que_Of_CoreTolaunch();
        static void stat_create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        // get.
        static uint8_t* stat_ptr_get_concurrentCycle_Try_CoreId_Index();
        static bool* stat_ptr_get_flag_praisinglaunch();
        static std::list<uint32_t>* stat_get_ptr_list_Of_launchActive_Count_For_ThreadID();
        static std::list<uint32_t>* stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        static std::list<bool>* stat_get_ptr_list_Of_STATE_For_ConcurrentCore();
        static std::list<uint8_t>* stat_get_ptr_list_Of_Que_Of_CoreTolaunch();
        static uint8_t* stat_get_ptr_new_concurrentCycle_Try_CoreId_Index();
        // set.
        static void stat_set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        static void stat_set_flag_praisinglaunch(bool newFlag);
        static void stat_set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void stat_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void stat_set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        static void stat_set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        static void stat_set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
    // pointers.
        // classes.
        // registers.
        static uint8_t* _ptr_concurrentCycle_Try_CoreId_Index;
        static bool* _ptr_flag_praisinglaunch;
        static std::list<uint32_t>* _ptr_list_Of_launchActive_Count_For_ThreadID;
        static std::list<uint32_t>* _ptr_list_Of_launchIdle_Count_For_ThreadID;
        static std::list<bool>* _ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _ptr_list_for_Que_Of_CoreTolaunch;
        static uint8_t* _ptr_new_concurrentCycle_Try_CoreId_Index;
    };
}