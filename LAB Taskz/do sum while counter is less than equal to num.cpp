#include <iostream>
using namespace std;

int main()
{
    int num, sum, counter;
    num = 0;
    sum = 0;
    counter = 1; // start counter from 1
    
    cout << "Enter a number:\n";
    cin >> num;
    /*
    do
    {
        sum = sum + counter; // add counter to sum
        counter++;
    }
    while (counter <= num);
    */
    while (counter <= num)
    {
       sum = sum + counter; // add counter to sum
        counter++;	
	}
    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl; // display sum
    
    return 0;
}
