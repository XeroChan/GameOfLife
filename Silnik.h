//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_SILNIK_H
#define GOL_SILNIK_H


#include "Tablica.h"

class Silnik {
public:
    Silnik();
    ~Silnik();
    Silnik(const Silnik& other) = delete;
    Silnik& operator=(const Silnik& other) = delete;
    void Init();
    void Analiza();
    Tablica* getArrPointer();

protected:
    Tablica *Arr,*Atmp;
};

#endif //GOL_SILNIK_H