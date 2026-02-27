#include "pch.h"

// pointers.
    // classes.
    OpenAvrilConcurrency::Concurrent_Control* _ptr_Concurrent_Control = NULL;
    // registers.
    std::list<class OpenAvrilConcurrency::Object*>* _ptr_list_Of_ptr_Algorithms_Subset = NULL;

// constructor.
    OpenAvrilConcurrency::Concurrent::Concurrent()
    {
        std::cout << "entered => OpenAvrilConcurrency::Concurrent::Concurrent()" << std::endl;
        Object* newDEFAULT_Object;
        create_list_Of_ptr_list_Of_ptr_Algorithms_Subset(newDEFAULT_Object);
        delete newDEFAULT_Object;
    }

// destructor.
    OpenAvrilConcurrency::Concurrent::~Concurrent()
    {
        delete _ptr_Concurrent_Control;
        delete _ptr_list_Of_ptr_Algorithms_Subset;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Concurrent::do_Concurrent_Algorithm_For_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj, char playerId, uint8_t praiseEventId, Object* ptr_Algorithm_Subset, Object* ptr_Input_Subset, Object* ptr_Output_Subset)
    {
        OpenAvrilConcurrency::Praise0_Algorithm* ptr_Algorithm_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Input* ptr_Input_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Output* ptr_Output_Subset_Praise0 = NULL;
        switch (praiseEventId)
        {
        case 0:
            ptr_Algorithm_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Algorithm*> (ptr_Algorithm_Subset);
            ptr_Input_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Input*> (ptr_Input_Subset);
            ptr_Output_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Output*> (ptr_Output_Subset);
            ptr_Algorithm_Subset_Praise0->Do_Praise(ptr_Input_Subset_Praise0, ptr_Output_Subset_Praise0);
            break;
        }
    }
    void OpenAvrilConcurrency::Concurrent::initialise_Control()
    {
        create_ptr_Concurrent_Control();
    }
    void OpenAvrilConcurrency::Concurrent::initialise_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, Object* newINITIALISED_Object)
    {
        stat_set_Item_On_ptr_list_Of_ptr_Algorithms_Subset(praiseID, newINITIALISED_Object);
    }
        // get.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::get_ptr_Concurrent_Control()
    {
        return stat_get_ptr_Concurrent_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        return stat_get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(praiseID);
    }
    std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return stat_get_ptr_list_Of_ptr_Algorithms_Subset();
    }
        // set.
    // static.
    void OpenAvrilConcurrency::Concurrent::thread_Concurrency(OpenAvrilConcurrency::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool doneOnce = true;
        while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (doneOnce == true)
            {
                obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->set_ConditionCode_Of_Thread(concurrent_threadID);
                doneOnce = false;
            }

        }
        std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == true)
        {

        }
        std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_ConcurrentCoreState(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server(), concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerInputAction(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_ptr_Output_Control()->Selectset_Output_Subset(obj, obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_out_praiseEventId(), concurrent_threadID);
                    obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_ptr_Concurrent_Control()->selectset_Algorithm_Subset(obj, obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_praiseEventId(), concurrent_threadID);
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->Pop_From_Stack_Of_Input(obj->get_ptr_Server()->get_ptr_Data(), concurrent_threadID);
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_End(obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerInputAction(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_playerId(),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_praiseEventId(),
                        obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_praiseEventId()),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_ptr_Item_On_list_Of_Praise_In_Subsets(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_praiseEventId()),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_ptr_Item_On_list_Of_Praise_Out_Subsets(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_in_praiseEventId())
                    );
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->push_To_Stack_Of_Output(obj->get_ptr_Server()->get_ptr_Data(), concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Thread_End(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server(), concurrent_threadID);
                    if (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_ConcurrentCoreState(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server(), OpenAvrilConcurrency::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_coreId_To_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server())) == OpenAvrilConcurrency::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_Idle(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Request_Wait_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server(), OpenAvrilConcurrency::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_coreId_To_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_program_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(obj->get_ptr_Server()->get_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    //}
                }
                break;
            }
        }
    }
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Concurrent::create_list_Of_ptr_list_Of_ptr_Algorithms_Subset(OpenAvrilConcurrency::Object* newDEFAULT_Object)
    {
        std::list<class Object*>* _ptr_list_Of_ptr_Algorithms_Subset = new std::list<class Object*>();
        while(stat_get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
        *_ptr_list_Of_ptr_Algorithms_Subset = { newDEFAULT_Object };//NUMBER OF PRAISES.
    }
    void OpenAvrilConcurrency::Concurrent::create_ptr_Concurrent_Control()
    {
        OpenAvrilConcurrency::Concurrent_Control* _ptr_Concurrent_Control = new class OpenAvrilConcurrency::Concurrent_Control();
        while (stat_get_ptr_Concurrent_Control() == NULL) {}
    }
        // get.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::stat_get_ptr_Concurrent_Control()
    {
        return _ptr_Concurrent_Control;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::stat_get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        auto temp = stat_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        return *temp;

    }
    std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::stat_get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return stat_get_ptr_list_Of_ptr_Algorithms_Subset();
    }
        // set.
    void OpenAvrilConcurrency::Concurrent::stat_set_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, OpenAvrilConcurrency::Object* newDEFAULT_Object)
    {
        auto temp = stat_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        *temp = newDEFAULT_Object;
    }

