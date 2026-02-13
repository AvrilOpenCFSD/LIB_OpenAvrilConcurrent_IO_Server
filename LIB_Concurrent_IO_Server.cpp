// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

class Avril_FSD::Framework_Server* _Server_Assembly;
void* programHandleId_WriteEnalbe_ServerInputAction;
void* programHandleId_WriteEnalbe_ServerOutputRecieve;

bool _flag_IsStackLoaded_Server_InputAction;
bool _flag_IsStackLoaded_Server_OutputRecieve;
bool _flag_IsInitialised_Avril_FSD_ServerAssembly;

// Praise Event Id
__int8 _PraiseEventId;

// Praise 0 Data
bool _Praise0_Input_IsPingActive;
bool _Praise0_Output_IsPingActive;

// Praise 1 Data


void* Avril_FSD::CLIBServerIOConcurrnecy::Initialise_Server_Concurrency()
{
    _Server_Assembly = new class Avril_FSD::Framework_Server();
    while (_Server_Assembly == NULL) {}
    return (void*)_Server_Assembly;
}
void Avril_FSD::CLIBServerIOConcurrnecy::Initalise_Programs(Avril_FSD::Framework_Server* obj)
{
    obj->Initialise_Program(obj);
}
void Avril_FSD::CLIBServerIOConcurrnecy::Flip_InBufferToWrite(Avril_FSD::Framework_Server* obj)
{
    obj->Get_Server_Assembly()->Get_Data()->Flip_Input_DoubleBuffer();
}

void Avril_FSD::CLIBServerIOConcurrnecy::Flip_OutBufferToWrite(Avril_FSD::Framework_Server* obj)
{
    obj->Get_Server_Assembly()->Get_Data()->Flip_Output_DoubleBuffer();
}

bool Avril_FSD::CLIBServerIOConcurrnecy::Get_flag_IsStackLoaded_Server_InputAction(class Avril_FSD::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_InputAction = obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Get_flag_IsStackLoaded_Server_InputAction();
    return _flag_IsStackLoaded_Server_InputAction;
}
bool Avril_FSD::CLIBServerIOConcurrnecy::Get_flag_IsStackLoaded_Server_OutputRecieve(class Avril_FSD::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_OutputRecieve = obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Get_flag_IsStackLoaded_Server_OutputRecieve();
    return _flag_IsStackLoaded_Server_OutputRecieve;
}
bool Avril_FSD::CLIBServerIOConcurrnecy::Get_flag_IsInitialised_Avril_FSD_ServerConcurrency(class Avril_FSD::Framework_Server* obj)
{
    _flag_IsInitialised_Avril_FSD_ServerAssembly = obj->Get_Server_Assembly()->Get_Execute()->Get_Control_Of_Execute()->GetFlag_SystemInitialised(obj);
    return _flag_IsInitialised_Avril_FSD_ServerAssembly;
}
void* Avril_FSD::CLIBServerIOConcurrnecy::Get_program_WriteEnableStack_ServerInputAction()
{
    return (void*)programHandleId_WriteEnalbe_ServerInputAction;
}
void* Avril_FSD::CLIBServerIOConcurrnecy::Get_program_WriteEnableStack_ServerOutputRecieve()
{
    return (void*)programHandleId_WriteEnalbe_ServerOutputRecieve;
}
void Avril_FSD::CLIBServerIOConcurrnecy::Pop_Stack_Output(class Avril_FSD::Framework_Server* obj)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Pop_Stack_Output(obj);
}
void Avril_FSD::CLIBServerIOConcurrnecy::Push_Stack_InputPraises(class Avril_FSD::Framework_Server* obj)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Push_Stack_InputPraises(obj);
}

void Avril_FSD::CLIBServerIOConcurrnecy::Select_Set_Intput_Subset(class Avril_FSD::Framework_Server* obj, __int8 praiseEventId)
{
    obj->Get_Server_Assembly()->Get_Data()->GetBuffer_InputFrontDouble()->Get_Input_Control()->SelectSet_Input_Subset(obj, praiseEventId);
}

void Avril_FSD::CLIBServerIOConcurrnecy::Set_flag_IsNewInputDataReady(Avril_FSD::Framework_Server* obj, bool value)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Set_flag_IsNewInputDataReady(value);
}

void Avril_FSD::CLIBServerIOConcurrnecy::Set_flag_IsNewOutputDataReady(Avril_FSD::Framework_Server* obj, bool value)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Set_flag_IsNewOutputDataReady(value);
}

__int8 Avril_FSD::CLIBServerIOConcurrnecy::Get_PraiseEventId(class Avril_FSD::Framework_Server* obj)
{
    _PraiseEventId = obj->Get_Server_Assembly()->Get_Data()->GetBuffer_OutputBackDouble()->Get_out_praiseEventId();
    return _PraiseEventId;
}
void Avril_FSD::CLIBServerIOConcurrnecy::Set_PraiseEventId(class Avril_FSD::Framework_Server* obj, __int8 value)
{
    obj->Get_Server_Assembly()->Get_Data()->GetBuffer_InputBackDouble()->Set_in_praiseEventId(value);
}
//
bool Avril_FSD::CLIBServerIOConcurrnecy::Get_Praise0_Input_IsPingActive(class Avril_FSD::Framework_Server* obj)
{
    _Praise0_Input_IsPingActive = obj->Get_Server_Assembly()->Get_Data()->Get_User_I()->Get_Praise0_Input()->Get_ping_Active();
    return _Praise0_Input_IsPingActive;
}
void Avril_FSD::CLIBServerIOConcurrnecy::Set_Praise0_Input_IsPingActive(class Avril_FSD::Framework_Server* obj, bool value)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_User_I()->Get_Praise0_Input()->Set_ping_Active(value);
}
bool Avril_FSD::CLIBServerIOConcurrnecy::Get_Praise0_Output_IsPingActive(class Avril_FSD::Framework_Server* obj)
{
    _Praise0_Output_IsPingActive = obj->Get_Server_Assembly()->Get_Data()->Get_User_O()->Get_Praise0_Output()->Get_ping_Active();
    return _Praise0_Output_IsPingActive;
}
void Avril_FSD::CLIBServerIOConcurrnecy::Set_Praise0_Output_IsPingActive(class Avril_FSD::Framework_Server* obj, bool value)
{
    obj->Get_Server_Assembly()->Get_Data()->Get_User_O()->Get_Praise0_Output()->Set_ping_Active(value);
}
//


// This is the constructor of a class that has been exported.
Avril_FSD::CLIBServerIOConcurrnecy::CLIBServerIOConcurrnecy()
{
    return;
}

