// Program: cin.cpp
#include <iostream>
using namespace std;

int main()
{
    double Panjang, Lebar, Keliling;

    cout << "Menghitung keliling persegi panjang" << endl;

    cout << "Panjang: ";
    cin >> Panjang;

    cout << "Lebar: ";
    cin >> Lebar;

    Keliling = 2 * ( Panjang = Lebar );
    cout << " Keliling = " << Keliling << endl;

    return 0;
}
