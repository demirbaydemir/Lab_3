#include <iostream>
using namespace std;

void calculate(int num);

int main(void)
{
    // Define variables
    int num;

    // Get user input 
    cout << "Input a integer value:\n";
    cin >> num;

    // Check user input
    while (num <= 0)
    {
        cout << "Invalid input, try again:\n";
        cin >> num;
    }

    // Print results
    calculate(num);

}

void calculate(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum = pow(num % 10, 2) + sum;
        num = (num - num % 10) / 10;
    }

    cout << sum << endl;
}