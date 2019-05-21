#include "Institution.h"

Institution::Institution()
{
	location = "";
	since = 0;
}

Institution::Institution(string location, int since)
{
	this->location = location;
	this->since = since;
}
