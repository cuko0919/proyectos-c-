#include <iostream>

int main(){ 
    std::string nombre; 
    std::string edad; 


    while (nombre.empty())
    {
        std::cout<<"porfavor indrta tu nombre: "; 
        std::getline(std::cin, nombre);
    }
    while (edad.empty())
    {
        std::cout<<"porfavor ingresa tu edad: ";
        std::getline(std::cin, edad); 
    }
    
    std::cout<<"tu nombre es: "<<nombre<< std::endl;
    std::cout<<"tu edad es: "<<edad; 

    return 0; 
}

/*
el ciclo while se usa para poder repetir un ciclo 
indefinidamente hasta que la petecion sea verdadera
de no ser asi se crea un bucle infinito que no permite 
salir de ahi
*/