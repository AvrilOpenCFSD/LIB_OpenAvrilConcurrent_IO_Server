#include "pch.h"

	int8_t _output_Value = NULL;

	OpenAvril::Praise0_Output::Praise0_Output()
	{
		create_output_Value();
	}

	OpenAvril::Praise0_Output::~Praise0_Output()
	{

	}

	void OpenAvril::Praise0_Output::create_output_Value()
	{

	}

	double OpenAvril::Praise0_Output::get_output_Value()
	{
		return _output_Value;
	}

	void OpenAvril::Praise0_Output::set_output_Value(double newValue)
	{
		_output_Value = newValue;
	}
