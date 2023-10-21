#include <iostream>
using namespace std;

int triangle(int number);

main()
{
    int number, result;
    cout << "Enter number of Triangle: ";
    cin >> number;
    result = triangle(number);
    cout << "Dots in the Triangle: " << result;
}

int triangle(int number)
{
    int dots = 0;
    for (int i = number; i >= 1; i--)
    {
        dots += i;
    }
    return dots;
}