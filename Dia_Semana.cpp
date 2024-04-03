#include <iostream>
using namespace std;


int main (){    
char numdia;
cout<<"Digite um numero de 1 a 7 e seu equivalente em dias da semana sera informado ";
cin>>numdia;
switch (numdia)
  {
    case '1':
    cout<<"O seu dia e domingo";
    break;
    case '2':
    cout<<"O seu dia e segunda feira";
    break;
    case '3':
    cout<<"O seu dia e terca feira";
    break;
    case '4':
    cout<<"O seu dia e quarta feira";
    break;
    case '5':
    cout<<"O seu dia e quinta feira";
    break;
    case '6':
    cout<<"O seu dia e sexta feira";
    break;
    case '7':
    cout<<"O seu dia e sabado";
    break;
  }

return 0;
}





