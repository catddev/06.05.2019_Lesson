#pragma once
#include<iostream>
#include <string>
using namespace std;

class Shag;//!!!!!!!
class Institution {
protected:
	string location;
	int since;
public:
	Institution();
	Institution(string location, int since);

	friend Shag;
};
//решение проблемы ромба:
//классы Школа и Университет будут наследовать от института ВИРТУАЛЬНО -
//чтобы у Шага(конечного класса) при наследовании одинаковых свойств от школы и универа, создавалась таблица сопоставления этих свойств и не было конфликта