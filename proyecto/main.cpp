#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
    cout << "ingrese el primer numero:";
    cin >> a;
    cout << "ingrese el segundo numero:";
    cin >> b;
    cout << "ingrese el tercer numero:";
    cin >> c;
  if ((a>b)&&(a>c)){
     cout << "el numero mayor es:"<< a << endl;
    }
  if ((b>a)&&(b>c)){
     cout << "el numero mayor es:"<<  b << endl;
    }
    
  if ((c>b)&&(c>a)){
     cout << "el numero mayor es:"<< c << endl;
    }
  return 0;
}
