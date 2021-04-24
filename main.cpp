#include <iostream>
using namespace std;
#define A 5

int main() {
 
 float valor[A];
 float maior = 0, menor = 1000;
 float soma = 0, media = 0;

 //Entrada
 for(int i = 0; i < A; i++){
   cin>>valor[i];
 }
 //Processamento
 for(int i = 0; i < A; i++){
   if(valor[i] > maior){
     maior = valor[i];
   }
   if(valor[i] < menor){
     menor = valor[i];
   }
   soma = soma + valor[i];
 }

 //Saida
 for(int i = 0; i < A; i++){
  cout<<valor[i]<<" ";
 }
  media = soma / A;
  
   cout<<endl;
   cout<<"Maior valor: "<<maior<<endl;
   cout<<"Menor valor: "<<menor<<endl;
   cout<<"Media dos valores: "<<media;
 }

  
