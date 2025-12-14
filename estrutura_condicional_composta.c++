#include<iostream>
using namespace std;


int main() {
    int idade;

    cout << "\n Qual a sua idade?";
    cin >> idade;
    
    if(idade >= 18)
       cout << "\n Você pode tirar a carteira de habilitação";
    else
       cout << "\n Você não pode tirar a carteira de habilitação";

     
}
