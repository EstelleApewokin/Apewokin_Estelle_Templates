//Estelle Apewokin
//CIS 1202 5T1
//July 31, 2022

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>   //defines template half function
T half(T number) {
	T result;
	result = number / 2;
	return result;
}

int halfInt(int); //prototype for int half function

int main() {
	//test values
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	//calls function with each value
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << halfInt(c) << endl;

	return 0;
}

int halfInt(int num) {
	double temp = static_cast<double>(num)/2; //converts to double to prevent truncation during integer devision
	temp = round(temp); //rounds value
	int fin; //integer variable to hold final value

	fin = static_cast<int>(temp); //converts halved number from a double to an integer

	return fin;
}