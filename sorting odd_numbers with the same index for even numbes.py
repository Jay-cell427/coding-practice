def sort_array(source_array):
    oddNumbers=[]
    for num in source_array:
        if num%2!=0:
            oddNumbers.append(num)
            oddNumbers.sort()
    return sorted(oddNumbers)        
    
    for i in range(len(oddNumber)+1):
        source_array.insert(i, num)
    return source_array

sort_array(list(range(1,7)))