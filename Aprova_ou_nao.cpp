#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, media, media_final;
    
 cout<<"Digite suas tres notas separadas por um espaço";
 cin>>n1>>n2>>n3;


    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;


    if (media >= 6.0) {
        cout << "Aprovado" << endl;
    } else if (media >= 4.0 && media < 6.0) {
        cout << "Recuperacao" << endl;
        
        float nota_recuperacao;
        cout << "Digite a nota da recuperacao: ";
        cin >> nota_recuperacao;

        media_final = (media + nota_recuperacao) / 2;

        if (media_final >= 5.0) {
            cout << "Aprovado apos a recuperacao" << endl;
        } else {
            cout << "Reprovado apos a recuperacao" << endl;
        }
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}

