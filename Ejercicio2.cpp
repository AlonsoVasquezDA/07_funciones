#include<iostream>
using namespace std;
void Dividirporesta(int,int,int,int);
int main(){
	int n1,n2,cociente,resto;
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
	if(n1>0 && n2>0){
		Dividirporesta(n1,n2,cociente,resto);
		cout<<"El cociente es: "<<cociente<<endl;
		cout<<"El resto es: "<<resto<<endl;
	}
	else{
		cout<<"ERROR: Ambos numeros deben ser positivos mayores que cero."<<endl;
	}
	return 0;
}
void Dividirporesta(int n1, int n2, int ccociente, int rresto){
	int mayor,menor;
	if(n1>n2){
		mayor=n1;
		menor=n2;
	}
	else{
	    mayor=n2;
		menor=n1;
	}
	ccociente=0;
	rresto=mayor;
	while(rresto>= menor){
		rresto=rresto-menor;
		ccociente=ccociente+1;
	}
	
}
