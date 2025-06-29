#include <fstream>
#include <iostream>
#include <string>
using namespace std ;

int main(){
    string baris;
    string NamaFile;
    cout << "Masukan nama file : ";
    cin >> NamaFile;
    //membuat file dalam mode menulis.
    ofstream outfile;
    // menunjukan ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    //unlimitid loop untuk menulis
    while (true){
        cout << "- ";
        //membuat setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")break;
        //menulis dan memasukan nilaI dari 'baris' ke dalam file
        outfile << baris << endl;
        
    }
    //selesai dalam menulis sekarang tutp filenya
        outfile.close();
        //membuat file dalam mode membaca
        ifstream infile;
        //menunjuk ke sebuah file 
        infile.open(NamaFile, ios::in);
        cout << endl << ">= membuka dan membaca file " << endl;
        //jika file ada maka
        if (infile.is_open()){

            // melakukan perulangna setiap baris
            while (getline(infile, baris)){
                //dan tampilkan di sini
                cout << baris << '\n';
            }
            //tutup file tersebut setelah selesai
            infile.close();

        }
        //jika tidak ditemukan file maka akan menampilkan ini
        else cout << "Unable to open file";
        return 0;
}