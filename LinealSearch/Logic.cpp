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

int linealsearch (vector <int> A, int data)
{
	int index = -1;
	int length = A.size();

	for(int i = 0; i < length; i++)
	{
		if(A[i] == data)
		{
			index = i;
			break;
		}
	}

	return index;
}

int main (){

	vector <int> A;
	int data = 0;
	int z = 0;
	int tam = 0;
	cout << "Cuantos numeros desea ingresar?:";
	cin >> tam;
	char input[tam];
	char* ptr;
	cout << "Ingrese " << tam << " numeros desordenados y separados por comas:";
	cin >> input;
	ptr = strtok(input, ",");
	cout << "Que numero de los ingresados anteriormente desea buscar?";
	cin >> data;

	while(ptr != NULL)
	{
		A[z++] = atoi(ptr);
		ptr = strtok(NULL, ",");
	}

	linealsearch(A, data);
	return 0;

}



