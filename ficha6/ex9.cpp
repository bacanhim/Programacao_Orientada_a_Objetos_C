#include <iostream>
#include <stdio.h>
using namespace std;
main(){
    int val,i;
    cout<<"Introduza o valor";
    cin>>val;
    for (i=val;i>0;i--){
        if (i%2==0){
            cout<<i<<"\n";
        }
    }
    system("PAUSE");
}