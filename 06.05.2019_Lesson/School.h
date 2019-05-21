#pragma once
#include"Institution.h"

class Shag;
class School:virtual public Institution {
protected:
	int children;
public:
	School();
	School(string location, int since, int children);

	friend ostream& operator<<(ostream& os, School obj);
};