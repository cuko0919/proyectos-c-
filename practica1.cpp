#include <iostream>

int main (){

    int matriz[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; 

    int sumatotal = 0; 
    int sumadiagonal = 0; 
    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j ++)
        {
          sumatotal += matriz[i][j]; 
          if (i == j)
          {
            sumadiagonal += matriz[i][j]; 
          }
          
        }
        
    }
    
    std::cout<<"suma total de matriz: "<< sumatotal<<"\n"; 
    std::cout<<"suma total diagonal: "<< sumadiagonal<<"\n"; 


    return 0; 

}