#include"Shag.h"


int main() {

	Shag shag_almaty("Almaty", 2015, 500, 1000);
	cout << shag_almaty << endl;

	School s1("Almaty", 2000, 300);
	Shag shag_krg(s1, 333);
	cout << shag_krg << endl;

	system("pause");
	return 0;
}