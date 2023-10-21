#include <iostream>
using namespace std;

bool isPrime(int number);
main()
{
    int number, result;
    cout << "Enter number: ";
    cin >> number;
    result = isPrime(number);
    cout << result;
}

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= (number / 2); i++)
        if (number % i == 0)
        {
            return false;
        }

    return true;
}
