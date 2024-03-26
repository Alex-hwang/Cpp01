#include<iostream>
#include<string>
using namespace std;

class CPU {
private:
	int frequency;
	float voltage;
	enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

public:
	void inputFrequency() {
		cout << "ÇëÊäÈëfrequency£º" << endl;
		int fre;
		cin >> fre;
		frequency = fre;
	}
	void inputVoltage() {
		cout << "ÇëÊäÈëvoltage: " << endl;
		float vol;
		cin >> vol;
		voltage = vol;
	}
	void display() {
		cout << "frequency = " << frequency << endl;
		cout << "voltage = " << voltage << endl;
		cout << "rank = " << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << " " << 6 << " " << 7 << endl;
	}
};

int main(void) {
	CPU cpu;
	cpu.inputFrequency();
	cpu.inputVoltage();
	cpu.display();
}