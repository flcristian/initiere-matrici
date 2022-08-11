#include "functii.h"

void aplicare() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
}

// EXERCITII :

// 1. Se citeste o matrice de maxim 50-100 elemente
// numere intregi.
// a) Cate elemente pare ce stau pe pozitie divizibila
// cu 2 si cu 3 avem in matrice?
// b) Sa se afiseze suma elementelor prime ce stau pe o linie
// para si pe o coloana impara.
// c) Inlocuiti fiecare element patrat perfect cu suma elementelor
// de pe linia pe care se afla.
// d) Sa se gaseasca minimul de pe linia L si maximul de pe
// coloana C. Sa se interschimbe aceste doua elemente. In cazul
// in care se gasesc mai multe minime/maxime, se va interschimba primul
// minim si ultimul maxim.
// e) Realizati un nou vector care sa contina toate elementele
// palindrome in ordinea in care apar ele daca am parcurge
// matricea pe coloane.
// f) Realizati suma elementelor de pe fiecare linie in parte. Care este maximul
// dintre acestea?
// g) Afisati media aritmetica a elementelor de pe linia unde se
// gaseste numarul cu cele mai multe cifre binare.

// 1-a

void solutiepb1a() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Matricea contine " << countParePosDiv2si3(x, m, n) << " numere cu aceasta proprietate." << endl;
}

// 1-b

void solutiepb1b() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Suma numerelor prime ce stau pe linie para si coloana impara este : " << sumaElementelorProprietate1b(x, m, n) << "." << endl;
}

// 1-c

void solutiepb1c() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    inlocuirePatratePerfecteSumaLinie(x, m, n);
    cout << "Matricea dupa inlocuirea elementelor patrat perfecte cu suma elementelor de pe linia lor este : " << endl;
    afisareMatrice(x, m, n);
}

// 1-d

void solutiepb1d() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    int linie, coloana;
    cout << "Introduceti linia : ";
    cin >> linie;
    cout << "Introduceti coloana : ";
    cin >> coloana;
    gasireMinMaxLinColSiInterschimbare(x, m, n, linie - 1, coloana - 1);
    cout << "Matricea dupa interschimbarea acestora este : " << endl;
    afisareMatrice(x, m, n);
}

// 1-e

void solutiepb1e() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    vectorPalindroameOrdColoane(x, m, n);
}
