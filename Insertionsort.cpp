#include <iostream>
Using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{ // produce input
    while (true)
    {
        cout << "masukkan jumlah data pada array : "; //membuat inputan jumlah element array
        cin >> n; // memanggil variable inputan n

        if  (n <= 20)
        {// membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\narray yang anda masukkan maksimal 20 elemen.\n";//menampilkan pesan jika data lebih dari 20
        }
    }
}