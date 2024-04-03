#include <iostream>
using namespace std;


int main (){    
float n1, n2, r;
cout<<"Voce devera digitar dois numeros separados por um espaco, se o primeiro numero for maior que o segundo"<<endl;
cout<<"Uma adicao sera feita, e caso contrario sera feita uma multiplicacao"<<endl;
cout<<"Digite seus numeros aqui ";cin>>n1>>n2;

if(n1>n2){
    r=n1+n2;
    cout<<"O resultado da sua operacao e "<<r;
}
if(n1<=n2){
    r=n1*n2;
    cout<<"O resultado da sua operacao e "<<r;
}
else
cout<<"Nao foi possivel realizar a operacao";

return 0;
}





