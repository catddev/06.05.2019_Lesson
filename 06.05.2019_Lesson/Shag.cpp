#include "Shag.h"

Shag::Shag()
{
	location = "";
	since = 0;
	children = 0;
	adults = 0;
}

Shag::Shag(string location, int since, int children, int adults)
{
	this->location = location;
	this->since = since;
	this->children=children;
	this->adults = adults;
}

Shag::Shag(School obj, int adults)
{
	this->location = obj.location;
	this->since = obj.since;
	this->children = obj.children;
	this->adults = adults;
}

ostream & operator<<(ostream & os, Shag obj)
{
	os << obj.location << " " << obj.since << " " << obj.children << " " << obj.adults << endl;
	return os;
}
