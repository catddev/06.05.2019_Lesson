#include"School.h"
#include"University.h"
using namespace std;

class Institution;//!!!
class School;//!!!
class Shag: public School, public University {//наследует от двух классов, которые виртуально наследуют от института

public:
	Shag();
	Shag(string location, int since, int children, int adults);
	Shag(School obj, int adults);//чтобы напрямую от школы мог наследовать, нужны дружественные классы - сам School и его родитель Institution

	friend ostream& operator<<(ostream& os, Shag obj);
	friend Institution;
	friend School;
};