/*
 * Logic.cpp
 *
 *  Created on: 29/11/2017
 *      Author: Tato
 */

#include <vector>     //Libreria para manejar vectores.
#include <stdlib.h>   //Libreria para manejar entradas y salidas.
#include <iostream>   //Libreria para manejar entradas y salidas.
#include <string.h>   //Libreria para manejar strings.
using namespace std;  //Declaración de namespace para hacer uso de palabras reservadas.

/*
*Esta función representa el comportamiento de insertionsort, esta recibe
*como parametro un vector con numeros desordenados.
*/
void insertionsort (vector <int> A)
{
	int x = 0;   //Variable para almacenar el valor a ser insertado.
	int index = 0; //Variable para almacenar una posición.
	int length = A.size(); //Variable que almacena el tamaño de el vector.

	for(int i = 0; i < length; i++) //Ciclo que va desde 0 hasta el tamaño del arreglo.
	{
		x = A[i];	
		index = i;

		while(index > 0 && A[index - 1] > x)//Ciclo el cual termina cuando la variable index sea igual a 0 y cuando el vector en la posición index-1 sea igual a la variable x.  
		{
			A[index] = A[index -1]; //Se intercambian las posiciones.
			index = index -1; //Se le resta un numero a la variable index.
		}

		A[index] = x; //El vector en la posición index se cambia por el valor en la variable x.
	}
	
	for(int i = 0; i < length; i++) //Ciclo que va desde 0 hasta el valor que tenga la variable length.
	{
		cout << A[i] << " "; //Se hace la impresión de el array ya ordenado.
	}
}

int main (){

	vector <int> A; //Vector para almacenar numeros desordenados.
	int z = 0; 	
	int tam = 0; 	//Variable que guarda el tamaño de una cadena compuesta de numeros y comas,este va a ser pedido por consola.
	cout << "Cuantos numeros desea organizar?:"; //Se pide el tamaño.
	cin >> tam; //El tamaño se guarda en la variable tam.
	char input[tam]; //Se crea una cadena de caracteres con un tamaño el cual esta guardado en la variable tam.
	char* ptr; 
	cout << "Ingrese " << tam << " numeros desordenados y separados por comas:"; // Se pide que se ingrese un char con datos separados por comas
	cin >> input; //Se guarda en una variable.
	ptr = strtok(input, ","); //Se llama la función strtok para que divida la la cadena cada vez que se encuentre una coma. 

	while(ptr != NULL)
	{
		A[z++] = atoi(ptr); //Cada char se comvierte en entero con la función atoi y se guarda en un vector.
		ptr = strtok(NULL, ","); 
	}

	insertionsort(A); //Se llama la función bubblesort pasandole como parametro el vector de numeros desorganizados.
	return 0;
}

