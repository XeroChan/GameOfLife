#include <unistd.h>
#include "Silnik.h"
#include "Gra.h"

void Gra::play() {
    Silnik gra;
    gra.Init();

    Tablica* arr = gra.getArrPointer();
    View(arr);
    sleep(2);
    system("cls");

    while(true){
        gra.Analiza();
        View(arr);
        sleep(2);
        system("cls");
    }
}

Gra::Gra() {

}

Gra::~Gra() {

}

void Gra::View(Tablica *) {

}

