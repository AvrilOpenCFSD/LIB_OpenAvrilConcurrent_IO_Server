#include "pch.h"

bool ping_Active;

OpenAvril::Praise0_Output::Praise0_Output()
{
	ping_Active = false;
}

OpenAvril::Praise0_Output::~Praise0_Output()
{
}
bool OpenAvril::Praise0_Output::get_ping_Active()
{
	return ping_Active;
}
void OpenAvril::Praise0_Output::set_ping_Active(bool value)
{
	ping_Active = value;
}