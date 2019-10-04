#include <iostream>

using namespace std;

void sawp(int *arr,int x,int y)
{
  int c=*(arr+x);
  *(arr+x)=*(arr+y);
  *(arr+y)=c;
}

void printArreglo(int *arr,int tam)
{
  cout<<"(";
  for (int i=0;i<tam;i++){
    if (i!=tam-1){
      cout<<*arr<<",";
    }else{
      cout<<*arr;
    }
  arr++;
  }
  cout<<")"<<endl;
}

int sumaIter(int *arr, int tam)
{
  int suma=0;
  for(int i=0;i<tam;i++){
    suma+=*arr;
    arr++;
  }
  return suma;
}

int sumaRecArr(int *arr, int tam)
{
  tam-=1;
  if (tam==0){
    return *(arr+tam);
  }
  return *(arr+tam)+sumaRecArr(arr,tam);
}



void invertir(int *arr, int tam)
{
  int v=tam/2;
  tam-=1;
  for (int i=0;i<v;i++){
    sawp(arr,i,tam);
    tam--;
  }
}

void invertirRec(int *arr, int tam, int i=0)
{
  tam--;
  if(tam>i){
    sawp(arr,i,tam);
    invertirRec(arr,tam,i+1);
  }
}

void burbuja(int *arr,int tam){
  bool cambio=true;
  while (cambio){
    cambio=false;
    for(int i=0;i<tam-1;i++){
      if (*(arr+i)>*(arr+i+1)){
        sawp(arr,i,i+1);
        cambio=true;
      }
    }
    tam--;
  }
}

void inserccion(int *arr,int tam)
{
  for(int i=0;i<tam;i++){
    int guar=*(arr+i);
    int j=i;
    while(j>0 and *(arr+j-1)>guar){
      *(arr+j)=*(arr+j-1);
      j-=1;
    }
    *(arr+j)=guar;
  }
}

void Quick(int *arr,int primero, int ultimo)
{
  int i=primero;
  int j=ultimo;
  int pivote=(*(arr+i)+*(arr+j))/2;
  while (i<j){
    while(*(arr+i)<pivote){
      i++;
    }
    while(*(arr+j)>pivote){
      j--;
    }
    if (i<=j){
      sawp(arr,i,j);
      i++;
      j--;
    }
  }
  if (j>primero){
    Quick(arr,primero,j);
  }
  if (i<ultimo){
    Quick(arr,i,ultimo);
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
    cin>>*(arreglo+i);
  }
  printArreglo(arreglo,ele);
  cout<<"Suma recursiva: "<<sumaRecArr(arreglo,ele)<<endl;
  cout<<"Suma iterativa: "<<sumaIter(arreglo,ele)<<endl;
  invertir(arreglo,ele);
  cout<<"invertir iterativa: ";
  printArreglo(arreglo,ele);
  invertir(arreglo,ele);
  cout<<"invertir recursiva: ";
  invertirRec(arreglo,ele);
  printArreglo(arreglo,ele);
  burbuja(arreglo,ele);
  inserccion(arreglo,ele);
  Quick(arreglo,0,ele-1);
  printArreglo(arreglo,ele);
}
