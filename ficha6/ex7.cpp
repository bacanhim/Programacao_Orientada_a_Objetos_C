#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    int val = 0;
    while (val!=4){
        cout<<"Menu de opcoes\n\n1- Calculadora \n\n2- Converter graus centrigrados/fahrenheit \n\n3- Converter metros/quilometros\n\n4- Sair\n\n";
        cin>>val;
        switch (val)
        {
            case 1:{
                cout<<"Calcuradora: a executar...\n\n";
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
                cout<< "O resultado foi "<<res<<"\n\n";
                break;
            }
            case 2:{
                cout<<"Conversao de temperaturas... \n\n";
                int celsius;
                cout<<"Introduza os graus celsius: \n";
                cin>>celsius;
                float fahrenheit = (celsius*9)/5+32;
                cout<<celsius<<" em fahrenheit equivale a: "<<fahrenheit<<"\n";
                break;
            }
            case 3:{
                cout<<"Conversao de distancias...\n\n";
                int metros;
                cout<<"Introduza os metros : ";
                cin>>metros;
                float quilometros = metros/1000;
                cout<<metros<<" sao "<<quilometros<<" quilometros\n\n";
            }
            case 4:{
                cout<<"A terminar o programa\n\n";
                system("PAUSE");
            }
        }

    }
};
