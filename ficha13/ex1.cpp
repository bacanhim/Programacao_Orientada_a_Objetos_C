#include <iostream>
using namespace std;
int subtracao(int *x,int *y){
    return *x-*y;
}
main(){
    int a,b;
    cout<<"x = ";
    cin>>a;
    cout<<"y = ";
    cin>>b;
    cout<<"Resultado da subtracao = "<<subtracao(&a,&b)<<"\n\n";
    system("pause");
}