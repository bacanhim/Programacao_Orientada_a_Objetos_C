#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

class Aluno
{
public:
    char nome[40];
    int numero;
    double nota1;
    double nota2;
} p1;
double media (double a, double b){
    double mediaa= (a+b)/2;
    return mediaa;
}
main(){
    cout<<"Introduza seu nome (Primeiro e Ultimo): ";
    gets(p1.nome);
    cout<<"\nIntroduza o seu numero de aluno: ";
    cin>> p1.numero;
    cout<<"Introduza a primeira nota: ";
    cin>> p1.nota1;
    cout<<"Introduza a segunda nota: ";
    cin>> p1.nota2;
    system("CLS");


    cout<<"\tNota do primeiro periodo de BP .\n";
    cout<<"\nNome do aluno: "<<p1.nome<<"\t";
    cout<<"Numero de aluno: "<<p1.numero<<"\n";
    cout<<"\nMedia das notas: "<<media(p1.nota1,p1.nota2)<<"\n\n";
    system("pause");
}