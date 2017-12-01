'''
Created on 1/12/2017

@author: Tato
'''
def quicksort (board):
    if (len(board) == 1):
        return board
    else:
        less_subarray = []
        greater_subarray = []
        pivot = board[0]
        for i in range(0,len(board)):
            if (board[i] < pivot):
                less_subarray.append(i)
            else:
                greater_subarray.append(i)
        return quicksort(less_subarray) + pivot + quicksort(greater_subarray)
                
    pass

m = int(raw_input("Ingrese el tamano del arreglo:"))
board = [] * m
    
input1 = raw_input("Ingrese "+str(m)+" numeros ordenados").split(",")

for i in range(0,m):
    t = int(input1[i])
    board.append(t)
    
quicksort(board)