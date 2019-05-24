#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

class Aluno
{
private:
    double nota1;
    double nota2;
public:
    char nome[40];
    int numero;
    void setnota1(double i){
        nota1 = i;
    }
    void setnota2(double j){
        nota2= j;
    }
    double getnota1(){
        return nota1;
    }
    double getnota2(){
        return nota2;
    }
    double media (double a, double b){
        double mediaa= (a+b)/2;
        return mediaa;
    }
} p1;
main(){
    double i,j;
    cout<<"Introduza seu nome (Primeiro e Ultimo): ";
    gets(p1.nome);
    cout<<"\nIntroduza o seu numero de aluno: ";
    cin>> p1.numero;
    cout<<"Introduza a primeira nota: ";
    cin>>  i;
    cout<<"Introduza a segunda nota: ";
    cin>> j;
    system("CLS");
    p1.setnota1(i);
    p1.setnota2(j);

    cout<<"\tNota do primeiro periodo de BP .\n";
    cout<<"\nNome do aluno: "<<p1.nome<<"\t";
    cout<<"Numero de aluno: "<<p1.numero<<"\n";
    cout<<"\nMedia das notas: "<<p1.media(p1.getnota1(),p1.getnota2())<<"\n\n";
    system("pause");
}