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
    void Init();
    void Analiza();
    Tablica& GetTablica();

protected:
    Tablica *Arr,*Atmp;
};

#endif //GOL_SILNIK_H