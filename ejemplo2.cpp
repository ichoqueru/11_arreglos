#include<iostream>
using namespace std;
int main(){
	int n,A[20],s,i,prom;
	cout<<"Ingrese la cantidad de elemntos: "; cin>>n;
	s=0;
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