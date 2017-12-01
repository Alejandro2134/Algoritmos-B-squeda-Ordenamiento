/*
 * Logic.cpp
 *
 *  Created on: 27/11/2017
 *      Author: Tato
 */
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

void bubblesort(vector <int> A)
{
	bool swapped;
	int swap;
	int length = A.size();

	for(int i = 0; i < length; i++)
	{
		swapped = false;

		for(int j = 0; j < length; j++)
		{
			if(A[j] > A[j+1])
			{
				swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				swapped = true;
			}

			if(!swapped)
			{
				break;
			}
		}

	}

	for(int i = 0; i < length; i++)
	{
		cout << A[i] << " ";
	}
}

int main (){

	vector <int> A;
	int z = 0;
	int tam = 0;
	cout << "Cuantos numeros desea organizar?:";
	cin >> tam;
	char input[tam];
	char* ptr;
	cout << "Ingrese " << tam << " numeros desordenados y separados por comas:";
	cin >> input;
	ptr = strtok(input, ",");

	while(ptr != NULL)
	{
		A[z++] = atoi(ptr);
		ptr = strtok(NULL, ",");
	}

	bubblesort(A);
	return 0;

}




