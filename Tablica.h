//
// Created by Maciej on 15.03.2023.
//

#ifndef GOL_TABLICA_H
#define GOL_TABLICA_H


class Tablica {
public:
    Tablica(int nw, int nk);
    ~Tablica();
    Tablica(const Tablica& other) = delete;
    Tablica& operator=(const Tablica& other) = delete;
    int GetNw() const;
    int GetNk() const;
    bool GetKomorka(int wiersz, int kolumna) const;
    void SetKomorka(int wiersz, int kolumna, bool wartosc);
    friend class Silnik;
private:
    int m_nw;
    int m_nk;
    bool** m_tablica;
};

#endif //GOL_TABLICA_H
