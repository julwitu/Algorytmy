// wyszukiwanie najmniejszej liczby z tablicy (w³acznie z wczytywaniem i wypisywaniem elementow tablicy)
#include <iostream>
#include <random>

void setNumbersInTab(int* tab,  int n) {
	for (int i = 0; i < n; i++) {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> distr(0, 100);
		tab[i] = distr(gen);
	}
}

void printTab(int* tab, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
}

void printMin(int* tab, int n) {
	int min = tab[0];
	for (int i = 0; i < n; i++) {
		if (min > tab[i]) {
			min = tab[i];
		}
	}
	std::cout << min << std::endl;
}

int main()
{
	int n = 0;
	std::cout << "Podaj n: " << std::endl;
	std::cin >> n;

	if (n > 0) {
		int* tab = new int[n];
		setNumbersInTab(tab, n);
		printTab(tab, n);
		printMin(tab, n);
		delete[]tab;
	}

}


