#include <iostream>

using namespace std;

int tamIter(char *strg)
{
  int tam = 0;
  for (int i = 0; *(strg+i) != '\0'; i++){
    tam++;
  }
  return tam;
}

int tamRecu(char *strg, int c = 0)
{
  if (*(strg+c) != '\0'){
    c++;
    return tamRecu(strg,c);
  }
  return c;
}

bool palinIter(char *strg, int tam)
{
  for (int i = 0; i < tam; i++){
    if (*(strg+i) != *(strg+tam-i-1)){
      return false;
    }
  }
}
bool palinRec(char *strg, int tam, int min=0)
{
  if (tam>min){
    if (*(strg+min)==*(strg+tam)){
      return palinRec(strg,tam-1,min+1);
    }else{
      return false;
    }
  }
  return true;
}

void swap(char *strg,int x,int y)
{
  char c=*(strg+x);
  *(strg+x)=*(strg+y);
  *(strg+y)=c;
}

void invertIter(char *strg,int tam)
{

  int v=tam/2;
  tam-=1;
  for (int i=0;i<v;i++){
    swap(strg,i,tam);
    tam--;
  }
}


void invertRec(char *strg,int tam,int i = 0){
  tam--;
  if(tam>i){
    swap(strg,i,tam);
    invertRec(strg,tam,i+1);
  }
}

int main()
{
    char palabra[]="127341";
    cout<<tamIter(palabra)<<endl;
    cout<<tamRecu(palabra)<<endl;
    int tam=tamIter(palabra);
    cout<<((palinIter(palabra,tam))?"si":"no")<<endl;
    cout<<((palinRec(palabra,tam-1))?"si":"no")<<endl;
    invertIter(palabra,tam);
    cout<<palabra<<endl;
    invertRec(palabra,tam);
    cout<<palabra<<endl;
}
