#include "pch.h"

OpenAvril::Praise0_Algorithm::Praise0_Algorithm()
{
}

OpenAvril::Praise0_Algorithm::~Praise0_Algorithm()
{
}

void OpenAvril::Praise0_Algorithm::Do_Praise(OpenAvril::Praise0_Input* ptr_In_SubSet, OpenAvril::Praise0_Output* ptr_Out_SubSet)
{
        ptr_Out_SubSet->set_ping_Active(ptr_In_SubSet->get_ping_Active());
}
