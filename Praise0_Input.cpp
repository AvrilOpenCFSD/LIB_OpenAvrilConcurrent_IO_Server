#include "pch.h"

bool pingIn_Active;

OpenAvril::Praise0_Input::Praise0_Input()
{
	pingIn_Active = false;
}

OpenAvril::Praise0_Input::~Praise0_Input()
{
	
}

bool OpenAvril::Praise0_Input::get_ping_Active()
{
	return pingIn_Active;
}

void OpenAvril::Praise0_Input::set_ping_Active(bool value)
{
	pingIn_Active = value;
}