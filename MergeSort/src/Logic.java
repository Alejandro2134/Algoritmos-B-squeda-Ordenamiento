import java.util.Scanner;

public class Logic {
	
	public static void main(String[] args) {
		
		Scanner entrada = new Scanner (System.in);
		int m = 0;
		String input = null;
		System.out.println("Ingrese el tamaño del arreglo:");
		m = entrada.nextInt();
		int A [] = new int[m];
		
		System.out.println("Ingrese "+ m +" numeros desordenados y separados por comas:");
		input = entrada.next();
		
		String[] arrayInput = input.split(",");
			
		for (int i = 0; i < m; i++)
			A[i] = Integer.parseInt(arrayInput[i]);
				
		mergesort(A);
	}
	
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

	