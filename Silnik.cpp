#include "Silnik.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Silnik::Silnik(){

}

Silnik::~Silnik() {
}

void Silnik::Init() {
    // otwórz plik z danymi
    ifstream plik("C:\\Users\\Maciej\\IdeaProjects\\GameOfLife\\dane.in");

    // sprawdź czy plik został otwarty poprawnie
    if (!plik) {
        cout << "Nie udalo sie otworzyc pliku." << endl;
        exit(1);
    }

    // odczytaj rozmiary tablicy
    int nw, nk;
    plik >> nw >> nk;


    Arr = new Tablica(nw, nk);
    Atmp = new Tablica(nw, nk);

    // wypełnij tablicę wartościami false
    for (int i = 0; i < nw; i++) {
        for (int j = 0; j < nk; j++) {
            Arr->SetKomorka(i,j, false);
            Atmp->SetKomorka(i,j, false);
        }
    }


    // odczytaj liczbę żywych komórek
    int lz;
    plik >> lz;
    // odczytaj współrzędne żywych komórek i ustaw ich wartości w tablicy
    for (int i = 0; i < lz; i++) {
        int w, k;
        plik >> w >> k;
        Arr->SetKomorka(w, k, true);
        Atmp->SetKomorka(w, k, true);
    }
}

void Silnik::Analiza() {
    int sasiedzi;

    // skopiuj aktualny stan planszy do Atmp
    for (int i = 0; i < Arr->GetNw(); i++) {
        for (int j = 0; j < Arr->GetNk(); j++) {
            Atmp->SetKomorka(i, j, Arr->GetKomorka(i, j));
        }
    }
    // analiza zmian komórek
    for (int i = 0; i < Arr->GetNw(); i++) {
        for (int j = 0; j < Arr->GetNk(); j++) {
            sasiedzi = 0;
            for (int w = i-1; w <= i+1; w++) {
                for (int k = j-1; k <= j+1; k++) {
                    if (w == i && k == j) continue;
                    if (w >= 0 && w < Arr->GetNw() && k >= 0 && k < Arr->GetNk()) {
                        if(Atmp->GetKomorka(w, k)){
                            sasiedzi++;
                        }
                    }
                }
            }
            bool komorka = Atmp->GetKomorka(i, j);
            if (komorka && (sasiedzi == 2 || sasiedzi == 3)) {
                Arr->SetKomorka(i, j, true);
            } else if (!komorka && sasiedzi == 3) {
                Arr->SetKomorka(i, j, true);
            }
            else{
                Arr->SetKomorka(i, j, false);
            }
        }
    }
}

Tablica *Silnik::getArrPointer() {
    return Arr;
}

