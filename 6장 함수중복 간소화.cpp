

//함수 중복 간소화

#include <iostream>
using namespace std;


void fileLine(int n = 25, char c = '*') {
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}

int main() {

	fileLine();
	fileLine(10, '%');

}
