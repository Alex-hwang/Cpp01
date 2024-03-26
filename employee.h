#pragma once
#include<ctime>
#include<iostream>
#include<string>
using namespace std;

class employee {
private:
	int indicidualEmpNo;
	int grade;
	int accumPay;
public:
	void setEmpNo(int);
	void setGrade(int);
	void setAccumPay(int);
	void dispaly();
	employee(int, int, int);
	employee();
	~employee();
};