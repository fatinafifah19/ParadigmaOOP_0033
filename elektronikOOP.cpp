#include <iostream>
using namespace std;

class barang{

public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "kategori :" << kategori << endl;
        cout << "TanggalProduksi : " << tanggalproduksi << endl;
    }
}; //batas class

