#include<iostream>
using namespace std;
int main(){
	int n,A[20],s,i,prom;
	cout<<"Ingrese la cantidad de elemntos: "; cin>>n;
	s=0;
    while(n<=0 || n>20){
        cout<<"El numero debe ser mayor que 0 y menor o igual a 20"<<endl;
        cout<<"Inténtelo de nuevo"<<endl; cin>>n;
    }
	for(i=0;i<n;i++){
		cout<<"Ingrese un numero: "; cin>>A[i];
		s=s+A[i];
	}
	prom=s/n;
	cout<<"Los elementos mayores al promedio de datos son: "<<endl;
	for(i=0;i<n;i++){	
		if(A[i]>prom){		
			cout<<" "<<A[i];
		}
	}	
	return 0;
}