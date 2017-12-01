'''
Created on 30/11/2017

@author: Tato
'''

'''
Función la cual representa el funcionamiento de binarySearch, esta recibe como parametro
un vector y un una variable n la cual sera el dato a vuscar.
'''
def binarysearch (board,n):
    
    lowerbound = 0  
    upperbound = len(board)-1
    index = -1
    
    while(lowerbound < upperbound):
        middlepoint = (lowerbound + upperbound) / 2
        if (n == board[middlepoint]):
            index = middlepoint
            break
        else:
            if (n < board[middlepoint]):
                upperbound = middlepoint-1
            else:
                lowerbound = middlepoint+1
    
    if (lowerbound == upperbound and board[lowerbound] == n):
        index = lowerbound
        
    print ("el numero "+str(n)+" se encuentra en la posicion "+str(index))   
    return index
    
        
m = int(raw_input("Ingrese el tamano del arreglo:"))
board = [] * m
    
input1 = raw_input("Ingrese "+str(m)+" numeros ordenados").split(",")

for i in range(0,m):
    t = int(input1[i])
    board.append(t)
    
n = int(raw_input("Que numero de los ingresados anteriormente desea buscar?:"))
binarysearch(board, n)


     
