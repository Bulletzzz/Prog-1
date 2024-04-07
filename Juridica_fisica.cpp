#include <iostream>
using namespace std;

int main(){
    char FJ;
 cout<<"Voce é uma pessoa fisica ou juridica ou fisica?"<<endl<<"Digite F para fisica e J para juridica : ";
 cin>>FJ;

 switch (FJ){
 case 'F':
 case 'f':
 cout<<"Você é uma pessoa Fisica";
break;

case 'J':
case 'j':
cout<<"Você é uma pessoa Juridica";
break;

default:
break;
 }
return 0;
}