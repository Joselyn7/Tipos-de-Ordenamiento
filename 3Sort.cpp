#include <iostream>
using namespace std;
int ciframay(int arreglo[],int tam)
{
	int may=0;
	for(int i=0;i<tam;i++)
		if(arreglo[i]>=may)
			may=arreglo[i];
	int dig=1;
	while(may>=10){
		may=may/10;
		dig++;
	}
	return dig;
}
void radix(int arreglo[],int tam)
{
	for(int i=0;i<ciframay(arreglo,tam);i++){
		for(int j=1;j<tam;j++){
			int l=0, a=0;
			for(int k=j-1;k>=0;k--){
				int b=0;
				if(arreglo[j-l]>=10){
					if(arreglo[k]>=10){
						for(int h=0;h<i+1;h++){ //veces que se dividirá el numero
							a=arreglo[j-l]%10;
							b=arreglo[k]%10;
						}
						if(a<b){
							int aux=arreglo[j-l];
							arreglo[j-l]=arreglo[k];
							arreglo[k]=aux;
							l++;
						}									
					}
					else{
						b=arreglo[k]/1;
						for(int h=0;h<i+1;h++) //veces que se dividirá el numero
							a=arreglo[j-l]%10;
						if(a<b){
							int aux=arreglo[j-l];
							arreglo[j-l]=arreglo[k];
							arreglo[k]=aux;
							l++;
						}						
					}		
				}
				else{
					a=arreglo[j-l]/1; 
					if(arreglo[k]>=10){
						for(int h=0;h<i+1;h++){ //veces que se dividirá el numero
							b=arreglo[k]%10;
						}
						if(a<b){
							int aux=arreglo[j-l];
							arreglo[j-l]=arreglo[k];
							arreglo[k]=aux;
							l++;
						}									
					}
					else{
						b=arreglo[k]/1;
						if(a<b){
							int aux=arreglo[j-l];
							arreglo[j-l]=arreglo[k];
							arreglo[k]=aux;
							l++;
						}						
					}		
				}					
			}
		}
	}
}
void mostrar(int arreglo[],int tam)
{
	for(int i=0;i<tam;i++)
		cout<<arreglo[i]<<" ";
}
int main()
{
	int arreglo[]={170,45,75,90,802,24,2,66};	
	radix(arreglo,8);
	mostrar(arreglo,8);
}
