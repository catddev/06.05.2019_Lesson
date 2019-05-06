#pragma once
#include<iostream>
#include <string>
#include"Institution.h"
using namespace std;

class University: virtual public Institution {
protected:
	int adults;
public:
	University();
	University(string location, int since, int adults);

	friend ostream& operator<<(ostream& os, University obj);
};