#include "Tablica.h"
#include <iostream>
#include <fstream>

using namespace std;

Tablica::Tablica(int nw, int nk){
    m_nw = nw;
    m_nk = nk;
    m_tablica = new bool*[nw];
    for (int i = 0; i < nw; i++) {
        m_tablica[i] = new bool[nk];
    }
}

Tablica::~Tablica() {
    for (int i = 0; i < m_nw; i++) {
        delete[] m_tablica[i];
    }
    delete[] m_tablica;
}

Tablica& Tablica::operator=(const Tablica& other) {}

int Tablica::GetNw() const {
    return m_nw;
}

int Tablica::GetNk() const {
    return m_nk;
}

bool Tablica::GetKomorka(int wiersz, int kolumna) const {
    return m_tablica[wiersz][kolumna];
}

void Tablica::SetKomorka(int wiersz, int kolumna, bool wartosc) {
    m_tablica[wiersz][kolumna] = wartosc;
}