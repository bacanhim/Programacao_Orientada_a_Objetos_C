#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

class Aluno
{
public:
    char nome[40];
    int numero;
    double nota_esperada;
} p1;

main(){
    cout<<"Introduza seu nome (Primeiro e Ultimo): ";
    gets(p1.nome);
    cout<<"\nIntroduza o seu numero de aluno: ";
    cin>> p1.numero;
    cout<<"Introduza a nota esperada para a disciplina de BP: ";
    cin>> p1.nota_esperada;
    system("CLS");


    cout<<"\t Prognosticos de BP .\n";
    cout<<"\nNome do aluno: "<<p1.nome<<"\t";
    cout<<"Numero de aluno: "<<p1.numero<<"\n";
    cout<<"\nNota esperada na disciplina de BP: "<<p1.nota_esperada<<"\n\n";
    system("pause");
}