#include<iostream>
using namespace std;
int esPrimo(int);  
int main() {
	int num;
	cout << "Ingrese un numero: "<<endl;
	cin >> num;
	if (num> 0) {
		if (esPrimo(num) == 1) {
			cout << "El numero " << num << " es primo." << endl;
		} else {
			cout << "El numero " << num << " no es primo." << endl;
		}
	}else if (num==0){
             cout<<"Ingrese un numero diferente a cero. " << endl;
             return 2;
        } 
	return 0;
}

int esPrimo(int n) {
	int divisores = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisores++;
		}
	}
	if (divisores == 2) {
		return 1;  
	} else {
		return 0; 
	}
}

