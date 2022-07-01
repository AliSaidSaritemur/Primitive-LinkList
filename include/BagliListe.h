#ifndef BagliListe_hpp
#define BagliListe_hpp
#include "Dugum.h"
#include <iostream>
using namespace std;

class BagliListe {

public:

	BagliListe();
	~BagliListe(); //Y�k�c� fonksiyon olarak listeyle beraber d���mlerinde silinmesini sa�lar
	void ekle(string veri, int sira); // �ndisi belirtilen verinin eklenmesini sa�lar
	void ekle(string veri); // �ndisi belirtilmeyen verinin eklenmesini sa�lar
	void sil(int sira);	//�ndisi belirtilen verinin silinmesini sa�lar
	void sil(); // �ndisi belirtilmeyen verinin silinmesini sa�lar
	Dugum* getIlk(); //�lk d���m� getirir

private:
	Dugum* ilk;
};

#endif

