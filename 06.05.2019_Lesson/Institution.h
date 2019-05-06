#pragma once
#include<iostream>
#include <string>
using namespace std;

class Institution {
protected:
	string location;
	int since;
public:
	Institution();
	Institution(string loaction, int since);
};
//решение проблемы ромба:
//классы Ўкола и ”ниверситет будут наследовать от института ¬»–“”јЋ№Ќќ -
//чтобы у Ўага(конечного класса) при наследовании одинаковых свойств от школы и универа, создавалась таблица сопоставлени€ этих свойств и не было конфликта