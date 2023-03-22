#include <unistd.h>
#include "Silnik.h"


using namespace std;

int main() {
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
    system("pause");
    return 0;
}
