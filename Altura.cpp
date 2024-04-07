#include <iostream>
using namespace std;

int main(){
    char Altura;
 cout<<"Qual a sua altura? (O valor deve ser separado por uma virgula) ";
 cin>>Altura;

if (Altura<1,50){
    cout<<"Abaixo de um metro e meio";
}
if(Altura>1,50&&Altura<1,80){
    cout<<"Entre um metro e meio e um metro e oitenta centimetros";
}
if(Altura>1,80){
    cout<<"Acima de um metro e oitenta centimetros";
}

return 0;
}