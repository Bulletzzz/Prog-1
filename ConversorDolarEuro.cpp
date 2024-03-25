#include <iostream>
using namespace std;

int main () {
 float mr, md, me;

 cout<< "Bem vindo aoconversor de moedas."<<endl<<"Digite um valor em reais e tera o valor em Euro e dolar ";
 cin>>mr;

 md = mr / 4.97;
 me = mr / 5.39;

 cout <<"O seu valor conveetido é igual a"<<endl;
 cout <<"Reais "<<mr<<endl<<"Dolares "<<md<<endl<<"Euros "<<me<<endl;
 cout<<"Este projeto é baseado na cotacao do dia 25/03/2024";


return 0;
}