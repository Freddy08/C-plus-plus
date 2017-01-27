#include <iostream>
#include <cmath>

using namespace std;

float evalua(float a[], int n, float x); // prototipo
void deriva(float a[], int n, float da[]);

int main()
{
   int n;   // # de coeficientes
   
   cout << "Numero De Coeficientes: ";
   cin >> n;
   
   float a[n]; // Arreglo de coeficientes
   float x;
   
   for (int i = 0; i < n; i++) {
      cout << "Coeficiente a[" << i << "] = ";
      cin >> a[i];
   }
   
   float da[n - 1];
   deriva(a, n, da);
   cout << "\nCoeficientes Del Polinomio Derivada:" << endl;
   for (int i = 0; i < n - 1; i++) {
      if (i == 0) {
         cout << da[i] << " + ";
      } else {
         if (i != n - 2) {
            cout << da[i] << "x^" << i << " + ";
         } else { // i == n - 2
            cout << da[i] << "x^" << i << endl;
         }
      }
      
   }
   
   
   cin.get();
   cin.get();
   return 0;
}

float evalua(float a[], int n, float x) {
   // Cálculo del valor numérico de P(x)
   float p = 0.0;
   for (int i = 0; i < n; i++) {
      p = p + a[i] * pow(x, i);
   }
   
   return p;
}

void deriva(float a[], int n, float da[]) {
   
   // Cálculo de la derivada
   for (int i = 1; i < n; i++) {
      da[i - 1] = a[i] * i;
   }
}

