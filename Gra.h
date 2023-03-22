//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_GRA_H
#define GOL_GRA_H


class Gra {
public:
    virtual ~Gra();
    Gra(const Gra& other) = delete;
    Gra& operator=(const Gra& other) = delete;

    virtual void View() const = 0;
protected:
    Gra();
    // pola klasy Gra
};


#endif //GOL_GRA_H
