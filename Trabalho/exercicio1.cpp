#include <iostream>
using namespace std;
main() {
    double divida;
    int notas,somanotas=0;
    cout << "\t\t\tCAIXA DE PAGAMENTO\n\n\tSo sao aceites notas!! <5, 10, 20, 50, 100, 200 e 500 euros>: \n\n";
    cout << "Introduza um valor em divida: ";
    cin >> divida;
    while (somanotas<divida){ //Verificacao de valor introduzido em relacao a divida em curso
        cout<<"Introduza a nota: ";
        cin>>notas;
        while ((notas != 5) && (notas != 10) && (notas != 20) && (notas != 50) && (notas != 100) && (notas != 200) && (notas != 500)) { //Verificacao da nota introduzida
            cout << "Volte a introduzir o pagamento na escala de notas definidas: ";
            cin >> notas;
        }
        somanotas+=notas;
        if (somanotas<divida){ //Verificacao se ainda sera necessario introduzir troco
            cout<<"Valor em falta: "<<divida-somanotas<<"\n\n";
        }
    }
    cout << "Troco: " << somanotas - divida << "\n\n";
    notas = somanotas * 100; //Multiplicacao dos valores de nota e divida para ser trabalhado em numeros inteiros
    divida = divida * 100;
    int troco = notas - divida; //calcular o troco a receber
    if (troco > 0) { //verificacao se havera troco a receber ou nao
        cout << "Moedas devolvidas: \n";
        int moedas_euros[2] = {200,100}; //Array de moedas em euros *100
        int moedas_centimos[6] = {50,20,10,5,2,1}; // Array  de moedas em centimos *100
        for (int i = 0; i <= 1; i++) { // percorre o array 
            int qt_moedas = troco / moedas_euros[i]; //Calcula a quantidade de moedas necessarias de cada tipo de moeda
            troco -= moedas_euros[i] * qt_moedas; // Desconta o produto(*) da quantidade de moedas sobre a moeda utilizada
            if (qt_moedas > 1) { //Verificacao para apenas na consola seja mostrado em singular ou plurar
                if (i == 1) {
                    cout << qt_moedas << " moedas de " << moedas_euros[i] / 100 << " euro\n";
                } else {
                    cout << qt_moedas << " moedas de " << moedas_euros[i] / 100 << " euros\n";
                }
            } else if (qt_moedas == 1) {
                if (i == 1) {
                    cout << qt_moedas << " moeda de " << moedas_euros[i] / 100 << " euro\n";
                } else {
                    cout << qt_moedas << " moeda de " << moedas_euros[i] / 100 << " euros\n";
                }
            }
        }
        for (int i = 0; i <= 5; i++) { // O mesmo se aplica para o calculo dos centimos a receber
            int qt_moedas = troco / moedas_centimos[i]; //Calcula a quantidade de moedas necessarias de cada tipo de moeda
            troco -= moedas_centimos[i] * qt_moedas; // Desconta o produto(*) da quantidade de moedas sobre a moeda utilizada
            if (qt_moedas > 1) { //Verificacao para apenas na consola seja mostrado em singular ou plurar
                if (i == 5) {
                    cout << qt_moedas << " moedas de " << moedas_centimos[i] << " centimo\n";
                } else {
                    cout << qt_moedas << " moedas de " << moedas_centimos[i] << " centimos\n";
                }
            } else if (qt_moedas == 1) {
                if (i == 5) {
                    cout << qt_moedas << " moeda de " << moedas_centimos[i] << " centimo\n";
                } else {
                    cout << qt_moedas << " moeda de " << moedas_centimos[i] << " centimos\n";
                }
            }
        }
    }
    else{
        cout<<"Nao ha troco a receber\n\n";
    }
    cout<<"Pagamento efetuado com sucesso\n\n";
    system("pause");
}