#include <iostream>

void sumatotal(double op01, double op02){
    double resultado= op01 + op02; 
    std::cout<<"el resultado es: "<<resultado; 
}
void restatotal(double op01, double op02){
    double resultado = op01 - op02; 
     std::cout<<"el resultado es: "<<resultado; 
}
void multiplicaciontotal(double op01, double op02){
    double resultado = op01 * op02; 
     std::cout<<"el resultado es: "<<resultado; 
}
void diviciontotal(double op01, double op02){
    double resultado = op01 / op02; 
    if (resultado <= -1)
    {
        std::cout<<"no se puede divivir";
    }
    else{
        std::cout<<"el resultado es: "<<resultado; 
    }
}
int main(){
double op01 = 0, op02 = 0; 
int caracter; 

std::cout<<"calculadora porfavor ingrese operador  \n";
std::cout<<"operacion 1 \n";
std::cin>>op01; 
std::cout<<"operacion 2 \n"; 
std::cin>>op02; 
std::cout<<"seleccione operador: \n"; 
std::cout<<"1.sumar \n";                 
std::cout<<"2.restar \n"; 
std::cout<<"3.multiplicar \n"; 
std::cout<<"4.dividir \n";
std::cin>>caracter; 

switch (caracter)
{
case 1: 
 sumatotal(op01, op02); 
break;

case 4: 
 diviciontotal(op01, op02); 
break;
}

}