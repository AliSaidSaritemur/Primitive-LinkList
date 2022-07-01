#ifndef TextIslemleri_hpp
#define TextIslemleri_hpp
#include <iostream>
#include "BagliListe.h"
#include "Dugum.h"
using namespace std;

class TextIslemleri {

public:
	void komutOkuma(string txtDosyasi); //Girilen komutu denetler ve denetim sonucuna göre yönlendirir 
	int indis(string komut); //Girilen komutta istenilen indisi bulur
	string veri(string komut); //Girilen komutta istenilen veriyi bulur
	void yazdirma();  //Girilen komutlarýn sonucu olan çýktýyý veriri
	void komutEkle(string satir); //Girilen komutu dentler ve ekle metodunu çaðýrýr
	void komutSil(string satir); //Girilen komutu dentler ve sil metodunu çaðýrýr
};

#endif
