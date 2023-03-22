//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_GRATXT_H
#define GOL_GRATXT_H


#include "Gra.h"
#include "Silnik.h"

class GraTxt : public Gra {
public:
    GraTxt();
    ~GraTxt();
    GraTxt(const GraTxt& other) = delete;
    GraTxt& operator=(const GraTxt& other) = delete;
    virtual void View();
};


#endif //GOL_GRATXT_H
