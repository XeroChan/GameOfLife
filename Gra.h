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
    Gra(const Gra& other) = delete;
    Gra& operator=(const Gra& other) = delete;
    virtual void View(Tablica*);
    void play();
};


#endif //GOL_GRA_H
