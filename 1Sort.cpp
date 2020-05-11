#include <iostream>
using namespace std;
void insertion(int arreglo[],int tam)
{	
	for(int i=1;i<tam;i++){
		int l=0;
		for(int j=i-1;j>=0;j--){
			if(arreglo[i-l]<arreglo[j]){
				int aux=arreglo[i-l];
				arreglo[i-l]=arreglo[j];
				arreglo[j]=aux;
				l++;
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
{				// 0 1 2 3 4 5 6 7
	int arreglo[]={3,2,1,4,3,6,9,1};
	insertion(arreglo,8);
	mostrar(arreglo,8);
}
