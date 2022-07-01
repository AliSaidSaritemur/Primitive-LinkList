
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
