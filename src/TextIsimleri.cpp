
#include "BagliListe.h"
#include "TextIsimleri.h"
#include <iostream>
#include <fstream>
#include "Dugum.h"
#include <string>
using namespace std;
string satir;
BagliListe* bagliListe = new BagliListe();

void TextIslemleri::komutOkuma(string txtDosyasi) {

	ifstream veriGirme;
	veriGirme.open("Veri.txt");

	while (getline(veriGirme, satir)) {

		string komut = satir.substr(0, 1);

		if (komut == "E" || komut == "e")  komutEkle(satir);

		if (komut == "S" || komut == "s") komutSil(satir);

	}
	veriGirme.close();
};
int TextIslemleri::indis(string komut) {
	int a = 0;
	int deger;
	int indisi = 0;
	for (char item : komut) {

		if (item == ')')break;
		if (item == '#')  break;
		if (a > 0) {
			deger = item - '0';
			if (deger > '9') {
				indisi = -1;
				break;
			}
			indisi *= 10;
			indisi += deger;
		}

		if (item == '(') {
			a++;
		}

	}
	return indisi;
};

string TextIslemleri::veri(string komut) {

	int a = 0;

	string veri = "";

	for (char item : komut) {
		if (item == ')')  break;
		if (a > 0) {
			veri += item;
		}

		if (item == '#') a++;
	}
	if (a == 0) {
		for (char item : komut) {

			if (item == ')')  break;
			if (a > 0) {
				veri += item;
			}
			if (item == '(') a++;
		}
	}
	return veri;
};


void TextIslemleri::yazdirma() {
	Dugum* gec = bagliListe->getIlk();
	while (gec != 0)
	{
		cout << gec->veri;
		if (gec->sonraki == 0)break;
		cout << " <-> ";
		gec = gec->sonraki;
	}
	delete bagliListe;
}

void TextIslemleri::komutEkle(string satir) {


	if (indis(satir) < 0)
	{

		bagliListe->ekle(veri(satir));
	}
	else {


		bagliListe->ekle(veri(satir), indis(satir));
	}
}

void TextIslemleri::komutSil(string satir) {

	if (satir.substr(0, 3) == ")")
	{
		bagliListe->sil();
		return;
	}
	bagliListe->sil(indis(satir));
}
