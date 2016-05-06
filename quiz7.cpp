#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double dot_product(double lista1[], double lista2[], int num)
{
  double res=0;
    for (int i=1; i<=num; i++){
      res=res+(lista1[i]*lista2[i]);
    }
return res;
}

int main(){
  int num;
  double res;
    cout << "Este programa calculara el producto punto de dos listas de numeros"<<endl;
    cout << "¿Cuantos números tienen las listas?: ";
    cin >> num;
  double lista1[num], lista2[num];
  for (int i=1; i<=num; i++){
    cout << "Cual es el "<< i << " valor de la primera lista: ";
    cin >> lista1[i];
  }
  for (int i=1; i<=num; i++){
    cout << "Cual es el "<< i << " valor de la segunda lista: ";
    cin >> lista2[i];
  }
    res=dot_product(lista1, lista2, num);
    cout << "El producto punto de esas listas es: "<<res<<endl;

  return 0;
}
