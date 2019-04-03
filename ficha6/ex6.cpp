#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    float soma=0;
    int cont=0;
    while (soma<=500){
        int val;
        cout<<"Introduza o valor: \n";
        cin>>val;
        soma+=val;
        cont+=1;
    }
    int media = soma / cont;
    cout<<"A media e "<<media<< "\n";
    system("PAUSE");
}