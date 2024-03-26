#include<iostream>
#include<string>
using namespace std;

class Location {
private:
	int L_x;
	int L_y;
public:
	void setX(int x) {
		L_x = x;
	}
	void setY(int y) {
		L_y = y;
	}
	int getX() {
		return L_x;
	}
	int getY() {
		return L_y;
	}
};

class chessBoard {
private:
	Location L;
public:
	void setLocation(int x, int y) {
		L.setX(x);
		L.setY(y);
	}
	void getLocation() {
		cout << "x = " << L.getX() << "  " << "y=" << L.getY() << endl;
	}
};

class chessPlayer {
private:
	string userName;
	int chessType;
	int P_x;
	int P_y;
public:
	void setChessType(int type) {
		chessType = type;
	}
	void setChessLocation(int x, int y) {
		P_x = x;
		P_y = y;
	}
	void getUserName() {
		cout << "userName = " << userName << endl;
	}
	void getChessType() {
		cout << "chessType = " << chessType << endl;
	}
	void getChessLocation() {
		cout << "chessLocation:" << "x = " << P_x << "  " << "y=" << P_y << endl;
	}
};

int main() {
	chessBoard cb;
	chessPlayer cp;
	cb.setLocation(1, 1);
	cb.getLocation();
	cp.setChessType(1);
	cp.setChessLocation(3, 2);
	cp.getChessType();
	cp.getChessLocation();
	return 0;
}