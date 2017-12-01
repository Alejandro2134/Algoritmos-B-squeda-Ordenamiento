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


void insertionsort (vector <int> A)
{
	int x = 0;
	int index = 0;
	int length = A.size();

	for(int i = 0; i < length; i++)
	{
		x = A[i];
		index = i;

		while(index > 0 && A[index - 1] > x)
		{
			A[index] = A[index -1];
			index = index -1;
		}

		A[index] = x;
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

	insertionsort(A);
	return 0;

}

