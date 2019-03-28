#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
main(){
	double n1;
	double n2;
	cout << "Introduza o cateto 1";
	cin >> n1;
	cout << "Introduza o cateto 2";
	cin >> n2;
	double res;
	res = sqrt(n1)+sqrt(n2);
	cout << res;
}
