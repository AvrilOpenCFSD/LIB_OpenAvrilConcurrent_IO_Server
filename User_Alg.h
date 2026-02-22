#pragma once

namespace OpenAvril
{
	class User_Alg
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		User_Alg();

// destructor.
		virtual ~User_Alg();

// public.
	// get.
		class Praise0_Algorithm* get_Praise0_Algorithm();
		class Praise1_Algorithm* get_Praise1_Algorithm();
		class Praise2_Algorithm* get_Praise2_Algorithm();
	// set.

	private:
// private.
		void create_Praise0_Algorithm();
		void create_Praise1_Algorithm();
		void create_Praise2_Algorithm();
	// get.
	// set.
		void set_Praise0_Algorithm(class Praise0_Algorithm* praise0_A);
		void set_Praise1_Algorithm(class Praise1_Algorithm* praise1_A);
		void set_Praise2_Algorithm(class Praise2_Algorithm* praise2_A);
	};
}

