#pragma once

namespace OpenAvrilConcurrency
{
	class Praise0_Output
	{
	public:
		Praise0_Output();
		virtual ~Praise0_Output();

		void create_output_Value();

		double get_output_Value();

		void set_output_Value(double newValue);
	};
}