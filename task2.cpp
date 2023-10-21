#include <iostream>
using namespace std;

void printStars(int rows);

main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    printStars(rows);
}

void printStars(int rows)
{
    for (int i = 1; i <= (rows / 2); i++)
    {
        for (int j = ((rows / 2) - 1); j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= (rows / 2); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                continue;
            }
            cout << " ";
        }
        for (int k = (rows / 2); k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
