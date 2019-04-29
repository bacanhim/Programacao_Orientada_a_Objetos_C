#include <iostream>
using namespace std;
main(){
    double valor;
    int notas;
    cout<<"CAIXA DE PAGAMENTO\n\nSo sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>: \n\n";
    cout<<"Introduza um valor: ";
    cin>>valor;
    while ((notas!=5) && (notas!=10) && (notas!=20) && (notas!=50) && (notas!=100) && (notas!=200) && (notas!=500)){
          cout<<"Introduza o pagamento: ";
          cin>>notas;
    }
    cout<<"Troco: "<<notas-valor<<"\n\n";
    notas= notas*100;
    valor=valor*100;
    int troco = notas - valor;
    cout<<"Moedas devolvidas: \n";
    int moedas_euros[2] = {200,100};
    int moedas_centimos[6] = {50,20,10,5,2,1};
    for (int i = 0; i <= 1; i++){
        int qt_moedas = troco / moedas_euros[i];
        troco -= moedas_euros[i] * qt_moedas;
        if (qt_moedas>1){
            if (i==1){
                cout<<qt_moedas<<" moedas de "<< moedas_euros[i]/100<<" euro\n";
            }
            else{
                cout<<qt_moedas<<" moedas de "<< moedas_euros[i]/100<<" euros\n";
            }
        }
        else if(qt_moedas==1) {
            if(i==1){
                cout<<qt_moedas<<" moeda de "<< moedas_euros[i]/100<<" euro\n";
            }
            else{
                cout<<qt_moedas<<" moeda de "<< moedas_euros[i]/100<<" euros\n";
            }
        }
    }
    for (int i = 0; i <=5; i++){
        int qt_moedas = troco / moedas_centimos[i];
        troco -= moedas_centimos[i] * qt_moedas;
        if (qt_moedas>1){
            if(i==5){
                cout<<qt_moedas<<" moedas de "<< moedas_centimos[i]<<" centimo\n";
            }
            else{
                cout<<qt_moedas<<" moedas de "<< moedas_centimos[i]<<" centimos\n";
            }
        }
        else if(qt_moedas==1){
            if(i==5){
                cout<<qt_moedas<<" moeda de "<< moedas_centimos[i]<<" centimo\n";
            }
            else{
                cout<<qt_moedas<<" moeda de "<< moedas_centimos[i]<<" centimos\n";
            }
        }
    }
    system("pause");
}