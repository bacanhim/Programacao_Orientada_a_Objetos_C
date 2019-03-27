#include <iostream>
#include <stdio.h>
using namespace std;
main (){
	double n1;
	double n2;
	cout<<"nota1\n";cin>>n1;
	cout<<"nota2\n";cin>>n2;
	double med;
	med=(n2+n1)/2;
	if (med > 9.5){
		cout<<"Aprovado" << med;
	}
	else if(med <9.5){
		cout<<"reprovado" << med;
	}
	
}
