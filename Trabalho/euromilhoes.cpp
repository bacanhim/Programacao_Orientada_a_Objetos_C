#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
#include <iterator>
#include <algorithm>
#include <array>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int aposta_num[11];//guardar apostas
	int aposta_estrelas[9];//guardar apostas
	int numeros[50]; //array de 50 numeros
	int estrelas[9]; //array de 9 numeros para as estrelas
	int i = 0, x = 0, r = 0, chave, num = 0,est = 0, tipo = 0;
	char aposta; //tipo de aposta
	bool v = true;
	std::cout << "Tipos de aposta" << endl << endl;
	std::cout << "Aposta simples (s)" << endl;
	std::cout << "Aposta Multipla (m)" << endl;
	std::cout << "Indique o tipo de aposta: "; std::cin >> aposta; cout << endl; // guarda a resposta do utilizador
	aposta = tolower(aposta); // verifica se � lower case
	switch (aposta) {
	case 's':
		std::cout << "Aposta manual (1), o utilizador insere os numeros, aleatoria (2), serao gerados numeros: " << endl;
		std::cout << "1 - Manual" << endl;
		std::cout << "2 - Aleatoria" << endl;
		std::cout << "opcao: "; std::cin >> tipo; cout << endl;//Escolhe tipo de aposta
		switch (tipo) {
		case 1:
			std::cout << "Numero de chaves: "; std::cin >> chave;//Quantidade de apostas
			while (chave > 0) { //quantidade de apostas so para quando chegar a 0
				for (i = 0; i < 50; i++) {
					numeros[i] = i + 1; //cria um array de 1 a 50
				}
				for (i = 0; i < 9; i++) {
					estrelas[i] = i + 1;//cria um array de 1 a 9
				}
				for (i = 0; i < 5;) {   //Aposta simples, com 5 numeros, num array com 5 espa�os
					std::cout << "numero: " << i + 1 << ": "; std::cin >> x;  //Pede os numeros
					x = x - 1;  //Associa o "numero pedido" a posi�ao do array numeros
					if (numeros[x] > 0) {  //Verifica se o elemento e maior que 0
						aposta_num[i] = numeros[x];       //mete esse elemento dentro do array da aposta
						numeros[x] = 0;       //Troca o numero inserido por 0 de forma a nao ser re-utilizado
						i++;
					}
					else {
						std::cout << "numero repetido" << endl; //numero repetido faz output de erro
					}
				}
				std::cout << endl;
				for (i = 0; i < 2;) { //estrelas, com 2 numeros, num array com 2 espacos
					std::cout << "estrela: " << i + 1 << ": "; std::cin >> x; //pede as estrelas
					x = x - 1; //associa o "numero pedido" a posi�ao do array das estrelas
					if (estrelas[x] > 0) { //verifica se o elemento e maior que 0
						aposta_estrelas[i] = estrelas[x];  //mete esse elemento dentro do array da aposta
						estrelas[x] = 0; //troca o numero inserido por 0 de forma a nao ser re-utilizado
						i++;
					}
					else {
						std::cout << "numero repetido" << endl; //numero repetido faz output de erro
					}
				}
				std::cout << endl;
				std::cout << "Numero: ";
				for (i = 0; i < 5; i++) {
					std::cout << "[" << aposta_num[i] << "]" << " ";//Mostra a aposta
				}
				std::cout << endl;
				std::cout << "estrelas: ";
				for (i = 0; i < 2; i++) {
					std::cout << "[" << aposta_estrelas[i] << "]" << " ";//Mostra a aposta
				}
				std::cout << endl<<endl;
				chave--; //decrementa o numero de apostas
			}
			break;
		case 2:
			std::cout << "numero de chave: "; std::cin >> chave;
			while (chave > 0) {
				for (i = 0; i < 50; i++) {
					numeros[i] = i + 1;//cria um array de 1 a 50
				}
				for (i = 0; i < 9; i++) {
					estrelas[i] = i + 1;//cria um array de 1 a 9
				}
				std::cout << "numeros: ";
				for (i = 0; i < 5;) {  //numeros, com 5 numeros, num array com 5 espacos
					x = rand() % 50;   //seleciona uma posi�ao de array aleatorio de 0 a 49
					if (numeros[x] > 0) {  //verifica se o elemento e maior que 0
						aposta_num[i] = numeros[x];  // mete esse elemento dentro do array da aposta
						numeros[x] = 0;  //troca o numero inserido por 0 de forma a nao ser re-utilizado
						std::cout << "[" << aposta_num[i] << "]" << " "; //Mostra a aposta
						i++;
					}
				}
				std::cout << endl;
				std::cout << "estrelas: ";
				for (i = 0; i < 2;) {     //estrelas, com 2 numeros, num array com 2 espacos
					x = rand() % 9;       //seleciona uma posi�ao de array aleatorio de 0 a 9
					if (estrelas[x] > 0) {  //verifica se o elemento e maior que 0
						aposta_estrelas[i] = estrelas[x];  // mete esse elemento dentro do array da aposta
						estrelas[x] = 0; //troca o numero inserido por 0 de forma a nao ser re-utilizado
						std::cout << "[" << aposta_estrelas[i] << "]" << " "; //Mostra a aposta
						i++;
					}
				}
				std::cout << endl<<endl;
				chave--;
			}
			std::system("PAUSE");
			break;
		default: std::cout << "Erro: Tente novamente" << endl;
		}
		break;
	case 'm':
		std::cout << "Aposta manual(1), o utilizador insere os numeros, aleatoria(2), serao gerados numeros : " << endl;;
		std::cout << "1 - Manual" << endl;
		std::cout << "2 - Aleatoria" << endl;
		std::cout << "opcao: "; std::cin >> tipo;
		switch (tipo) {
		case 1:
			std::cout << "Numero de chaves: "; std::cin >> chave;
			while (chave > 0) {
				for (i = 0; i < 50; i++) {
					numeros[i] = i + 1;//cria um array de 1 a 50
				}
				for (i = 0; i < 9; i++) {
					estrelas[i] = i + 1;//cria um array de 1 a 9
				}
				while (v) {
					std::cout << "Insira os numeros: "; std::cin >> num; //Tamanho do array chave numeros
					std::cout << "Isira as estrelas: "; std::cin >> est; //tamnanho do array chave estrelas
					if (num >= 5 && num <= 11 && est >= 2 && est <= 9) {  //Verifica se os numeros estao dentro dos parametros
						for (i = 0; i < num;) {
							std::cout << "numero: " << i + 1 << ": "; std::cin >> x;
							x = x - 1;
							if (numeros[x] > 0) {  //verifica se o elemento e maior que 0
								aposta_num[i] = numeros[x]; // mete esse elemento dentro do array da aposta
								numeros[x] = 0;  //troca o numero inserido por 0 de forma a nao ser re-utilizado
								i++;
							}
							else {
								std::cout << "numero repetido" << endl;
							}
						}
						std::cout << endl<<endl;
						for (i = 0; i < est;) {
							std::cout << "estrela: " << i + 1 << ": "; std::cin >> x;
							x = x - 1;
							if (estrelas[x] > 0) {  //verifica se o elemento e maior que 0
								aposta_estrelas[i] = estrelas[x]; // mete esse elemento dentro do array da aposta
								estrelas[x] = 0; //troca o numero inserido por 0 de forma a nao ser re-utilizado
								i++;
							}
							else {
								std::cout << "numero repetido" << endl;
							}
						}
						std::cout << endl;
						std::cout << "Numero: ";

						for (i = 0; i < num; i++) {
							std::cout << "[" << aposta_num[i] << "]" << " ";  //mostra a aposta
						}
						std::cout << endl;
						std::cout << "estrelas: ";
						for (i = 0; i < est; i++) {
							std::cout << "[" << aposta_estrelas[i] << "]" << " "; //mostra a aposta
						}
						v = false;
					}
					else {
						std::cout << "Erro: numeros minimos:5, maximo:11 | estrelas minimo:2, maximo: 9" << endl;
					}
				}
				std::cout << endl<<endl;
				chave--; //decrementa o numero de apostas
			}
			break;
		case 2:
			std::cout << "numero de chave: "; std::cin >> chave;
			while (chave > 0) {
				for (i = 0; i < 50; i++) {
					numeros[i] = i + 1;//cria um array de 1 a 50
				}
				for (i = 0; i < 9; i++) {
					estrelas[i] = i + 1;//cria um array de 1 a 9
				}
				std::cout << "numeros: ";
				r = rand() % 7 + 5; //Gera quantidade de numeros aleatoria entre 5 e 11 (7+5=12==> numero minimo � 5 ====> maximo e 11 ===> nunca escolhe 12
				for (i = 0; i < r;) {
					x = rand() % 50;    //seleciona uma posi�ao de array aleatorio de 0 a 49
					if (numeros[x] > 0) {    //verifica se o elemento e maior que 0
						aposta_num[i] = numeros[x]; // mete esse elemento dentro do array da aposta
						numeros[x] = 0; //troca o numero inserido por 0 de forma a nao ser re-utilizado
						std::cout << "[" << aposta_num[i] << "]" << " ";  //mostra a aposta
						i++;
					}
					
				}
				r = rand() % 8 + 2;//Gera quantidade de numeros aleatoria entre 2 e 9 (8+2=10==> numero minimo � 2 ====> maximo e 9 ===> nunca escolhe 10
				std::cout << endl;
				std::cout << "estrelas: ";
				for (i = 0; i < r;) {
					x = rand() % 9;   //seleciona uma posi�ao de array aleatorio de 0 a 8
					if (estrelas[x] > 0){   //verifica se o elemento e maior que 0
						aposta_estrelas[i] = estrelas[x];  // mete esse elemento dentro do array da aposta
						estrelas[x] = 0;  //troca o numero inserido por 0 de forma a nao ser re-utilizado
						std::cout << "[" << aposta_estrelas[i] << "]" << " "; //mostra a aposta
						i++;
					}
				}
				std::cout << endl<<endl;
				chave--; //decrementa o numero de apostas
			}
			std::system("PAUSE");
			break;
		default: std::cout << "Erro: Tente novamente" << endl;//case switch errado
		}
		break;
	default: std::cout << "Erro: Tente novamente" << endl;//^^^^^^^^^^^^
	}
	std::system("PAUSE");
}
Máquina de pagamento