#include <iostream>
using namespace std;

main()
{
    int days = 0, patients = 0;
    int doctors = 7;
    int treated = 0;
    int untreated = 0;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    for (int day = 1; day <= days; day++)
    {
        cout << "Number of patients who visited hospital on Day " << day << ": ";
        cin >> patients;
        if (day % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }
        if (patients <= doctors)
        {
            treated += patients;
        }
        else
        {
            treated += doctors;
            untreated += patients - doctors;
        }
    }
    cout << "Treated patients: " << treated << endl;
    cout << "Untreated patients: " << untreated << endl;
}
