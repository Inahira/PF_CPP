// 31) Write a program that displays the sum of the following series using do while loop. 1+1/3+1/5+1/7+…………. +1/99. 

#include <iostream>
using namespace std;

int main() {
    float sum = 0;
    int counter = 1;

    do 
	{
        sum += 1.0 / counter;
        counter += 2;
    } 
	while (counter <= 99);

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
