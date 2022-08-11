#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Afisare matrice.

void afisareMatrice(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		int c = n;
		cout << "{";
		for (int j = 0; j < n; j++) {
			cout << x[i][j];
			if (c > 1) {
				cout << ", ";
				c--;
			}
			else {
				cout << "}" << endl;
			}
		}
	}
}

// Citire matrice din fisier.

void citireFisier(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m, f >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			f >> x[i][j];
		}
	}
}

// Cate cifre contine numarul

int countCifre(int n) {
	int c = 0;
	while (n != 0) {
		c++;
		n /= 10;
	}
	return c;
}

// Este pozitia divizibila cu 2 si cu 3?

bool pozitieDiv2si3(int m, int n) {
	int numar = m + n;
	if (numar % 2 == 0 && numar % 3 == 0) {
		return true;
	}
	return false;
}

// Cate numere pare sunt pe pozitii divizibile cu 2 si 3.

int countParePosDiv2si3(int x[100][100], int m, int n) {
	int c = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (pozitieDiv2si3(i, j) && x[i][j] % 2 == 0) {
				c++;
			}
		}
	}
	return c;
}

// Cati divizori are numarul.

int countDivizori(int n) {
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			c++;
		}
	}
	return c;
}

// Este numarul prim?

bool estePrim(int n) {
	if (countDivizori(n) == 2) {
		return true;
	}
	return false;
}

// Este linia para si coloana impara?

bool linieParaColoanaImpara(int m, int n) {
	if (m % 2 == 0 && n % 2 == 1) {
		return true;
	}
	return false;
}

// Suma elementelor prime ce stau pe o linie para si coloana impara.

int sumaElementelorProprietate1b(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (estePrim(x[i][j]) && linieParaColoanaImpara(i, j)) {
				s += x[i][j];
			}
		}
	}
	return s;
}

// Este patrat perfect?

bool patratPerfect(int n) {
	double x = sqrt(n);
	if (x == ceil(x)) {
		return true;
	}
	return false;
}

// Suma elementelor de pe o linie specifica.

int sumaElementelorLinie(int x[100][100], int m, int n, int l) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == l) {
				s += x[i][j];
			}
		}
	}
	return s;
}

// Inlocuirea elementelor patrat perfect cu suma elementelor de pe linia lor.

void inlocuirePatratePerfecteSumaLinie(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		int suma = sumaElementelorLinie(x, m, n, i);
		for (int j = 0; j < n; j++) {
			if (patratPerfect(x[i][j])) {
				x[i][j] = suma;
			}
		}
	}
}

// Gasirea minimului si maximului de pe linia, 
// respectiv coloana specificata si interschimbarea lor.

void gasireMinMaxLinColSiInterschimbare(int x[100][100], int m, int n, int linie, int coloana) {
	int minLinie = x[linie][0];
	int maxColoana = x[0][coloana];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == linie && x[i][j] < minLinie) {
				minLinie = x[i][j];
			}
			if (j == coloana && x[i][j] > maxColoana) {
				maxColoana = x[i][j];		
			}
		}
	}
	
	cout << "Minimul de pe linia " << linie + 1 << " este : " << minLinie << "." << endl;
	cout << "Maximul de pe coloana " << coloana + 1 << " este : " << maxColoana << "." << endl;

	for (int i = 0, c = 1; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == linie && x[i][j] == minLinie && c == 1) {
				x[i][j] = maxColoana;
				c--;
			}
		}
	}

	for (int i = m - 1, c = 1; i > -1; i--) {
		for (int j = n - 1; j > -1; j--) {
			if (j == coloana && x[i][j] == maxColoana && c == 1) {
				x[i][j] = minLinie;
				c--;
			}
		}
	}
}



