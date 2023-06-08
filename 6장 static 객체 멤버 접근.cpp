

#include <iostream>
using namespace std;

class Person {
public:
	int money; //개인 소유의 돈 
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}

};

//static 변수 생성, 전역 공간에 생성
int Person::sharedMoney = 10;

//메인 함수 
int main() {
	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << ' '
		<< lee.money << endl;
	cout << han.sharedMoney << ' '
		<< lee.sharedMoney << endl;
}

