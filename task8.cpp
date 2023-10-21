#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int cargoCount;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    int totalCargoTon = 0;
    int minibusCargo = 0;
    int truckCargo = 0;
    int trainCargo = 0;

    for (int i = 1; i <= cargoCount; i++)
    {
        int ton;
        cout << "Enter the ton of cargo " << i << ": ";
        cin >> ton;
        totalCargoTon += ton;

        if (ton <= 3)
        {
            minibusCargo += ton;
        }
        else if (ton <= 11)
        {
            truckCargo += ton;
        }
        else if (ton > 11)
        {
            trainCargo += ton;
        }
    }
    cout << fixed;
    cout << setprecision(2);
    float averagePrice = (minibusCargo * 200.0 + truckCargo * 175.0 + trainCargo * 120.0) / totalCargoTon;
    float minibusPercentage = (minibusCargo * 100.0) / totalCargoTon;
    float truckPercentage = (truckCargo * 100.0) / totalCargoTon;
    float trainPercentage = (trainCargo * 100.0) / totalCargoTon;
    cout << averagePrice << endl;
    cout << minibusPercentage << "%" << endl;
    cout << truckPercentage << "%" << endl;
    cout << trainPercentage << "%" << endl;
}
