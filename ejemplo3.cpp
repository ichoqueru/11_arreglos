#include<iostream>
using namespace std;
int main(){
	int n,i,A[20],aux;
	cout<<"Ingrese una cantidad de elementos: "; cin>>n;
	for(i=0;i<n;i++){
		cout<<"Ingrese un numero: "; cin>>A[i];
	}
	for(i=0;i<n/2;i++){
		aux=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=aux;
	}
	for(i=0;i<n;i++){
		cout<<A[i]<<endl;
	}	
	return 0;
}