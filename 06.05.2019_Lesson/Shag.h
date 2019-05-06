#include"School.h"
#include"University.h"
using namespace std;

class Shag: public School, public University {//наследует от двух классов, которые виртуально наследуют от института

public:
	Shag();
	Shag(string location, int since, int children, int adults);

	friend ostream& operator<<(ostream& os, Shag obj);

};