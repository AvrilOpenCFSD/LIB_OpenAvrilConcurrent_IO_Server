#include "pch.h"

	uint8_t _output_Value = NULL;

	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		create_output_Value();
	}

	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{

	}

	void OpenAvrilConcurrency::Praise0_Output::create_output_Value()
	{

	}

	double OpenAvrilConcurrency::Praise0_Output::get_output_Value()
	{
		return _output_Value;
	}

	void OpenAvrilConcurrency::Praise0_Output::set_output_Value(double newValue)
	{
		_output_Value = newValue;
	}
