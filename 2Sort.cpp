#include <iostream>
using namespace std;
void selection(int arreglo[],int tam)
{
	for(int i=0;i<tam;i++){
		int men=arreglo[i] ;int jj=0;
		for(int j=i;j<tam;j++){
			if(arreglo[j]<=men){
				men=arreglo[j];
				jj=j;
			}
		}
		int aux=arreglo[i];
		arreglo[i]=arreglo[jj];
		arreglo[jj]=aux;
	}
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<" ";
	}
}
int main()
{
	int arreglo[]={64,25,12,22,11};
	selection(arreglo,5);
}
