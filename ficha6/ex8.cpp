#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    int quantidade;
    float valor_final;
    float preco_base;
    cout<<"Introduza a quantidade";
    cin>>quantidade;
    cout<<"Introduza o preco base";
    cin>>preco_base;
    if (quantidade>=1000){
        int desconto=preco_base*0.08;
        valor_final=(preco_base-desconto)*quantidade;
        cout<<"O valor a pagar e: "<<valor_final<<"\n";
    }
    else if(quantidade>=500 && quantidade<1000){
        int desconto=preco_base*0.05;
        valor_final=(preco_base-desconto)*quantidade;
        cout<<"O valor a pagar e: "<<valor_final<<"\n";
    }
    else
    {
        valor_final=preco_base*quantidade;
        cout<<"O valor a pagar e: "<<valor_final<<"\n";
    }
    system("PAUSE");
};
