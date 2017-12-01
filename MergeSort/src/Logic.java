import java.util.Scanner;

public class Logic {
	
	/*
	* Función main la cual tiene como finalidad recibir el tamaño del arreglo, una cadena de números separados por comas
	* partir la cadena y estos datos comvertirlos a enteros los cuales se ingresaran en un arreglo de enteros y este se
	* pasara como parametro en la función mergesort
	*//
	public static void main(String[] args) {
		
		Scanner entrada = new Scanner (System.in); //Scanner para manejar entradas y salidas pasados por consola
		int m = 0; //Variable la cual almacenara el tamaño de el arreglo		
		String input = null; //Variable para almacenar la cadena de datos separados por comas
		System.out.println("Ingrese el tamaño del arreglo:"); //Pide el tamaño de el arreglo
		m = entrada.nextInt(); //El dato ingresado por consola se guarda en la variable m
		int A [] = new int[m]; //Se crea y se inicializa un arreglo de tamaño m
		
		System.out.println("Ingrese "+ m +" numeros desordenados y separados por comas:"); //Pide que se ingrese una cadena de datos separados por comas
		input = entrada.next(); //Se guarda la cadena en la variable input
		
		String[] arrayInput = input.split(","); //Se parte la cadena cada vez que se encuentre una coma
			
		for (int i = 0; i < m; i++) //Ciclo que va desde 0 hasta el valor que tenga la variable m
			A[i] = Integer.parseInt(arrayInput[i]); //Cada posición de la cadena se comvierte en entero y este es metido en el arreglo
				
		mergesort(A); //Se llama a la función mergesort pasandole como parametro el arreglo
	}
	
	
	
	/*
	* Función la cual representa el funcionamiento de mergesort, de forma recursiva
	* y teniendo como parametro un arreglo de numeros desordenados 
	* 
	*//
	public static int[] mergesort(int A[])
	{
		int n = A.length / 2;
		int [] ArrayizqP = new int [n];
		int [] ArrayderP = new int [A.length-n];	
		
		if(A.length == 1)
			return A;
		else
		{
			for(int i = 0; i < n; i++)
				ArrayizqP[i] = A[i];
				
			for(int i = 0 ; i < ArrayderP.length; i++)
				ArrayderP[i] = A[n + i];
							
			ArrayizqP = mergesort(ArrayizqP);
			ArrayderP = mergesort(ArrayderP);						
		}								
		
		return merge(ArrayizqP, ArrayderP);						
	}
	
	/*
	
	
	
	*//
	public static int[] merge (int A[], int B[])
	{
		int l = A.length + B.length;
		int [] C = new int [l];
		int indexA = 0, indexB = 0, indexC = 0;
		
		while (indexA < A.length && indexB < B.length)
		{
			if (A[indexA] < B[indexB])
			{
				C[indexC] = A[indexA];
				indexA += 1;
				indexC += 1;
			}
			else
			{
				C[indexC] = B[indexB];
				indexB += 1;
				indexC += 1;
			}
		}
		
		while(indexA < A.length)
		{
			C[indexC] = A[indexA];
			indexA += 1;
			indexC += 1;
		}
		
		while(indexB < B.length)
		{
			C[indexC] = B[indexB];
			indexB += 1;
			indexC += 1;
		}
		
		for (int i = 0; i < C.length; i++)
			System.out.print(C[i]+" ");
	
		return C;
	}
}

	
