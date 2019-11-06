#include <iostream>
#include <cmath>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

void relleno(int l,float **m);

void imprimecabezas(int l,float **m);

void imprime(int l,float **m);

int main(){

cout<<"Escriba un numero del 3 al 11"<<endl;

int num;
int dos_num;
cin>>num;
dos_num=num+2;
    
float **matriz;
matriz = new float *[num];
    
for(int i = 0; i<dos_num ;i++) {
      matriz[i] = new float[dos_num];
    }

if(num>=3 && num<=11){
    relleno(num,matriz);

imprimecabezas(num,matriz);

}


else{cout<<"El numero no esta en el rango valido"<<endl;
    }

return 0;

}



void relleno(int l, float **m){
    int i;
    int j;
    
    for(i=0; i<l; i++){
        for(j=0; j<l+2; j++){
            
            m[i][j]=i+j;
        }
    }
}

void imprimecabezas(int l, float **m){

float sum=0;

for(int i=0; i<l; i++){
    cout<<m[i][0]<<" ";
    sum+=m[i][0];
    }
  cout<<"La suma es"<<" "<<sum<<endl;
}



void imprime(int l,float **m){

for (int j=0; j < l+2 ;j++) {

for ( int i=0; i <l;i++) {

cout<<" "<<m[i][j]<<" ";

}

cout<<endl;

}

}