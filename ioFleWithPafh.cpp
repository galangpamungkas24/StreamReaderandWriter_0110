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

}