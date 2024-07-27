#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int num) {
  // Función para determinar si un número es primo
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;
  for (int i = 5; i * i <= num; i = i + 6) {
    if (num % i == 0 || num % (i + 2) == 0) return false;
  }
  return true;   

}

int main() {
  const int TAM = 20;
  int numeros[TAM], primos[TAM], numPrimos = 0;

  srand(time(NULL)); // Inicializar la semilla para números aleatorios

  // Generar números aleatorios y almacenarlos en el arreglo
  for (int i = 0; i < TAM; i++) {
    numeros[i] = rand() % 100;
  }

  // Identificar y almacenar los números primos
  for (int i = 0; i < TAM; i++) {
    if (esPrimo(numeros[i])) {
      primos[numPrimos] = numeros[i];
      numPrimos++;
    }
  }

  // Mostrar los arreglos
  cout << "Numeros aleatorios: ";
  for (int i = 0; i < TAM; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;

  cout << "Numeros primos: ";
  for (int i = 0; i < numPrimos; i++) {
    cout << primos[i] << " ";
  }
  cout << endl;

  return 0;
}
