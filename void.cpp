#include <iostream>

void ingresar_precios(double precios [3][3]){
    std::cout<<"ingresar precios \n"; 
    for (int i = 0; i < 3; i++)
             {
                for (int j = 0; j < 3; j++)
                {
                  std::cout<<"ingresa precio para la posision ["<<i<<"]["<<j<<"]"; 
                  std::cin>>precios[i][j];
                }
             }
        std::cout<<"lista guardada con exito \n"; 
}

void lista_precios(double precios [3][3]){
    std::cout<<"Lista de precios \n"; 
    for (int i = 0; i < 3; i++)
              {
                for (int j = 0; j < 3; j++)
                {
                    std::cout<<precios[i][j]<<"\t";
                }
                std::cout<<"\n";
              }
}

void reporte_estadistico (double precios [3][3]){
     double suma_total = 0; 
     double promedio = 0; 
     int total_de_productos = 3*3; 
        for (int i = 0;  i < 3; i++)
            {
              for (int j = 0; j < 3; j++)
              {
              suma_total += precios[i][j];
              }
              promedio = suma_total/total_de_productos;
                }
                  std::cout<<"----Reporte estadistico de los productos en total---- ?\n"; 
                  std::cout<<"la suma total de los productos es: "<< suma_total<< "\n";
                  std::cout<<"el promedio total de los productos es; "<< promedio<<"\n"; 
                               
}

int main(){
    double precios [3][3] = {0}; 
    int opcion = 0;

    do
    {
        std::cout<<"Tabla de precios \n";
        std::cout<<"1 para ingresar los 9 precios de cada producto: \n"; 
        std::cout<<"2 para mostrar los precios \n";
        std::cout<<"3 para mostar las estadisticas de productos: \n";
        std::cout<<"4 para salir \n";
        std::cin>>opcion;

        switch (opcion)
        {
            case 1: 
            ingresar_precios(precios); 
            break;

            case 2: 
            lista_precios(precios); 
            break;
            
            case 3: 
            reporte_estadistico(precios); 
            break;

            case 4: 
            std::cout<<"saliendo del sistema \n"; 
            break;

            default: 
            std::cout<<"porfavor ingrese lo que se le pide \n"; 
        }
    } while (opcion != 4);
    
    return 0; 
}