#include "Vector.hpp"

class Vector {
	int* _data;
	unsigned int _capacity; // pojemnosc (mozliwa do wykorzystania, zajecia)
	unsigned int _size; //faktyczny rozmiar danych
public:
	Vector(); // konstruktor domyslny, tworzy vector na 1 element i korzysta z konstruktora od capacity
	Vector(unsigned int capacity); // rezerwuje miejsca na podana liczbe elementow
	Vector(const Vector& other);
	Vector& operator=(const Vector&); // to samo co konstruktor kopiujacy
	virtual ~Vector();

	int& operator[](unsigned int position); // operator dostepy do danych na podanej pozycji


	void push_back(int& value); // odklada element na ostatnie wolne miejsce
	void clear(); // usuwa wszystkie elementy z wektora jednak nie zmniejsza zaarezerwowanej pamieci
	void insert(int value, unsigned int position); // pozwala wstawic wartosc do wektora na zadana pozycje
	void remove(unsigned int position); // usuwa element z wektora

	//gettery
	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;

	void reserve(unsigned int capacity); // zwieksza rozmiar zarezerwowanej pamieci vectora, ale nie moze zmniejszyc
	void resize(unsigned int size); // pozwala zmniejszyc rozmiar vectora, ale tez zwiekszyc

};