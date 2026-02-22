#include "pch.h"

	int8_t _input_Value_A = NULL;
	int8_t _input_Value_B = NULL;

	OpenAvril::Praise0_Input::Praise0_Input()
	{

	}

	OpenAvril::Praise0_Input::~Praise0_Input()
	{
	
	}

	void OpenAvril::Praise0_Input::create_input_Value_A()
	{
		set_input_Value_A(double(0.0));
	}

	void OpenAvril::Praise0_Input::create_input_Value_B()
	{
		set_input_Value_B(double(0.0));
	}

	double OpenAvril::Praise0_Input::get_input_Value_A()
	{
		return _input_Value_A;
	}

	double OpenAvril::Praise0_Input::get_input_Value_B()
	{
		return _input_Value_B;
	}

	void OpenAvril::Praise0_Input::set_input_Value_A(double newValue)
	{
		_input_Value_A = newValue;
	}

	void OpenAvril::Praise0_Input::set_input_Value_B(double newValue)
	{
		_input_Value_B = newValue;
	}

