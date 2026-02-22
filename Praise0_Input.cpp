#include "pch.h"

	uint8_t _input_Value_A = NULL;
	uint8_t _input_Value_B = NULL;

	OpenAvrilConcurrency::Praise0_Input::Praise0_Input()
	{

	}

	OpenAvrilConcurrency::Praise0_Input::~Praise0_Input()
	{
	
	}

	void OpenAvrilConcurrency::Praise0_Input::create_input_Value_A()
	{
		set_input_Value_A(double(0.0));
	}

	void OpenAvrilConcurrency::Praise0_Input::create_input_Value_B()
	{
		set_input_Value_B(double(0.0));
	}

	double OpenAvrilConcurrency::Praise0_Input::get_input_Value_A()
	{
		return _input_Value_A;
	}

	double OpenAvrilConcurrency::Praise0_Input::get_input_Value_B()
	{
		return _input_Value_B;
	}

	void OpenAvrilConcurrency::Praise0_Input::set_input_Value_A(double newValue)
	{
		_input_Value_A = newValue;
	}

	void OpenAvrilConcurrency::Praise0_Input::set_input_Value_B(double newValue)
	{
		_input_Value_B = newValue;
	}

