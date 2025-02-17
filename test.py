def find_even_index(arr):
    total_sum = 0
    for i in range(len(arr)):
        total_sum +=arr[i]
        if i==0:
            left_sum=0
        elif i>0:
            left_sum = sum(arr[:i])
        right_sum = total_sum - left_sum - arr[i]
        if left_sum == right_sum:
            return i
        elif left_sum != right_sum:
            return -1    
     