#pragma once
#include"Institution.h"

class University: virtual public Institution {
protected:
	int adults;
public:
	University();
	University(string location, int since, int adults);

	friend ostream& operator<<(ostream& os, University obj);
};