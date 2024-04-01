#include <iostream>
using namespace std;


int main (){
    int num;
    bool r;


    cout<<"Digite qualquer numero e eu informarei se ele e par ou impar ";
    cin>>num;


    cout<<boolalpha;
    r = (num %2);  


    cout<<"Seu numero e impar : "<<r;

    return 0;
    }
