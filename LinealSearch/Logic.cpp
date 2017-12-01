/*
 * Logic.cpp
 *
 *  Created on: 29/11/2017
 *      Author: Tato
 */

#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

/*
*Esta función representa el comportamiento de linealsearch, esta recibe como parametro un vector y un dato a buscar.
*Esta función retorna la variable index.
*/
int linealsearch (vector <int> A, int data)
{
	int index = -1; //Variable para almacenar el index en el que se encuentr al dato a buscar. 
	int length = A.size(); //Variable la cual almacena el tamaño del vector pasado como parametro.

	for(int i = 0; i < length; i++) //Ciclo que va desde 0 hasta el valor que tenga la variable length.
	{
		if(A[i] == data) //Condicional que recorre el vector en busca de un dato igual al dato pasado como parametro.
		{
			index = i; //Si la condición es true la variable index tomara el valor de la variable i.
			break; //Se rompe el primer ciclo ya que se encvontro el dato.
		}
	}
	
	cout << index << " "; //Se imprime el valor de la variable index. 
	return index;
}

int main (){

	vector <int> A;  //Vector para almacenar numeros desordenados.
	int data = 0; //Variable para guardar el numero que se desea buscar en el vector.
	int z = 0;
	int tam = 0; //Variable que guarda el tamaño de una cadena compuesta de numeros y comas,este va a ser pedido por consola.
	cout << "Cuantos numeros desea ingresar?:"; //Se pide el tamaño.
	cin >> tam; //El tamaño se guarda en la variable tam.
	char input[tam]; //Se crea una cadena de caracteres con un tamaño el cual esta guardado en la variable tam.
	char* ptr; 
	cout << "Ingrese " << tam << " numeros desordenados y separados por comas:"; // Se pide que se ingrese una cadena con datos separados por comas
	cin >> input;  //Se guarda en una variable.
	ptr = strtok(input, ","); //Se llama la función strtok para que divida la la cadena cada vez que se encuentre una coma. 
	cout << "Que numero de los ingresados anteriormente desea buscar?"; //Se pide el dato de el numero que se desea buscar en el vector
	cin >> data; //Se guarda en una variable.

	while(ptr != NULL) 
	{
		A[z++] = atoi(ptr); //Cada char se convierte en entero con la función atoi y se guarda en un vector.
		ptr = strtok(NULL, ",");
	}

	linealsearch(A, data); //Se llama a la función linealsearch pasandole como parametro el vector de numeros desorganizados y el dato que se desea buscar.
	return 0;

}



