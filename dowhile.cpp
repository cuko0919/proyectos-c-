#include <iostream>

int main (){
int opcion = 0; 
int suma; 
std::string pedido;
do
{
    std::cout<<"***** Menu ***** \n";
    std::cout<<"1. hamburguesas clasicas. \n";
    std::cout<<"2. pizza 8 pedazos. \n";
    std::cout<<"3. suchon mochoso. \n";
    std::cout<<"4. cocona. \n";
    std::cout<<"5. salir. \n "; 
    std::cin>>opcion; 

    switch (opcion)
    {
    case 1: 
     std::cout<<"Cuantas hamburguesas serian: "; 
     std::cin>>suma;
     pedido = "hamburguesa"; 
     break;
    case 2: 
     std::cout<<"Cuantas pipzas serian: "; 
     std::cin>>suma; 
     pedido = "pipzas";
     break;
    case 3: 
     std::cout<<"Cuantos sushones van a hacer: ";
     std::cin>>suma;
     pedido = "sushon";
     break; 
    case 4: 
     std::cout<<"Cuantas coconas van a hacer: "; 
     std::cin>>suma; 
     pedido = "cocona";
     break;
    case 5: 
     std::cout<<"muchas gracias"; 
     break;
    default: 
     std::cout<<"porfavor ingresa lo que se le pide";
     break;
    
    
    }
    
} while (opcion != 5);

std::cout<<"lo que pidio es: "<< suma <<" "<< pedido; 
  

    return 0; 
}

/*
Ciclo de Vida de Ejecución:
El programa entra directamente al bloque do sin evaluar nada.

Se ejecuta todo el código que está dentro de las llaves { ... }.

Al llegar al final (while (condición)), se evalúa la condición:

Si es verdadero (true), el flujo regresa al inicio (do) y repite el proceso.

Si es falso (false), el bucle termina y el programa continúa con 

la siguiente instrucción después del punto y coma.
*/