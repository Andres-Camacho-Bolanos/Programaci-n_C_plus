#include<iostream>
using namespace std;
main(){
    int n,m,a;
    cout<<"Ingrese el escalar: ";cin>>a;
    cout<<"Ingrese el numero de filas :";cin>>n;
    cout<<"Ingrese numero de columnas :";cin>>m;
    int A[n][m],B[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Ingrese un elemento: ";cin>>A[i][j];
            B[i][j]=A[i][j]*a;
        }
    }
    cout<<"\n La matriz A es: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nLa matriz multiplicada es: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"B["<<i<<"]["<<j<<"] = "<<B[i][j]<<"\t";
        }
        cout<<"\n";
    }
   return 0;
}
