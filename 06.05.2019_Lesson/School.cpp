#include "School.h"

School::School()
{
	location = "";
	since = 0;
	children = 0;
}

School::School(string location, int since, int children)
{
	this->location = location;
	this->since = since;
	this->children = children;
}

ostream & operator<<(ostream & os, School obj)
{
	os << obj.location << " " << obj.since << " " << obj.children << endl;
	return os;
}
