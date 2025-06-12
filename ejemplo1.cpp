#include<iostream>
using namespace std;
int main(){
    int m,i,A[20],max;
    cout<<"Ingrese la cantidad de elementos: "; cin>>m;
    while(m<=0 || m>20){
        cout<<"El numero debe ser mayor que 0 y menor o igual a 20"<<endl;
        cout<<"Ingrese otro numero: ";
        cin>>m;
    }
    for (i=0;i<m;i++){
        cout<<"Ingrese un numero: "; cin>>A[i];
    }
    max=A[0];
    for(i=1;i<m;i++){
        if(A[i]>max){
            max=A[i];
        }
    cout<<"El numero mayor es: "<<max;
    return 0;
}