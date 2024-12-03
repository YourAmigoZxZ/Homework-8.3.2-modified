#pragma once
#include <iostream>
#define CLASSICSIZE 200

using namespace std;

class Array
{
private:
	int size;
	int* arr;
public:
	//Конструкторы
	Array() : Array(20, nullptr) {}
	explicit Array(int size_p) : Array(size_p, nullptr) {}
	Array(int size_p, int* arr_p);
	Array(const Array& array);
	Array(Array&& array);//Конструктор перемещения
	//Аксессоры
	int get_size() const { return size; }
	const int* get_arr() const { return arr; }
	//Модификаторы
	void set_size(int size_p);
	void set_arr(int* arr, int size_p);

	void print() const;
	void randomize();

	//Array& operator=(Array&& array);

	//Деструктор
	~Array() { delete[] arr; }
};

