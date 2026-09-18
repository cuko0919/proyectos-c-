/*#include <iostream>

int main (){
    int fila = 3; 
    int columna = 3; 

    int tablero[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    std::cout<<"matriz perra alv \n";

    for (int i = 0;  i < fila; i++)
    {
     for (int j = 0; j < columna; j++)
     {
       std::cout<< tablero[i][j];
     }
     std::cout<<"\n";
    }


    return 0; 
} 
    */


#include <iostream>

int main (){
    /*La Declaración: int matriz[3][3] indica TAMAÑO, no índices
Cuando declaras la matriz:*/
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    /*Los números dentro de los corchetes le dicen al compilador:
    ¿Cuántas filas en total quiero? $\rightarrow$ 3 filas.
    ¿Cuántas columnas en total quiero? $\rightarrow$ 3 columnas.*/


    int sumatotal = 3; 
    int sumatotaldiagonal = 3; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumatotal += matriz[i][j];

            if (i == j)
            {
                sumatotaldiagonal += matriz[i][j];
            }
            
            /*Ese pequeño if (i == j) es el que actúa como un filtro inteligente. 
            Vamos a desglosar paso a paso lo que hace la computadora en cada una de 
            las vueltas (iteraciones) de tus bucles for para entender por qué elige
             precisamente esos números: 

             matriz[0][0] = 5  |  matriz[0][1] = 8  |  matriz[0][2] = 2

             matriz[1][0] = 1  |  matriz[1][1] = 9  |  matriz[1][2] = 4

             matriz[2][0] = 6  |  matriz[2][1] = 3  |  matriz[2][2] = 7*/
        }
        
    }
    
    std::cout<<"la suma total de la matriz es: \n " <<sumatotal<< "\n";
    std::cout<<"la suma de la diagonal de la matriz es: \n" <<sumatotaldiagonal <<"\n";


    return 0; 

}