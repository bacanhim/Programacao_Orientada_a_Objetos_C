#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int divisao(int x, int y){
	int divi;
	divi=x/y;
    return divi;
}
int resto_div(int x, int y){
	int resto;
	resto=x % y;
    return resto;
}

main (){
	int x,y;
	cout<<"Introduza um valor\n";
	cin>>x;
	cout<<"Introduza um valor\n";
	cin>>y;
	cout<<"Resultado da divisao: "<<divisao(x,y)<<"\n";
	cout<<"Resto da divisao: "<<resto_div<<"\n";
	system("pause");
}