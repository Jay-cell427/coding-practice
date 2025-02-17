import math

def is_prime(num):
    if num in {-3, -2, 2, 3}:
        return True

    if num<= 1:
        return False

    if num % 2 == 0 or num % 3 == 0:
        return False

    max_divisor = int(math.sqrt(abs(num))) 
    for i in range(5, max_divisor+1, 6):  
        if num % i == 0 or num % (i + 2) == 0:
            return False

    return True