'''
Created on 30/11/2017

@author: Tato
'''

'''
Función la cual representa el funcionamiento de binarySearch, esta recibe como parametro
un vector y un una variable n la cual sera el dato a buscar.
'''
def binarysearch (board,n): 
     
    lowerbound = 0    """ Variable la cual almacena la primera posición del vector"""  
    upperbound = len(board)-1  """Variable la cual almacena la ultima posición del vector""" 
    index = -1  """Variable la cual almacena el primer index del vector"""    
    
    while(lowerbound < upperbound): """Ciclo el cual controla que la variable lowerbound no sea mayor a la variable upperbound"""
        middlepoint = (lowerbound + upperbound) / 2 """Variable la cual almacena la posición de la mitad del vector"""
        if (n == board[middlepoint]): """ Condicional que se vuelve true si la variable n pasada como parametro es igual a el dato de el vector en su posición middlepoint"""
            index = middlepoint """ A la variable index se le pasa el valor de la variable middlepoint"""
            break """ Se rompe el while si la condición es true"""
        else:
            if (n < board[middlepoint]): """ Condicional que se vuelve true si la variable n es menor a el dato que este en el vector en su posición middlepoint""" 
                upperbound = middlepoint-1 """ Si la condición es true se le asigna a la variable upperbound el valor de la variable middlepoint menos uno"""
            else:
                lowerbound = middlepoint+1 """Si lo condición es false se le asigna a la variable lowerbound el valor de la variable middlepoint mas uno"""
    
    if (lowerbound == upperbound and board[lowerbound] == n): """Condicional que se vuelve true si el valor de la variable lowerbound es igual a el valor variable upperbound y el valor del vector en la posición lowebound es igual a la variable n pasada como parametro""" 
        index = lowerbound
        
    print ("el numero "+str(n)+" se encuentra en la posicion "+str(index))   """Imprime el valor de la variable index"""
    return index
    
        
m = int(raw_input("Ingrese el tamano del arreglo:")) """Pide el tamaño de el vector """
board = [] * m """Crea el vector con el tamaño ingresado por consola"""
    
input1 = raw_input("Ingrese "+str(m)+" numeros ordenados").split(",") """Pide que se ingrese una cadena de datos separados por comas y se guarda en la variable input1"""

for i in range(0,m):    """Ciclo el cual va desde 0 hasta el dato que tenga la variable m"""
    t = int(input1[i])  """Comvierte la cadena en entero"""
    board.append(t) """ Llena el vector con los datos de el string comvertidos a enteros"""
    
n = int(raw_input("Que numero de los ingresados anteriormente desea buscar?:")) """Pide que se ingrese un numero para buscar de los ingresados en la variable input y se mete en una variable n"""
binarysearch(board, n) """Se llama la función binarysearch y se le pasa como parametro el vector y la variable n""" 


     
