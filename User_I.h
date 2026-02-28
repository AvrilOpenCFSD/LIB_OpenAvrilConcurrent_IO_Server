#pragma once

namespace OpenAvrilConcurrency
{
	class User_I
	{
	public:
// constructor.
		User_I();

// destructor.
		virtual ~User_I();

// public.
	// dynamic.
		// get.
		class Praise0_Input* get_ptr_Praise0_Input();
		// set.
	// static.
		// get.
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void stat_create_ptr_Praise0_Input();
		// get.
		static class Praise0_Input* get_create_ptr_Praise0_Input();
		// set.
		static void stat_set_ptr_Praise0_Input(class Praise0_Input* praise0_I);
	// pointers.
		// classes.
		static class Praise0_Input* _ptr_Praise0_Input;
		// registers.

	};
}