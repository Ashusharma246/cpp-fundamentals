#include <iostream>
using namespace std;
int celius_to_farheit(int celcius)
{
    int farenheit = (celcius * 1.8) + 32;
    return farenheit;
}
int farentheit_to_celcius(int farenheit)
{
    int celcius = (farenheit - 32) / 1.8;
    return celcius;
}
int main()
{
    int choice;

    while (1)
    {
        bool flag = false;
        cout << "*************MENU************\n";
        cout << "1. Celcius to Farenheit\n";
        cout << "2.Farenheit to Celcius\n";
        cout << "3. Exit";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int celcius1;
            cout << "enter into celcius: ";
            cin >> celcius1;
            int celcius2;
            celcius2 = celius_to_farheit(celcius1);
            cout << celcius2 << endl;
            break;

        case 2:
            int farenheit1, farenheit2;
            cout << "enter into farenheit : ";
            cin >> farenheit1;

            farenheit2 = farentheit_to_celcius(farenheit1);
            cout << farenheit2 << endl;

            break;

        default:
            flag = true;
            cout << "Menu Ended!!!" << endl
                 << endl;
            break;
        }

        if (flag == true)
        {
            break;
        }
    }

    return 0;
}