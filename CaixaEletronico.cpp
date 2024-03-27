#include <iostream>
using namespace std;

int main (){
int cedulas, n100, n50, n20, n10, n5, n2, cents, m1, m50, m25, m10, m5, m1;

cout <<"Bem vindo ao caixa eletronico, aqui voce descobrira qual e a froma mais simples de sacar suas notas"<<endl;
cout <<"Escreva o valor em reais e centavos que voce deseja sacar separados por um espaco"<<endl;
cin >> cedulas >> cents;

n100 = cedulas / 100;
cedulas %= 100;

n50 = cedulas / 50;
cedulas %= 50;

n20 = cedulas / 20;
cedulas %= 20;

n10 = cedulas / 10;
cedulas %= 10;

n5 = cedulas / 5;
cedulas %= 5;

n2 = cedulas / 2;
cedulas %= 2;

m1 = cents / 1;
cents %= 1;

m50 = cents / 50;
cents %= 50;

m25 = cents / 25;
cents &= 25;

m10 = cents / 10;
cents %= 10;

m5 = cents / 5;
cents &= 5;

m1 = cents / 1;
cents %= 1;

cout<<"O seu valor em notas de 100 e "<<n100<<endl;
cout<<"O seu valor em notas de 50 e "<<n50<<endl;
cout<<"O seu valor em notas de 20 e "<<n20<<endl;
cout<<"O seu valor em notas de 10 e "<<n10<<endl;
cout<<"O seu valor em notas de 5 e"<<n5<<endl;
cout<<"O seu valor em notas de 2 e "<<n2<<endl;

cout<<"O seu valor em moedas de um real e "<<m1<<endl;
cout<<"O seu valor em modedas de 50 centavos e "<<m50<<endl;
cout<<"O seu valor em modedas de 25 centavos e "<<m25<<endl;
cout<<"O seu valor em modedas de 10 centavos e "<<m10<<endl;
cout<<"O seu valor em modedas de 5 centavos e "<<m5<<endl;
cout<<"O seu valor em modedas de 1 centavo e "<<m1<<endl;

return 0;
}
