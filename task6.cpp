#include <iostream>
using namespace std;
bool isPrime(int number);
int primorial(int number);
main()
{
    int number, result;
    cout << "Enter number: ";
    cin >> number;
    cout << primorial(number);
}

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i <= (number / 2); i++)

        if (number % i == 0)
            return false;
    return true;
}
int primorial(int number)
{
    int count = 0;
    int num = 1;
    int result = 1;
    while (count != number)
    {
        if (isPrime(num))
        {
            result = result * num;
            count++;
        }
        num++;
    }
    return result;
}
