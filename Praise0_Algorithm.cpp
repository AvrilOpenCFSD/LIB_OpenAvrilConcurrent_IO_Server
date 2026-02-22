#include "pch.h"

OpenAvrilConcurrency::Praise0_Algorithm::Praise0_Algorithm()
{
}

OpenAvrilConcurrency::Praise0_Algorithm::~Praise0_Algorithm()
{
}

void OpenAvrilConcurrency::Praise0_Algorithm::Do_Praise(OpenAvrilConcurrency::Praise0_Input* ptr_In_SubSet, OpenAvrilConcurrency::Praise0_Output* ptr_Out_SubSet)
{
        ptr_Out_SubSet->set_output_Value(ptr_In_SubSet->get_input_Value_A() + ptr_In_SubSet->get_input_Value_B());
}
