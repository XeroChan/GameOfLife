//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_GRAAPI_H
#define GOL_GRAAPI_H


#include "Gra.h"
#include "Silnik.h"

class GraAPI : public Gra {
public:
    GraAPI(Silnik& silnik);
    ~GraAPI();
    GraAPI(const GraAPI& other) = delete;
    GraAPI& operator=(const GraAPI& other) = delete;

    virtual void View() const;
private:
    Silnik& m_silnik;
    // inne pola klasy GraAPI
};


#endif //GOL_GRAAPI_H
