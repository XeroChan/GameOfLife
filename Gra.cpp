#include <unistd.h>
#include "Silnik.h"
#include "Gra.h"


using namespace std;

int main() {

    system("pause");
    return 0;
}

Tablica Gra::getArray() {
    return *Arr;
}

void Gra::Play() {
    Silnik gra;
    gra.FirstTbl();
    gra.Init();
    sleep(2);
    system("cls");
    while(true){
        gra.Analiza();
        gra.Init();
        sleep(2);
        system("cls");
    }
}
