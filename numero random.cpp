#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<ctime>
	
using namespace std;	

int main(){
int vector[100];
srand(time(0)); // iniciando la semilla aleatoria

// Formula a + rand() % (b-a+1)

// eligiendo 15 numeros aleatorios distintos entre 1 y 50
for(int i=0;i<5;i++)
{
    // Genera numero aleatorio
    int num = 1 + rand()%18;

   if(i>0)
   {
      // Verifica si no se ha generado antes   
      for(int j=0; j < i; j++)     
          if(num==vector[j])
          {
             num = 1 + rand()%18;
             j=-1;                         
          }
    }

    vector [ i ] =num;
    cout<<"\nNumero aleat: "<<num;
}
return 0;
}
