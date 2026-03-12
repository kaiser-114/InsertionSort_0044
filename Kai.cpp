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

  cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "-------Masukan Element Array-------" << endl;
    cout << "-----------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
