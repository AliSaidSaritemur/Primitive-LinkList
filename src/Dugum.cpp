/**
* @file g201210044
* @description Veritxt dosyas�ndaki komutlar� yerine getirmek.
* @course ikinci ��retim  B :2B
* @assignment 1. �dev
* @date 9/11//21
* @author Ali Said Sar�temur ali.saritemur@ogr.sakarya.edu.tr
*/
#include "Dugum.h"
#include <iostream>
using namespace std;
Dugum::Dugum(string veri) {

	this->veri = veri;
	sonraki = onceki = 0;
}

Dugum::~Dugum() {
}