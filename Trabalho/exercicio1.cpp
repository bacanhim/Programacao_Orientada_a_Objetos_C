#include <iostream>
using namespace std;
main(){
    double valor;
    int notas;
    cout<<"CAIXA DE PAGAMENTO\nSo sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>: \n";
    cout<<"Introduza um valor: ";
    cin>>valor;
    while ((notas!=5) && (notas!=10) && (notas!=20) && (notas!=50) && (notas!=100) && (notas!=200) && (notas!=500)){
          cout<<"Introduza o pagamento: ";
          cin>>notas;
    }
    double troco = notas - valor ;
    cout<<"Troco: "<<troco<<"\n\n";
    cout<<"Moedas devolvidas: \n";
    int moedas_euros[2] = {2,1};
    double moedas_centimos[6] = {0.5,0.2,0.1,0.05,0.02,0.01};
    for (int i = 0; i <= 1; i++){
        int qt_moedas = troco / moedas_euros[i];
        troco -= moedas_euros[i] * qt_moedas;
        if (qt_moedas>0){
        cout<<qt_moedas<<" moedas de "<< moedas_euros[i]<<" euros\n";
        }
    }
    for (int i = 0; i <=5; i++){
        int qt_moedas = troco / moedas_centimos[i];
        troco -= moedas_centimos[i] * qt_moedas;
        if (qt_moedas>0){
            cout<<qt_moedas<<" moedas de "<< moedas_centimos[i]*100<<" centimos\n";
        }
    }
    system("pause");
}