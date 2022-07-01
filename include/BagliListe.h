#ifndef BagliListe_hpp
#define BagliListe_hpp
#include "Dugum.h"
#include <iostream>
using namespace std;

class BagliListe {

public:

	BagliListe();
	~BagliListe(); //Yýkýcý fonksiyon olarak listeyle beraber düðümlerinde silinmesini saðlar
	void ekle(string veri, int sira); // Ýndisi belirtilen verinin eklenmesini saðlar
	void ekle(string veri); // Ýndisi belirtilmeyen verinin eklenmesini saðlar
	void sil(int sira);	//Ýndisi belirtilen verinin silinmesini saðlar
	void sil(); // Ýndisi belirtilmeyen verinin silinmesini saðlar
	Dugum* getIlk(); //Ýlk düðümü getirir

private:
	Dugum* ilk;
};

#endif

