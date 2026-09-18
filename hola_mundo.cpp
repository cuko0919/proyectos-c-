#include <iostream>
using namespace std; 

int main (){

  int temperatura; 
  char op; 
  int resultado; 


  cout<<"ingresa la temperatura actual: "; 
  cin>>temperatura; 

  cout<<"ingresa el tipo de conversion: C o F";
  cin>>op; 

  if ( op == 'C'|| op == 'c' )
  {
    resultado = (temperatura - 32)/ 1.8; 
    cout<<"la temperatura convertida de farenheit a celcius es: " << resultado; 
  }
  else if (op == 'f' || op == 'F'){ 
    resultado = (temperatura * 1.8) + 32; 
    cout<<"la tmeperatura convertida de celcius a farenheit es: " << resultado; 
  }
  else{ 
    cout<<"ingresa porfavor los caracteres que muestran F o C";
  }
  
  return 0; 


  
}