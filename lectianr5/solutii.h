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
// Cate elemente pare ce stau pe pozitie divizibila
// cu 2 si cu 3 avem in matrice?

void solutiepb1a() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Matricea contine " << countParePosDiv2si3(x, m, n) << " numere cu aceasta proprietate." << endl;
}

// 1-b
// Sa se afiseze suma elementelor prime ce stau pe o linie
// para si pe o coloana impara.

void solutiepb1b() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Suma numerelor prime ce stau pe linie para si coloana impara este : " << sumaElementelorProprietate1b(x, m, n) << "." << endl;
}

// 1-c
// Inlocuiti fiecare element patrat perfect cu suma elementelor
// de pe linia pe care se afla.

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
// Sa se gaseasca minimul de pe linia L si maximul de pe
// coloana C. Sa se interschimbe aceste doua elemente. In cazul
// in care se gasesc mai multe minime/maxime, se va interschimba primul
// minim si ultimul maxim.

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
// Realizati un nou vector care sa contina toate elementele
// palindrome in ordinea in care apar ele daca am parcurge
// matricea pe coloane.

void solutiepb1e() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    vectorPalindroameOrdColoane(x, m, n);
}

// 1-f
// Realizati suma elementelor de pe fiecare linie in parte. Care este maximul
// dintre acestea?

void solutiepb1f() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Cea mai mare dintre suma elementelor de pe fiecare linie este : " << ceaMaiMareSumaLinie(x, m, n) << "." << endl;
}

// 1-g
// Afisati media aritmetica a elementelor de pe linia unde se
// gaseste numarul cu cele mai multe cifre binare.

void solutiepb1g() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    int l = linieNumarMaxCifBinare(x, m, n);
    cout << "Media aritmetica a elementelor de pe linia unde se gaseste numarul cu cele mai multe cifre binare este : " << medieAritmeticaLinie(x, m, n, l) << "." << endl;
}

// 2. Se citeste o matrice de maxim 20 x 1000
// de elemente numere intregi de la tastatura.
// a) Realizati un nou numar ce sa contina cifra
// minima din elementul maxim de pe fiecare linie.
// b) Care este media aritmetica a elementelor ce au
// intre 3-5 divizori proprii.
// c) Afisati toate dubletele palindrome intre ele de pe
// linia L (citita de la tastatura).
// d) Care este cifra de control a elementului din
// coltul dreapta jos?
// e) Care este frecventa fiecarei cifre in parte
// a elementelor de pe o coloana para si o linie
// impara din matricea cititita.
// f) Care este cel mai mare numar ce se poate forma
// din cifrele de la pct. e)?
// g) Care este cel mai mic numar ce se poate forma
// din toate cifrele ce NU apar in scrierea elementelor
// din interiorul matricei (se va exclude cifra 0).
// h) Care este a k-a aparitie a lui y in matrice?
// (k si y sunt citite de la tastatura).
// i) Sortati crescator coloana pe care apare elementul de la
// punctul d).
// j) Sa se caute intr-un mod eficient numarul k citit
// de la tastatura in coloana sortata la pct. i)

// 1-a
// Realizati un nou numar ce sa contina cifra
// minima din elementul maxim de pe fiecare linie.

void solutiepb2a() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Numarul format este : " << numarCifMinElMaxLinie(x, m, n) << "." << endl;
}

// 2-b
// Care este media aritmetica a elementelor ce au
// intre 3-5 divizori proprii.

void solutiepb2b() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Media aritmetica a numerelor care au intre 3 si 5 divizori este : " << medieAritmeticaElem3si5Div(x, m, n) << "." << endl;
}

// 2-c
// Afisati toate dubletele palindrome intre ele de pe
// linia L (citita de la tastatura).

void solutiepb2c() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    int l;
    cout << "Introduceti linia : ";
    cin >> l;
    if (l < 1 || l > m) {
        cout << "Linia introdusa nu este valida." << endl;
    }
    else {
        afisareDubletePalinIntreEleLinie(x, m, n, l - 1);
    }
}

// 2-d
// Care este cifra de control a elementului din
// coltul dreapta jos?

void solutiepb2d() {
    int m = 0, n = 0;
    int x[100][100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    cout << "Cifra de control a elementului din coltul dreapta jos este : " << cifraDeControl(x[m - 1][n - 1]) << "." << endl;
}

// 2-e
// Care este frecventa fiecarei cifre in parte
// a elementelor de pe o coloana para si o linie
// impara din matricea cititita.

void solutiepb2e() {
    int m = 0, n = 0;
    int x[100][100];
    int cifre[100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    atribuire0Vector(cifre, 10);
    frecventaCifreElemLinieParaColoanaImpara(x, m, n, cifre);
    afisareVectorFrecventaCifre(cifre, 10);
}

// 2-f
// Care este cel mai mare numar ce se poate f orma
// din cifrele de la pct. e)?

void solutiepb2f() {
    int m = 0, n = 0;
    int x[100][100];
    int cifre[100];
    citireFisier(x, m, n);
    afisareMatrice(x, m, n);
    atribuire0Vector(cifre, 10);
    frecventaCifreElemLinieParaColoanaImpara(x, m, n, cifre);
    cout << "Cel mai mare numar care poate fi format din aceste cifre este : " << numarMaximCifreFrecMaiMare0(cifre, 10) << "." << endl;
}