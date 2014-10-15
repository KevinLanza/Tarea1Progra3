#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{

    return a + b;//Devuelve la sumatoria de las dos variables "a" y "b".
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a - b;//Devuelve la resta de las dos variables "a" y "b".
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a * b;//Devuelve la multiplicacion de las dos variables "a" y "b".
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a / b;//Devuelve la division de las dos variables "a" y "b".
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)//Se hace un if para evaluar si una variable es mayor que otra.
    {
    return a;//Devuelve el valor de la variable si la condicion se cumple.
    }else
    {
    return b;// Sino devuelve el valor de la segunda variable.
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b)//Se hace un if para evaluar si una variable es menor que otra.
    {
    return a;//Devuelve el valor de la variable si la condicion se cumple.
    }else
    {
    return b;// Sino devuelve el valor de la segunda variable.
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b && a>c)//Se evalua si la variable a es mayor a las otras dos variables.
    {
    return a;//devuelve el valor de la variable a.
    }
    if (b>a && b>c)//Se evalua si la variable b es mayor a las otras dos variables.
    {
    return b;//devuelve el valor de la variable b.
    }
    else
    {
    return c;//Si ninguna de las condiciones anteriores se cumplen devuelve el valor de c.
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor;//Se establece la posicion en el arreglo y se iguala a la variable valor.
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];//Devuelve el valor del arreglo en la posicion de la variable del mismo nombre.
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor=-9999;//Se establece una variable para para comparar.
    for(int i=0;i<tamano;i++)//Se hace un for donde se determina un contador.
    {
    if(arreglo[i]>mayor)//Se compara el valor del arreglo a ver si es mayor que la variable que hicimos.
    {
    mayor=arreglo[i];//La variable hecha se convierte en el arreglo en la posicion dada.
    }
    }
return mayor;//Devuelve el numero mayor.
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor=9999;//Se establece una variable para para comparar.
    for(int i=0;i<tamano;i++)//Se hace un for donde se determina un contador.
    {
    if(arreglo[i]<menor)//Se compara el valor del arreglo a ver si es menor que la variable que hicimos.
    {
    menor=arreglo[i];//La variable hecha se convierte en el arreglo en la posicion dada.
    }
    }
return menor;//Devuelve el numero menor.
}


//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int num=0;//Se hace una variable de cantidad de numeros que hay.
    int promedio=0;//Se hace una variable para asignarle el valor final a promedio.
    for(int i = 0;i < tamano;i++)//Se hace un for donde se determina un contador.
    {
    num += arreglo[i];//Se va acumulando la variable en el arreglo.
    }
    return promedio=num/tamano;//Devuelve la respuesta diviendo la cantidad de elementos x el tamaño del arreglo.
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
