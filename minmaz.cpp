#include <iostream>



int main(){
    int lista_precios [5] = {200,150,100,500,300};

    double precioMax = lista_precios[0]; 
    double precioMin = lista_precios[0]; 

    for (int i = 1; i < 5; i++)
    {
     if (lista_precios[i] > precioMax)
     {
        precioMax = lista_precios[i];
     }

     if (lista_precios[i] < precioMin)
     {
        precioMin = lista_precios[i]; 
     }
     
    }

    std::cout<<"el precio  mas alto es: "<<precioMax<<"\n"; 
    std::cout<<"el precio minimo es: "<<precioMin<<"\n";
    

}- 