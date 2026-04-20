#include <iostream>
using namespace std;

class Barang{

public :
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "kategori :" << kategori << endl;
        cout << "TanggalProduksi : " << TanggalProduksi << endl;
    }
}; //batas class

int main(){

    // object 1
    Barang elektronik;
    elektronik.nama = "Handphone";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.TanggalProduksi = "2026-04-20";

    // object 2
    Barang nonElektronik;
    nonElektronik.nama = "Pensil";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.TanggalProduksi = "2026-04-20";

    // menampilkan data
    elektronik.printData();
    nonElektronik.printData();
}
//selesai 