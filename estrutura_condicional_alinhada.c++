#include<iostream>
using namespace std;


int main (){
    int idade;

    cout << "\n Qual a sua idade? ";
    cin >> idade;

     if (idade >= 16) {
        cout << "\n Você pode tirar o título de eleitor \n";

    if (idade >= 18) 
        cout << "\n Você pode tirar a carteira de habilitação \n";
    else
        cout << "\n Você não pode tirar a carteira de habilitação \n";
    }

    else
        cout << "\n Você não pode tirar o título de eleitor ou a carteira de habilitação \n";

        cout << "\n Fim do programa! \n\n";
        system ("pause");
    }