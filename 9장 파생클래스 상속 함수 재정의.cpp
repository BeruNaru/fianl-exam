


//파생클래스 함수 재정의 
#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }

};

void main() {

	Derived d, *pDer;
	pDer = &d;
	pDer->f(); 

	Base* pBase;
	pBase = pDer;
	pBase->f();
}
