#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; //meleparkan sebuah interger maka
        cout << "Pertanyaan tidal akan dieksekusi" << endl;
    }
}