//QuickSort 
#include <iostream> 
using namespace std;  
void inter(int *a, int *b)  //intercambio de valores
{  
    int aux= *a;  
    *a=*b;  
    *b=aux;  
}  
int dividir(int arr[], int inicio, int final)  
{  
    int pivote=arr[final]; 
    int i=(inicio-1); 
  
    for (int j=inicio;j<=final-1;j++)  
    {   
        if (arr[j] < pivote)  
        {  
            i++; 
            inter(&arr[i], &arr[j]);  
        }  
    }  
    inter(&arr[i+1], &arr[final]);  //paso por referencia
    return (i+1);  
}  
void quickSort(int arr[],int inicio,int final)  
{  
    if (inicio<final)  
    {  
        int pi=dividir(arr,inicio,final);  
        quickSort(arr,inicio,pi-1);  
        quickSort(arr,pi+1,final);  
    }  
}  
void mostrar(int arr[],int tam)  
{  
    for (int i=0;i<tam;i++)  
        cout <<arr[i]<<" ";  
}  
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};    
    quickSort(arr,0,6-1);   
    mostrar(arr,6);  
    return 0;  
}  
