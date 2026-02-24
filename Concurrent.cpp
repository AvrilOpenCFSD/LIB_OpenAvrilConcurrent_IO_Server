#include "pch.h"
// classes.

// registers.

// pointers.

// constructor.

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.
// calsses.
    OpenAvrilConcurrency::Concurrent_Control* ptr_Concurrent_Control = NULL;

// registers.
    std::list<OpenAvrilConcurrency::Object*> _list_Of_ptr_Algorithms_Subset = { NULL };

// pointers.
    std::list<OpenAvrilConcurrency::Object*>* _ptr_list_Of_ptr_Algorithms_Subset = NULL;

// constructor.
    OpenAvrilConcurrency::Concurrent::Concurrent()
    {
        std::cout << "entered => OpenAvrilConcurrency::Concurrent::Concurrent()" << std::endl;
        Object* newDEFAULT_Object;
        create_list_Of_ptr_Algorithms_Subset(newDEFAULT_Object);
        delete newDEFAULT_Object;
    }

// destructor.
    OpenAvrilConcurrency::Concurrent::~Concurrent()
    {
        delete ptr_Concurrent_Control;
        delete _ptr_list_Of_ptr_Algorithms_Subset;
    }

// public.
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
    void OpenAvrilConcurrency::Concurrent::initialise(OpenAvrilConcurrency::Framework_Server* obj)
    {
        initialise_Control();
        initialise_list_Of_ptr_Algorithms_Subset(obj);
    }

    // get.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::get_ptr_Concurrent_Control()
    {
        return ptr_Concurrent_Control;
    }
    class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        auto temp = get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return _ptr_list_Of_ptr_Algorithms_Subset;
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

// private.
    void OpenAvrilConcurrency::Concurrent::create_ptr_Concurrent_Control()
    {
        set_ptr_Concurrent_Control(new class OpenAvrilConcurrency::Concurrent_Control());
        while (get_ptr_Concurrent_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Concurrent::create_list_Of_ptr_Algorithms_Subset(OpenAvrilConcurrency::Object* newDEFAULT_Object)
    {
        std::list<Object*> _list_Of_ptr_Algorithms_Subset = { newDEFAULT_Object };//NUMBER OF PRAISES.
        create_ptr_list_Of_ptr_Algorithms_Subset();
        while (get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
        for (uint8_t praiseID = 0; praiseID < get_Length_Of_list_Of_ptr_Algorithms_Subset(); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(praiseID) == NULL) { }
        }
        
    }
    void OpenAvrilConcurrency::Concurrent::create_ptr_list_Of_ptr_Algorithms_Subset()
    {
        _ptr_list_Of_ptr_Algorithms_Subset = &_list_Of_ptr_Algorithms_Subset;
    }
    void OpenAvrilConcurrency::Concurrent::initialise_Control()
    {
        create_ptr_Concurrent_Control();
    }
    void OpenAvrilConcurrency::Concurrent::initialise_list_Of_ptr_Algorithms_Subset(class Framework_Server* obj)
    {
        set_Algorithm_Subset(obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_User_Algorithms()->get_Praise0_Algorithm());
        // \/ \/ user implementation here \/ \/.
    }
    // get.
    uint8_t OpenAvrilConcurrency::Concurrent::get_Length_Of_list_Of_ptr_Algorithms_Subset()
    {
        return 0;
    }
    // set.
    void OpenAvrilConcurrency::Concurrent::set_ptr_Concurrent_Control(OpenAvrilConcurrency::Concurrent_Control* concurrent_control)
    {
        ptr_Concurrent_Control = concurrent_control;
    }
    void OpenAvrilConcurrency::Concurrent::set_Algorithm_Subset(OpenAvrilConcurrency::Praise0_Algorithm* praise0_algorithm)
    {
        auto temp = get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(praise0_algorithm);
        
    }

