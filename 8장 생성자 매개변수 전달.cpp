


#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }

};

class WideTV : public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) : TV(size) {
		this->videoln = videoln;
	}
	bool getVideoln() { return videoln; }
};
