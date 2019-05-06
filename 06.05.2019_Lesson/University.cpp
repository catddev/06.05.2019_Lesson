#include "University.h"

University::University()
{
	location = "";
	since = 0;
	adults = 0;
}

University::University(string location, int since, int adults)
{
	this->location = location;
	this->since = since;
	this->adults = adults;
}

ostream & operator<<(ostream & os, University obj)
{
	os << obj.location << " " << obj.since << " " << obj.adults << endl;
	return os;
}
