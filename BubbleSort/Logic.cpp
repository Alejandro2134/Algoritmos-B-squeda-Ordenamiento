/*
 * Logic.cpp
 *
 *  Created on: 27/11/2017
 *      Author: Tato
 */
#include <vector>  //Libreria para manejar vectores.
#include <stdlib.h> //Libreria para manejar entradas y salidas.
#include <iostream> //Libreria para manejar entradas y salidas.
#include <string.h> //Libreria para manejar strings.
using namespace std; //Declaración de namespace para hacer uso de palabras reservadas.
/*
*Esta función representa el comportamiento de bubblesort, esta recibe
*como parametro un vector con numeros desordenados.
*/
void bubblesort(vector <int> A)
{
	bool swapped;	//Variable de tipo booleano la cual cambia dependiendo unas condiciones.
	int swap; 	//Variable la cual almacenara un número para ser cambiado de posición.
	int length = A.size(); //Variable la cual almacena el tamaño del vector pasado como parametro.

	for(int i = 0; i < length; i++) //Ciclo que va desde 0 hasta el valor que tenga la variable length.	
	{
		swapped = false; //Se inicializa la variable swapped en false.	

		for(int j = 0; j < length; j++) //Ciclo que desde 0 hasta el valor que tenga la variable length.
		{
			if(A[j] > A[j+1]) //Condicional para conocer si la posición adyacente es mayor.
			{
				swap = A[j]; //Si la condición es true se almacenara la posición adyacente en la variable swap. 
				A[j] = A[j+1]; //El valor de la posición adyacente cambia por el valor de la posición de su derecha.
				A[j+1] = swap; //El valor de la derecha se cambia por el valor guardado en la variable swap y de esta forma se intercambian las posiciones.
				swapped = true; //La variable swapped cambia su valor por true.
			}

			if(!swapped) //Condicional para controlar que el array ya este ordenado
			{
				break;  //Si la condición es true se rompe primer ciclo. 
			}
		}

	}

	for(int i = 0; i < length; i++) //Ciclo que va desde 0 hasta el valor que tenga la variable length.
	{
		cout << A[i] << " "; //Se hace la impresión de el array ya ordenado.
	}
}

/*
*Función main el cual crea el vector y lo pasa como parametro a la función bubblesort.
*/
int main (){

	vector <int> A; //Vector para almacenar numeros desordenados.
	int z = 0; 	
	int tam = 0; 	//Variable que guarda el tamaño de una cadena compuesta de numeros y comas,este va a ser pedido por consola.
	cout << "Cuantos numeros desea organizar?:"; //Se pide el tamaño.
	cin >> tam; //El tamaño se guarda en la variable tam.
	char input[tam]; //Se crea una cadena de caracteres con un tamaño el cual esta guardado en la variable tam.
	char* ptr; 
	cout << "Ingrese " << tam << " numeros desordenados y separados por comas:"; // Se pide que se ingrese una cadena con datos separados por comas
	cin >> input; //Se guarda en una variable.
	ptr = strtok(input, ","); //Se llama la función strtok para que divida la la cadena cada vez que se encuentre una coma. 

	while(ptr != NULL)
	{
		A[z++] = atoi(ptr); //Cada char se comvierte en entero con la función atoi y se guarda en un vector.
		ptr = strtok(NULL, ","); 
	}

	bubblesort(A); //Se llama la función bubblesort pasandole como parametro el vector de numeros desorganizados.
	return 0;

}




