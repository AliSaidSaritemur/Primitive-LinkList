
#include "Dugum.h"
#include "BagliListe.h"
#include <iostream>
using namespace std;

BagliListe::BagliListe() {

	ilk = 0;
};
void BagliListe::ekle(string veri) {

	Dugum* yeni = new Dugum(veri);
	if (ilk == 0) {

		ilk = yeni;
		return;
	}

	Dugum* gec = ilk;

	while (gec->sonraki != 0)
	{
		gec = gec->sonraki;
	}
	gec->sonraki = yeni;
	yeni->onceki = gec;
}

void BagliListe::ekle(string veri, int sira) {
	Dugum* yeni = new Dugum(veri);
	if (ilk == 0) {

		ilk = yeni;
		return;
	}
	int xSira = 0;
	Dugum* gec = ilk;
	while (gec->sonraki != NULL)
	{

		gec->sira = xSira;
		gec = gec->sonraki;
		xSira++;
	}
	gec->sira = xSira;

	if (sira > gec->sira) {

		ekle(veri);
		return;
	}

	Dugum* ekdugum = new Dugum("");
	gec->sonraki = ekdugum;
	ekdugum->onceki = gec;
	ekdugum->sira = xSira + 1;
	gec = ekdugum;

	while (gec->sira != sira)
	{
		gec->veri = gec->onceki->veri;
		gec = gec->onceki;
	}
	gec->veri = veri;

}

void BagliListe::sil() {

	if (ilk == 0) return;

	if (ilk->sonraki == 0) {

		delete ilk;
		ilk = 0;
		return;
	}

	Dugum* gec = ilk;
	while (gec->sonraki != 0)
	{
		gec = gec->sonraki;
	}
	gec->onceki->sonraki = NULL;
	delete gec;
}

void BagliListe::sil(int sira) {

	if (ilk == 0) return;

	if (ilk->sonraki == 0) {

		delete ilk;
		ilk = 0;
		return;
	}
	int sayac = 0;
	Dugum* gec = ilk;
	while (gec->sonraki != NULL)
	{
		sayac++;
		gec = gec->sonraki;
	}

	if (sira > sayac) {
		sil();
		return;
	}

	gec = ilk;
	for (int i = 1; i <= sira; i++)
	{
		gec = gec->sonraki;
	}
	while (gec->sonraki != 0)
	{

		gec->veri = gec->sonraki->veri;
		gec = gec->sonraki;
	}
	gec->onceki->sonraki = 0;
	delete gec;
}

Dugum* BagliListe::getIlk() {

	return ilk;
}

BagliListe::~BagliListe() {

	Dugum* gec = ilk;
	while (gec->sonraki != 0) {

		Dugum* sil = gec;
		gec = gec->sonraki;
		delete sil;
	}

};