#include <iostream>
#include <stdio.h>
using namespace std;
main(){
    int n1;
    int n2;
    char op;
    double res;
    cout<< "Introduza o primeiro numero\n";
    cin>>n1;
    cout<< "Introduza o segundo numero\n";
    cin>>n2;
    cout<< "Introduza a operacao a realizar\n";
    cin>> op;
    switch (op)
    {
        case '+':
            res = n1 + n2;
            break;
    
        case '-':
            res = n1 - n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '/':
            res = n1 / n2;
            break;
        default: 
            cout<<"Operacao invalida";
            break;
    }
    cout<< "O resultado foi "<<res<<"\n";
    system("PAUSE");
}
