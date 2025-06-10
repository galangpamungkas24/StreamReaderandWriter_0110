
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int mian (){
        string baris;
        //membuat file dalam mode menulis
        ofstream outfile;
        //menunjukan ke sebuah nama file
        outfile.open("contohfile.txt");
        cout << ">= Meulis file, \'q\' untuk keluar" << endl;
        //unlimited loop untuk menulis
        while (true)
        {
            cout << "- ";
            //mendapatkan setiap karakter dalam satu baris
            getline(cin, baris);
            //loop akan berhenti jika ada memasukan karakter q
            if (baris == "q" ) break;
            //menulis dan memasukann inali dari 'baris' ke dalam file
            outfile << baris << endl;
        }
        // selesi dalam menulis sekarang tutup filenya
        outfile.close();
        //membuat file dalam mode membaca
        ifstream infile;
        //menunjuk ke sebuah file
        infile.open("contohfile.txt");
        cout << endl << ">= Membuat dan membuat file " << endl;
        //jika file ada maka
        if (infile.is_open())
        {
            //melakukan perulangan setiap baris
            while (getline(infile, baris))
            {
                //dan tampilkan di sini
                cout << baris << '\n';
            }
        }
}