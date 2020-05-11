//MERGESORT
#include <iostream>
using namespace std;
void merge(int arreglo[], int p, int q, int tam) 
{
	int n1= q-p+1;
	int n2= tam-q;
	int L[n1], M[n2];
	for(int i= 0; i<n1;i++)
	    L[i]=arreglo[p+i];
	for(int j=0;j<n2;j++)
	    M[j]=arreglo[q+1+j];
	int i=0, j=0, k=p;
	while(i<n1&&j<n2){
	    if (L[i]<=M[j]){
	      arreglo[k]=L[i];
	      i++;
	    } 
		else{
	      arreglo[k]=M[j];
	      j++;
	    }
	    k++;
	}
	while(i<n1){
		arreglo[k]=L[i];
	    i++;
	    k++;
	}
	while(j<n2){
	    arreglo[k]=M[j];
	    j++;
	    k++;
	}
}
void mergeSort(int arreglo[],int l,int tam) 
{
	if(l<tam){
	    int m=l+(tam-l)/2;
	    mergeSort(arreglo,l,m);
	    mergeSort(arreglo,m+1,tam);
	    merge(arreglo,l,m,tam);
	}
}
void mostrar(int arreglo[],int tam) {
  for(int i=0;i<tam;i++)
    cout<<arreglo[i]<<" ";
}
int main() {
  int arreglo[]={45, 20, 2, 3, 3, 1};
  mergeSort(arreglo,0,6-1);
  mostrar(arreglo,6);
  return 0;
}
