#include <iostream>

using namespace std;

void printArreglo(int arr[],int tam)
{
  cout<<"(";
  for (int i=0;i<tam;i++){
    if (i!=tam-1){
      cout<<arr[i]<<",";
    }else{
      cout<<arr[i];
    }
  }
  cout<<")"<<endl;
}

int sumaRec(int arr[], int tam)
{
  int suma=0;
  for(int i=0;i<tam;i++){
    suma+=arr[i];
  }
  return suma;
}

int sumaRecArr(int arr[], int tam)
{
  tam-=1;
  if (tam==0){
    return arr[tam];
  }
  return arr[tam]+sumaRecArr(arr,tam);
}



void invertir(int arr[], int tam)
{
  int v=tam/2;
  tam-=1;
  for (int i=0;i<v;i++){
    int c=arr[i];
    arr[i]=arr[tam];
    arr[tam--]=c;
  }
}

void invertirRec(int arr[], int tam, int i=0)
{
  tam--;
  if(tam>i){
    int c=arr[i];
    arr[i]=arr[tam];
    arr[tam]=c;
    invertirRec(arr,tam,i+1);
  }
}

void burbuja(arr[],int tam){
  while ordenado{
  }
}

int main()
{
  int ele;
  cout<<"Ingrese la cantidad de elementos del arreglo:";
  cin>>ele;
  int arreglo[ele];
  cout<<"Ingrese los elementos:"<<endl;
  for(int i=0;i<ele;i++){
    cin>>arreglo[i];
  }
  printArreglo(arreglo,ele);
  cout<<"Suma recursiva: "<<sumaRecArr(arreglo,ele)<<endl;
  cout<<"Suma iterativa: "<<sumaRec(arreglo,ele)<<endl;
  invertir(arreglo,ele);
  cout<<"invertir iterativa: ";
  printArreglo(arreglo,ele);
  invertir(arreglo,ele);
  printArreglo(arreglo,ele);
  invertirRec(arreglo,ele);
  printArreglo(arreglo,ele);


}
