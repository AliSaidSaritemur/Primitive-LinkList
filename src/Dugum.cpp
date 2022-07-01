/**
* @file g201210044
* @description Veritxt dosyasýndaki komutlarý yerine getirmek.
* @course ikinci öðretim  B :2B
* @assignment 1. Ödev
* @date 9/11//21
* @author Ali Said Sarýtemur ali.saritemur@ogr.sakarya.edu.tr
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