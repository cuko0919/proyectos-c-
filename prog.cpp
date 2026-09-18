#include <iostream>
 
int main(){
    std::string trabajadores; 
    std::string trabajo; 
    int opcion = 0; 

    do
    {
          std::cout<<"Eres el trabajador que debes de hacer? \n";
          std::cout<<"1 si hay trabajo \n";
          std::cout<<"2 casi no hay \n";
          std::cout<<"3 no hay nada alv \n";
          std::cin>>opcion;

        switch (opcion)
        {
            case 1: 
              std::cout<<"se pone a chambear \n"; 
              break;

            case 2: 
              std::cout<<"se hace wey un rato \n";
              break;

            case 3: 
              for (int i = 1; i <= 5; i++)
              {
                std::cout<< i <<"\n"; 
              }
            
              break;
              
            case 4: 
              std::cout<<"se va de la chamba \n";
              break;
            
            default:
             std::cout<<"pon atencion bien \n";
        }
    } while (opcion != 4);
    
}