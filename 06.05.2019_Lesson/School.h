#pragma once
#include<iostream>
#include <string>
#include"Institution.h"
using namespace std;

class School:virtual public Institution {
protected:
	int children;
public:
	School();
	School(string location, int since, int children);

	friend ostream& operator<<(ostream& os, School obj);
};