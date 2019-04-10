#include <iostream>
using namespace std;
main(){
    int value;
    cout<<"Introduza um valor";
    cin>>value;
    for (int i=value;i>=0;i--){
        cout<<i<<"\n";
    }
    for (int i=0;i<=value;i++){
        cout<<i<<"\n";
    }
    system("PAUSE");
}