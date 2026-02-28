#pragma once

namespace OpenAvrilConcurrency
{
	class Praise0_Input
	{
	public:
// constructor.
		Praise0_Input();

// destructor.
		virtual ~Praise0_Input();

// public.
	// dynamic.
		// get.
		double get_ptr_input_Value_A();
		double get_ptr_input_Value_B();
		// set.
		void set_input_Value_A(double* newValue);
		void set_input_Value_B(double* newValue);
	// static.
		// get.
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void stat_create_ptr_input_Value_A(double* newDEFAULT_Double);
		static void stat_create_ptr_input_Value_B(double* newDEFAULT_Double);
		// get.
		static double stat_get_ptr_input_Value_A();
		static double stat_get_ptr_input_Value_B();
		// set.
		static void stat_set_input_Value_A(double* newValue);
		static void stat_set_input_Value_B(double* newValue);
	// pointers.
		// classes.
		// registers.
		static double* _ptr_input_Value_A;
		static double* _ptr_input_Value_B;
	};
}