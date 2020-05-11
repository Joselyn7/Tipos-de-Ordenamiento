#include <iostream>
using namespace std;
int mayor(int arreglo[],int tam){
	int may=0;
	for(int i=0;i<tam;i++)
		if(arreglo[i]>=may)
			may=arreglo[i];
	return may;
}
void counting(int arreglo[],int tam)
{
	int arreglo2[mayor(arreglo,7)+1];
	int ASalida[tam];
	int veces=0;
	for(int i=0;i<mayor(arreglo,7)+1;i++){
		for(int j=0;j<tam;j++){
			if(i==arreglo[j])
				veces++;
		}
		arreglo2[i]=veces;
	}
	for(int i=0;i<tam;i++){
		for(int j=0;j<mayor(arreglo,7)+1;j++){
			if(arreglo[i]==j){
				ASalida[arreglo2[j]-1]=arreglo[i];
				arreglo2[j]-=1;
				break;
			}
		}
	}	
	for(int i=0;i<tam;i++)
		cout<<ASalida[i]<<" ";
}
int main()
{
	int arreglo[]={3,2,2,8,3,3,1};
	counting(arreglo,7);
}
