#pragma once

namespace OpenAvril
{
	class Praise0_Input
	{
	public:
		Praise0_Input();
		virtual ~Praise0_Input();

		void create_input_Value_A();
		void create_input_Value_B();

		double get_input_Value_A();
		double get_input_Value_B();

		void set_input_Value_A(double newValue);
		void set_input_Value_B(double newValue);
	};
}