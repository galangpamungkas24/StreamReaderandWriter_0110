
#include <iostream>
#include <exception>
//untuk obyek exception yg akan digunkan 
#include <array>
//untuk obyek array yg akan kita gukan
using namespace std;

int main(){
    cout << "Awal Perogram " << endl;//penandaan 1
    try{
        array<int, 3> data = {10, 20 ,30};
        //pesan array integer 3 elemen
        cout<< data.at(5)<<endl;
    }
}