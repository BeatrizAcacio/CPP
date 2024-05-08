#include <iostream>
using namespace std;
int main (){
    int numero;
    cout<<"digite um numero entre 1 e 7:";
    cin>>numero;
    switch(numero){
        case 1:
        cout<<"o dia selecionado foi o domingo.";
        break;

        case 2:
        cout<<"o dia selecionado foi segunda.";
        break;

        case 3:
        cout<<"o dia selecionado foi terça.";
        break;

        case 4:
        cout<<"o dia selecionado foi quarta.";
        break;

        case 5:
        cout<<"o dia selecionado foi quinta.";
        break;

        case 6:
        cout<<"o dia selecionado foi sexta.";
        break;

        case 7:
        cout<<"o dia selecionado foi sabado.";
        break;

        default:
        cout<<"nao possui um valor valido.";
    }
}