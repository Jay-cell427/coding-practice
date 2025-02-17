def delete_nth(order,max_e):
    num1=[]
    count={}
    for num in order:
        if num  not in count:
            count[num]=0
        if count[num]<max_e:
            num1.append(num)
            count[num] += 1  # Increment the count

    return num1