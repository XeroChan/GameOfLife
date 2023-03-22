//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_GRATXT_H
#define GOL_GRATXT_H


#include "Gra.h"
#include "Silnik.h"

class GraTxt : public Gra {
public:
    GraTxt(Silnik& silnik);
    ~GraTxt();
    GraTxt(const GraTxt& other) = delete;
    GraTxt& operator=(const GraTxt& other) = delete;

    virtual void View() const;
private:
    Silnik& m_silnik;
    // inne pola klasy GraTxt
};


#endif //GOL_GRATXT_H
