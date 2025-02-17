def move_zeros(lst):
    pos = 0
    
    # Move all non-zero elements to the front
    for i in range(len(lst)):
        if lst[i] != 0:
            lst[pos] = lst[i]
            pos += 1
    while pos < len(lst):
        lst[pos] = 0
        pos += 1
    return lst