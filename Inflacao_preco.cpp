#include <iostream>
using namespace std;

int main()
{
 float p, i, pt;
 cout<<"Para calcular a sua inflacao digite o valor de seu produto ";
 cin>>p;
 if (p< 100)
 pt = (p * 1.1) + p;
 else
 pt = (p * 1.2) + p;
 cout<<"\nO preco do seu produto e "<<pt;
 
   return 0;
}






