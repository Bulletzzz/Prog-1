
#include <iostream>


using namespace std;


int main()
{
    float mts, dcms, cms, mms;
    cout<<"Escreva uma distancia em metros (Se a dsitancia nao for exata, utilize um ponto entre os numeros) ";
    cin>>mts;
    dcms = mts * 10;
    cms = mts * 100;
    mms = mts * 1000;
    cout<<"Sua distancia em metros e "<<mts<<endl<<"Sua distancia em decimetros e "<<dcms<<endl<<"Sua distancia em centimetros e "<<cms<<endl;
    cout<<"Sua distancia em milimetros e "<<mms<<endl;
 
   return 0;
}

