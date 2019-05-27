#include <iostream>
#include <cstdio>

using namespace std;

int calculatroco(int troco,int moeda,string tipomoeda){//função que qualcula quantas moedas de cada valor deve devolver
	if((troco/moeda)==1){
		if(moeda==1){
			cout<<troco/moeda<<" moeda de "<<moeda<<" "<<tipomoeda<<"."<<endl;
		}else{
			cout<<troco/moeda<<" moeda de "<<moeda<<" "<<tipomoeda<<"s."<<endl;
		}
	}else{
		if(moeda==1){
			cout<<troco/moeda<<" moedas de "<<moeda<<" "<<tipomoeda<<"."<<endl;
		}else{
			cout<<troco/moeda<<" moedas de "<<moeda<<" "<<tipomoeda<<"s."<<endl;
		}
	}
	troco=troco%moeda;
	return troco;
}

int main() {
	float valor, valorPago, troco;
	cout<<"			CAIXA DE PAGAMENTO"<<endl;
	cout<<"	So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:"<<endl<<endl;
	cout<<"Introduza um valor:";
	cin>>valor;
	cout<<"Introduza o pagamento:";
	cin>>valorPago;
	
	while(valorPago!=5 and valorPago!=10 and valorPago!=20 and valorPago!=50 and valorPago!=100 and valorPago!=200 and valorPago!=500){//verifica se a nota é valida
		system("cls");
		cout<<"			CAIXA DE PAGAMENTO"<<endl;
		cout<<"	So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:"<<endl<<endl;
		cout<<"Valor a pagar ->"<<valor<<" euros."<<endl;
		cout<<"Introduza o pagamento:";
		cin>>valorPago;
	}
	troco=valorPago-valor;//O troco vai ser o valor pago menos o valor a pagar
	while(troco<0){//enquanto o troco for menor que zero executa
		troco=troco-troco-troco;//passa o troco para positivo
		system("cls");
		cout<<"			CAIXA DE PAGAMENTO"<<endl;
		cout<<"	So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:"<<endl<<endl;
		cout<<"Falta "<<troco<<" euros."<<endl;
		cout<<"Introduza o pagamento:";
		cin>>valorPago;
		while(valorPago!=5 and valorPago!=10 and valorPago!=20 and valorPago!=50 and valorPago!=100 and valorPago!=200 and valorPago!=500){//verifica se a nota é valida
		system("cls");
		cout<<"			CAIXA DE PAGAMENTO"<<endl;
		cout<<"	So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:"<<endl<<endl;
		cout<<"Valor a pagar ->"<<troco<<" euros.!!(So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>)!!"<<endl;
		cout<<"Introduza o pagamento:";
		cin>>valorPago;
	}
		troco=valorPago-troco;//calcula o novo valor do troco
	}
	cout<<"Troco:"<<troco<<endl<<endl;
	if(troco!=0){//Se o troco for igual a zero n devolve nada
		cout<<"Moedas devolvidas:"<<endl;
		int euro=troco;//guarda o valor inteiro do troco
		int cent=(troco-euro)*100;//retira o valor inteiro e multiploca o decimal por 100
			if(euro>=2){
				euro=calculatroco(euro,2,"euro");//envia valores para a função
			}
			if(euro>=1){
				euro=calculatroco(euro,1,"euro");
			}
			if(cent>=50){
				cent=calculatroco(cent,50,"centimo");
			}
			if(cent>=20){
				cent=calculatroco(cent,20,"centimo");
			}
			if(cent>=10){
				cent=calculatroco(cent,10,"centimo");
			}
			if(cent>=5){
				cent=calculatroco(cent,5,"centimo");
			}
			if(cent>=2){
				cent=calculatroco(cent,2,"centimo");
			}
			if(cent>=1){
				cent=calculatroco(cent,1,"centimo");
			}
		}
	system("pause");
}
