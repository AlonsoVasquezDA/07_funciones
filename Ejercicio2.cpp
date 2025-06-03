#include<iostream>
using namespace std;
void Divresta(int,int,int,int);
int main(){
	int num1,num2,cociente,resto;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if(num1>0 && num2>0){
		Divresta(num1,num2,cociente,resto);
		cout<<"El cociente es: "<<cociente<<endl;
		cout<<"El resto es: "<<resto<<endl;
	}
	else{
		cout<<"Ambos numeros deben ser positivos mayores que cero."<<endl;
	}
	return 0;
}
void Divresta(int num1, int num2, int ccociente, int rresto){
	int mayor,menor;
	if(num1>num2){
		mayor=num1;
		menor=num2;
	}
	else{
	    mayor=num2;
		menor=num1;
	}
	ccociente=0;
	rresto=mayor;
	while(rresto>= menor){
		rresto=rresto-menor;
		ccociente=ccociente+1;
	}
	
}
