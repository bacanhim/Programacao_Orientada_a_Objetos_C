#include <iostream>
#include <stdio.h>
using namespace std;
main(){
    int val;
    cout<<"Produtos da semana dos descontos \n 1 - Cereais Nestum, 2- Sumo Tropical\n 3 - Geleia Morango, 4 - Massa Italiana \n 5- Arroz Amarelo, 6 - Leite de Soja\n 7 - Coca Cola Zero, 8 - Couve de Bruxelas \n\nIndique o numero do produto: ";
    cin>>val;
    switch (val){
        case 1:
            cout<<"Desconto = 20%\n";
            break;
        case 2:
            cout<<"Desconto = 15%\n";
            break;
        case 3:
            cout<<"Desconto = 20%\n";
            break;
        case 4:
            cout<<"Desconto = 10%\n";
            break;
        case 5:
            cout<<"Desconto = 10%\n";
            break;
        case 6:
            cout<<"Desconto = 20%\n";
            break;
        case 7:
            cout<<"Desconto = 15%\n";
            break;
        case 8:
            cout<<"Desconto = 5%\n";
            break;  
    }
    system("PAUSE");
}