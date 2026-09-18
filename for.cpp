#include <iostream>
using namespace std; 

int main (){

    int numero; 
    cout<<"ingresa el numero para multiplicar:";
    cin>>numero; 

    for (int i = 1; i <= 10; i++)
    {
       cout<<numero * i ; 
    }
    

  return 0; 
  
}
/*
Ciclo de Vida de Ejecución en C++Se inicializa el contador (i = 0).Se evalúa la condición (0 < 5 $\rightarrow$ Verdadero).Se ejecuta el bloque de código interno.Se aplica la actualización (i pasa a valer 1).Se repite el paso 2, 3 y 4 hasta que la condición sea falsa.


int main() {
    // Imprimir los números del 1 al 5
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteracion número: " << i << std::endl;
    }
    return 0;
}

*/