#include <iostream>
#include <cmath> 

int main()
{
    using namespace std;
    double MPH;
    double KPH;
    int MPHC;

    system("color e");

    cout << "\n ########  ######## ##       ##       ";
    cout << "\n ##     ## ##       ##       ##       ";
    cout << "\n ##     ## ##       ##       ##       ";
    cout << "\n ########  ######   ##       ##       ";
    cout << "\n ##   ##   ##       ##       ##       ";
    cout << "\n ##    ##  ##       ##       ##       ";
    cout << "\n ##     ## ######## ######## ######## ";

    cout << " \n\n MPH --> KPH = 1\n KPH --> MPH = 2\n\n Please select an option: ";
    cin >> MPHC;
    if (MPHC == 2) {
        system("cls");
        cout << " Please enter your KPH: ";
        cin >> KPH;
        MPH = KPH / 1.6;
        cout <<  " \n You are going: " << MPH << "MPH" << '\n';
        cout << " \n Press any key to exit..." << '\n';
        system("pause>nul");
    }
    else if (MPHC == 1) {
        system("cls");
        cout << " Please enter your MPH: ";
        cin >> MPH;
        KPH = MPH * 1.6;
        cout << " \n You are going: " << KPH << "KPH" << '\n';
        cout << " \n Press any key to exit..." << '\n';
        system("pause>nul");
    }
    else {
        cout << " \n Please enter a valid number!" << '\n';
        cout << "\n Add .rellic. on Discord" << '\n';
        cout << " \n Press any key to exit..." << '\n';
        system("pause>nul");
    }





    return 0;
}