#include<iostream>
using namespace std;
int numeroperfecto(int);
int main(){
	int numero,perfecto;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	perfecto=numeroperfecto(numero);
	if (perfecto==numero){
		cout<<"El numero es perfecto. "<<endl;
	} else {
		cout<<"El numero no es perfecto. "<<endl;
	}
	return 0;
}

int numeroperfecto(int a){
	int suma=0;
	for(int i=1;i<a;i++){
		if(a % i==0){
			suma += i;
			
		}
	}
	   cout<<endl;
	   return suma;
}
