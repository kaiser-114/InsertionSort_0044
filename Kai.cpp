#include <iostream>
using namespace std;

int arr[20];    // membuat array dengan panjang data 20
int n;          // membuat variabel inputan n

void input() {  // procedure input
    while (true) {
        cout << "Masukan jumlah data Pada Array : ";
        cin >> n;

             if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray tidak boleh lebih dari 20\n";
        }
    }
