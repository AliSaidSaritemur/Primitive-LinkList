#ifndef Dugum_hpp
#define Dugum_hpp
#include <iostream>
using namespace std;

class Dugum {

public:
	Dugum(string veri);
	~Dugum();
	int sira;
	string veri;
	Dugum* sonraki;
	Dugum* onceki;
};

#endif
