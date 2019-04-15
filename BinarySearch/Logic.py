def binarySearch (arr, search):

    lower = 0
    higher = len(arr)-1
    middle = (len(arr)-1) / 2

    if(search == arr[middle]):
        return arr[middle]
    else:
        if (search > arr[middle]):
            return binarySearch(arr[(middle+1):(higher+1)], search)
        else:
            return binarySearch(arr[lower:higher], search)

arr = [6, 7, 8, 43, 78, 90, 100, 122, 234, 600, 602, 809, 900, 901, 930]
print (binarySearch(arr, 809))
