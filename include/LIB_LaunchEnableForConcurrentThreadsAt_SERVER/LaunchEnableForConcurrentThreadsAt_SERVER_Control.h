#pragma once


namespace OpenAvrilConcurrency
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Control
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER_Control(class LaunchEnableForConcurrentThreadsAt_SERVER_Global* global, uint8_t number_Implemented_Cores);
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Control();

        void LaunchEnable_Activate(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        void LaunchEnable_Request(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
        void LaunchEnable_SortQue(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t number_Implemented_Cores);
        void LaunchQue_Update(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t number_Implemented_Cores);

        uint8_t Get_concurrentCycle_Try_CoreId_Index();
        uint8_t Get_flag_CoreId_Of_CoreToLaunch();
        bool Get_flag_praisingLaunch();
        uint8_t Get_new_concurrentCycle_Try_CoreId_Index();
        bool Get_state_ConcurrentCore(uint8_t concurrent_CoreId);
        uint8_t Get_que_CoreToLaunch(uint8_t index);

        void Set_concurrentCycle_Try_CoreId_Index(uint8_t concurrentCycle_Try_CoreId_Index);
        void Set_flag_praisingLaunch(bool flag_praisingLaunch);
        void Set_new_concurrentCycle_Try_CoreId_Index(uint8_t new_concurrentCycle_Try_CoreId_Index);
        void Set_state_ConcurrentCore(bool state_ConcurrentCore, uint8_t concurrent_CoreId);

    protected:

    private:
        void DynamicStagger(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t coreId);
        void LaunchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId_A, uint8_t concurrent_CoreId_B);
        
        int Get_count_LaunchActive_For(uint8_t concurrent_CoreId);
        int Get_count_LaunchIdle_For(uint8_t concurrent_CoreId);
        std::vector<uint8_t>* Get_stack_PriseEventId();
        
        void Set_count_LaunchActive_For(int count_LaunchActive_For, uint8_t concurrent_CoreId);
        void Set_count_LaunchIdle_For(int count_LaunchIdle_For, uint8_t concurrent_CoreId);
        void Set_stack_PriseEventId(std::vector<uint8_t>* stack_PriseEventId);
        void Set_que_CoreToLaunch(uint8_t que_CoreToLaunch, uint8_t index);
    };
}