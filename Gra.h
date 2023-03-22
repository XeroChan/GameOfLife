//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_GRA_H
#define GOL_GRA_H


#include "Silnik.h"

class Gra : public Silnik{
public:
    Gra();
    ~Gra();
    virtual void View() const = 0;
    Tablica getArray();
    void Play();
};


#endif //GOL_GRA_H
