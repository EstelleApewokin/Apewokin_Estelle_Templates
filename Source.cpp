//Estelle Apewokin
//CIS 1202 5T1
//July 31, 2022

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
T half(T number) {
	T result;
	result = number / 2;
	return result;
}

int halfInt(int);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << halfInt(c) << endl;

	return 0;
}

int halfInt(int num) {
	double temp = static_cast<double>(num)/2;
	double halved = round(temp);
	int fin;

	fin = static_cast<int>(halved);

	return fin;
}