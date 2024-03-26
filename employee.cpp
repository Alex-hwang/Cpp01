#include"employee.h"

void employee::setEmpNo(int empno) {
	indicidualEmpNo = empno;
}
void employee::setGrade(int g) {
	grade = g;
}
void employee::setAccumPay(int pay) {
	accumPay = pay;
}
void employee::dispaly() {
	cout << "EmpNo: " << indicidualEmpNo << " ";
	cout << "Grade: " << grade << " ";
	cout << "AccumPay: " << accumPay << " ";
	cout << endl;
}

employee::employee() {
	setEmpNo(10004);
	setGrade(11);
	setAccumPay(12000);
}

employee::employee(int no, int gr, int pa) {
	setEmpNo(no);
	setGrade(gr);
	setAccumPay(pa);
}
employee::~employee() {
}

int main() {
	srand((unsigned int)time(NULL));
	employee e1(10001, 8, 12140);
	employee e2(10002, 7, 11245);
	employee e3(10003, 10, 15265);

	int no = 10004;
	int gr = rand() % 6 + 5;
	int pa = rand() % 6000 + 10000;
	employee(e);

	cout << "员工信息：" << endl;
	cout << "员工1：" << endl;
	e1.dispaly();
	cout << "员工2：" << endl;
	e2.dispaly();
	cout << "员工3：" << endl;
	e3.dispaly();
	cout << "员工4：" << endl;
	e.dispaly();

	cout << "欢迎使用，再见！" << endl;
	return 0;
	system("pause");
}