/**
* @file g201210044
* @description Veritxt dosyas�ndaki komutlar� yerine getirmek.
* @course ikinci ��retim  B :2B
* @assignment 1. �dev
* @date 9/11//21
* @author Ali Said Sar�temur ali.saritemur@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "TextIsimleri.h"
using namespace std;
int main()
{
	TextIslemleri* tislemleri = new TextIslemleri();
	tislemleri->komutOkuma("Veri.txt");	
	tislemleri->yazdirma();
	delete tislemleri;
	return 0;
	system ("pause");
}
