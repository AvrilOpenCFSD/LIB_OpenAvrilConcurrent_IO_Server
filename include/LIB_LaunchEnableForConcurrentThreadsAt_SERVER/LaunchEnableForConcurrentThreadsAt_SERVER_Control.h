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
        void initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void initialise_list_for_Que_Of_CoreTolaunch();
        void launchEnable_Activate(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        void launchEnable_Request(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
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
        std::list<uint32_t>* get_ptr_list_Of_launchActive_Count_For_ThreadID();
        std::list<uint32_t>* get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        std::list<bool>* get_ptr_list_Of_STATE_For_ConcurrentCore();
        std::list<uint8_t>* get_ptr_list_for_Que_Of_CoreTolaunch();
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
        void launchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId_A, uint8_t concurrent_CoreId_B);
        // get.
        // set.
    // static.
        static void create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        static void create_flag_praisinglaunch(bool* newDEFAULT_Flagbit);
        static void create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit);
        static void create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        static void create_list_for_Que_Of_CoreTolaunch();
        static void create_ptr_list_Of_launchActive_Count_For_ThreadID();
        static void create_ptr_list_Of_launchIdle_Count_For_ThreadID();
        static void create_ptr_list_Of_STATE_For_ConcurrentCore();
        static void create_ptr_list_for_Que_Of_CoreTolaunch();
        // get.
        static std::list<uint32_t>* Get_ptr_list_Of_launchActive_Count_For_ThreadID();
        static std::list<uint32_t>* Get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        static std::list<bool>* Get_ptr_list_Of_STATE_For_ConcurrentCore();
        static std::list<uint8_t>* Get_ptr_list_for_Que_Of_CoreTolaunch();
        // set.
        static void Set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        static void Set_flag_praisinglaunch(bool newFlag);
        static void Set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void Set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void Set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        static void Set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        static void Set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
        static void set_ptr_list_Of_launchActive_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        static void set_ptr_list_Of_launchIdle_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        static void set_ptr_list_Of_STATE_For_ConcurrentCore(std::list<bool>* newPtr);
        static void set_ptr_list_for_Que_Of_CoreTolaunch(std::list<uint8_t>* newPtr);
    };
}