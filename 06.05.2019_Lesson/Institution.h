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
//классы Школа и Университет будут наследовать от института ВИРТУАЛЬНО -
//чтобы у Шага(конечного класса) при наследовании одинаковых свойств от школы и универа, создавалась таблица сопоставления этих свойств и не было конфликта