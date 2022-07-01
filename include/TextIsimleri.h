#ifndef TextIslemleri_hpp
#define TextIslemleri_hpp
#include <iostream>
#include "BagliListe.h"
#include "Dugum.h"
using namespace std;

class TextIslemleri {

public:
	void komutOkuma(string txtDosyasi); //Girilen komutu denetler ve denetim sonucuna g�re y�nlendirir 
	int indis(string komut); //Girilen komutta istenilen indisi bulur
	string veri(string komut); //Girilen komutta istenilen veriyi bulur
	void yazdirma();  //Girilen komutlar�n sonucu olan ��kt�y� veriri
	void komutEkle(string satir); //Girilen komutu dentler ve ekle metodunu �a��r�r
	void komutSil(string satir); //Girilen komutu dentler ve sil metodunu �a��r�r
};

#endif
