#include<iostream>
using namespace std;
int main(){
    int m,i,A[20],max;
    cout<<"Ingrese la cantidad de elementos: "; cin>>m;
    for (i=0;i<m;i++){
        cout<<"Ingrese un numero: "; cin>>A[i];
    }
    max=A[0];
    for(i=1;i<m;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"El numero mayor es: "<<max;
    return 0;
}