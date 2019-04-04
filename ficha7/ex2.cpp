#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
main(){
    char frase1[100],frase2[100];
    cout<<"Introduza a primeira frase\n";
    gets(frase1);
    cout<<"Introduza a segunda frase\n";
    gets(frase2);
    cout<<strcat(frase1,frase2);
    system("PAUSE");
}