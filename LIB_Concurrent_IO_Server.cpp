// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

class OpenAvril::Framework_Server* _Server_Assembly;
void* programHandleId_WriteEnalbe_ServerInputAction;
void* programHandleId_WriteEnalbe_ServerOutputRecieve;

bool _flag_IsStackLoaded_Server_InputAction;
bool _flag_IsStackLoaded_Server_OutputRecieve;
bool _flag_IsInitialised_Avril_FSD_ServerAssembly;

// Praise Event Id
uint8_t _PraiseEventId;

// Praise 0 Data
bool _Praise0_Input_IsPingActive;
bool _Praise0_Output_IsPingActive;

// Praise 1 Data


void* OpenAvril::CLIBServerIOConcurrnecy::initialise_Server_Concurrency()
{
    _Server_Assembly = new class OpenAvril::Framework_Server();
    while (_Server_Assembly == NULL) {}
    return (void*)_Server_Assembly;
}
void OpenAvril::CLIBServerIOConcurrnecy::initalise_Programs(OpenAvril::Framework_Server* obj)
{
    obj->initialise_Program(obj);
}
void OpenAvril::CLIBServerIOConcurrnecy::flip_Input_DoubleBuffer(OpenAvril::Framework_Server* obj)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->flip_Input_DoubleBuffer();
}

bool OpenAvril::CLIBServerIOConcurrnecy::get_flag_isStackLoaded_Server_InputAction(class OpenAvril::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_InputAction = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction();
    return _flag_IsStackLoaded_Server_InputAction;
}
bool OpenAvril::CLIBServerIOConcurrnecy::get_flag_isLoaded_Stack_OutputSend(class OpenAvril::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_OutputRecieve = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_OutputSend();
    return _flag_IsStackLoaded_Server_OutputRecieve;
}
bool OpenAvril::CLIBServerIOConcurrnecy::get_flag_IsInitialised_OpenAvrilConcurrency(class OpenAvril::Framework_Server* obj)
{
    _flag_IsInitialised_Avril_FSD_ServerAssembly = obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->get_flag_is_SystemInitialised();
    return _flag_IsInitialised_Avril_FSD_ServerAssembly;
}
void* OpenAvril::CLIBServerIOConcurrnecy::get_program_WriteEnableStack_ServerInputAction()
{
    return (void*)programHandleId_WriteEnalbe_ServerInputAction;
}
void* OpenAvril::CLIBServerIOConcurrnecy::get_program_WriteEnableStack_ServerOutputRecieve()
{
    return (void*)programHandleId_WriteEnalbe_ServerOutputRecieve;
}
void OpenAvril::CLIBServerIOConcurrnecy::pop_From_Stack_Of_Output(class OpenAvril::Framework_Server* obj)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->pop_From_Stack_Of_Output(obj->get_ptr_Server()->get_ptr_Data());
}
void OpenAvril::CLIBServerIOConcurrnecy::push_To_Stack_Of_Input(class OpenAvril::Framework_Server* obj)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->push_To_Stack_Of_Input(obj->get_ptr_Server()->get_ptr_Data());
}

void OpenAvril::CLIBServerIOConcurrnecy::select_set_Intput_Subset(class OpenAvril::Framework_Server* obj, uint8_t praiseEventId)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->get_ptr_Input_Control()->Selectset_Input_Subset(obj, praiseEventId);
}

uint8_t OpenAvril::CLIBServerIOConcurrnecy::get_PraiseEventId(class OpenAvril::Framework_Server* obj)
{
    _PraiseEventId = obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Output_WRITE()->get_out_praiseEventId();
    return _PraiseEventId;
}
void OpenAvril::CLIBServerIOConcurrnecy::set_PraiseEventId(class OpenAvril::Framework_Server* obj, uint8_t value)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_in_praiseEventId(value);
}
//
bool OpenAvril::CLIBServerIOConcurrnecy::get_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj)
{
    _Praise0_Input_IsPingActive = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise0_Input()->get_ping_Active();
    return _Praise0_Input_IsPingActive;
}
void OpenAvril::CLIBServerIOConcurrnecy::set_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj, bool value)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise0_Input()->set_ping_Active(value);
}
bool OpenAvril::CLIBServerIOConcurrnecy::get_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj)
{
    _Praise0_Output_IsPingActive = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise0_Output()->get_ping_Active();
    return _Praise0_Output_IsPingActive;
}
void OpenAvril::CLIBServerIOConcurrnecy::set_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj, bool value)
{
    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise0_Output()->set_ping_Active(value);
}
//


// This is the constructor of a class that has been exported.
OpenAvril::CLIBServerIOConcurrnecy::CLIBServerIOConcurrnecy()
{
    return;
}

