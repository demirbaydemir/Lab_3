#include <iostream>
using namespace std;

void perf_num(int num);

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
    perf_num(num);

}

void perf_num(int num)
{
    int counter = 0;
    bool any_printed = false;

    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                counter = counter + j;
            }
        }

        if (counter == i)
        {
            cout << i << " ";
        }

        counter = 0;
    }

    if (any_printed == true)
    {
        cout << endl;
    }
}