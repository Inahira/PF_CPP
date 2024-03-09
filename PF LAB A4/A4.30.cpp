// 30)  Write a program that gets two numbers from the user and displays the result of first number raise to the power of second number using do while loop. 

#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        float a, b, power = 1;
        cout << "Enter 1st number: ";
        cin >> a;
        cout << "Enter 2nd number: ";
        cin >> b;

        int i = 0;
        while (i < b) {
            power *= a;
            i++;
        }

        cout << a << " raised to the power of " << b << " is " << power << endl;

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
