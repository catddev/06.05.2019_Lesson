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
//������� �������� �����:
//������ ����� � ����������� ����� ����������� �� ��������� ���������� -
//����� � ����(��������� ������) ��� ������������ ���������� ������� �� ����� � �������, ����������� ������� ������������� ���� ������� � �� ���� ���������