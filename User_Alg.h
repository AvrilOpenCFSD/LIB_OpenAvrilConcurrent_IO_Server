#pragma once

namespace OpenAvrilConcurrency
{
	class User_Alg
	{
	public:
// constructor.
		User_Alg();

// destructor.
		virtual ~User_Alg();

// public.
	// dynamic.
		// get.
		class Object* get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
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
		static void stat_create_ptr_Praise0_Algorithm();
		static void stat_create_ptr_list_Of_Praise_Alg_Subsets(class Object* newDEFAULT_Object);
		// get.
		static class Praise0_Algorithm* stat_get_ptr_Praise0_Algorithm();
		static class Object* stat_get_ptr_Item_On_list_Of_Praise_Alg_Subsets(uint8_t praiseID);
		static std::list<class Object*>* stat_get_ptr_list_Of_Praise_Alg_Subsets();
		// set.
		static void stat_set_ptr_Praise0_Algorithm(class Praise0_Algorithm* praise0_A);
		static void stat_set_ptr_Item_On_list_Of_Praise_Alg_Subsets(uint8_t praiseID, class Object* newPtr);
	// pointers.
		// classes.
		// registers.
		static std::list<class Object*>* _ptr_list_Of_Praise_Alg_Subsets;
	};
}

