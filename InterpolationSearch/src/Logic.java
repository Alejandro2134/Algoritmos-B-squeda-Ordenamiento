import java.util.Scanner;

public class Logic {

	public static void main(String[] args) {
	
		Scanner entrada = new Scanner (System.in);
		int m = 0, x = 0;
		String input = null;
		System.out.println("Ingrese el tamaño del arreglo:");
		m = entrada.nextInt();
		int A [] = new int[m];
			
		System.out.println("Ingrese una sucesión de "+ m +" numeros separados por comas:");
		input = entrada.next();
			
		String[] arrayInput = input.split(",");
				
		for (int i = 0; i < m; i++)
			A[i] = Integer.parseInt(arrayInput[i]);
		
		System.out.println("Ingrese el dato que desea buscar de los numeros ingresados anteriormente:");
		x = entrada.nextInt();
					
		interpolationsearch(A,x);
	
		}	

	public static int interpolationsearch (int A[], int x)
	{
		int lowerbound = 0;
		int upperbound = A.length-1;
		int index = -1;
		int middlepoint = 0;
		
		while(lowerbound < upperbound)
		{
			middlepoint = lowerbound + ((upperbound - lowerbound) / (A[upperbound] - A[lowerbound])) * (x - A[lowerbound]);
			
			if(x == A[middlepoint])
			{
				index = middlepoint;
				break;
			}
			else
			{
				if(x < A[middlepoint])
					upperbound = middlepoint-1; 
				else
					lowerbound = middlepoint+1; 
			}
		}
		
		if(lowerbound == upperbound && A[lowerbound] == x)
			index = lowerbound;
		
		System.out.println("la posición del numero "+x+" es: "+index);
		return index;
	}

}
