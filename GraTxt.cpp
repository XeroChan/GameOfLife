//
// Created by Maciej on 15.03.2023.
//

#include "GraTxt.h"
#include <iostream>

using namespace std;

void GraTxt::View(Tablica* Arr) {
    for (int i = 0; i < Arr->GetNw(); i++) {
        for (int j = 0; j < Arr->GetNk(); j++) {
            if (Arr->GetKomorka(i, j)) {
                cout << "X";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

GraTxt::GraTxt() {

}

GraTxt::~GraTxt() {

}

int main(){
    GraTxt game;
    game.play();
}
