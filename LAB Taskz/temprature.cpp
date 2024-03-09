#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Ask user for input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0) / 5.0 + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
