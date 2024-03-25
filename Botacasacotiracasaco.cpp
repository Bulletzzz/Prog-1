#include <iostream>
using namespace std;

int main () {
    int t, v;

  cout <<boolalpha;
  cout << "Voce vai precisar de casaco ? Descubra agora "<<endl;
  cout << "Qual a temperatura em celsius da sua localdade? ";
  cin >>t;
  cout << "Agora insira a valocidade do vento em km/h"<<endl;
  cin>> v;

  if (t < 15 || v > 40)
  {
    cout << "Voce vai precisar de um casaco amigao";
  }   

  else{
    cout << "Voce nao precisa de um casaco";
  }   

return 0;
}