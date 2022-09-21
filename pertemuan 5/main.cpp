#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    string S = "==========================\n";
    string data = "nama     : Layla Thias Rahmawati\nNIM     : A11.2022.14132\nKelompok     : A11.1404\n";
    //luas lingkaran
    int r;
    float luas;
    float pi = 3.14;
    cout << S;
    cout << data;
    cout << "Program Operasi Hitung\nLuas Lingkaran \n";
    cout << S;
    cout << "Masukkan jari-jari lingkaran : "; cin >> r;
    if (r % 7 == 0) {
    luas=(22*r*r)/7; //pi 22/7
    } else {
    luas=pi*r*r; //pi 3.14
    };
    cout << "\nHasil luas lingkaran adalah : " << luas <<endl;
    cout << S;
    // luas persegi panjang
    cout << "Program operasi luas persegi panjang \n";
    cout << S;
    float p,l,luass;
    p;
    l;
    cout << "Masukkan panjang persegi panjang : ";
    cin >> p;
    cout << endl;
    cout << "Masukkan lebar persegi panjang : ";
    cin >> l;
    cout << endl;
    cout << "Penyelesaian = "<< p*l<<endl;
    return 0;
}
