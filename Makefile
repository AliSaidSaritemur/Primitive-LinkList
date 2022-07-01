VPATH = ./src
CXXFLAGS = -I ./include	

all:program calistirma

program:Dugum.o main.o TextIsimleri.o BagliListe.o
	g++  ./lib/Dugum.o	./lib/main.o	./lib/TextIsimleri.o	./lib/BagliListe.o -o ./bin/program
	
Dugum.o:Dugum.cpp
	g++ -c $(CXXFLAGS) $< -o ./lib/Dugum.o
	
main.o:main.cpp
	g++ -c $(CXXFLAGS) $< -o ./lib/main.o
	
TextIsimleri.o:TextIsimleri.cpp
	g++ -c $(CXXFLAGS) $<  -o ./lib/TextIsimleri.o
	
BagliListe.o:BagliListe.cpp
	g++ -c $(CXXFLAGS) $< -o  ./lib/BagliListe.o
	
calistirma:
	./bin/program