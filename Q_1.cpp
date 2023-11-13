#include <iostream>
using namespace std;

void is_prime(int num);

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

    // Print result
    is_prime(num);

}

void is_prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime number\n";
        }
        return;
    }

    cout << "Prime number\n";
}