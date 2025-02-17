def product_fib(_prod):
    
    def f(n):
        if n==0:
            return 0
        elif n==1:
            return 1
        else:
            a, b = 0, 1
            for _ in range(n - 1):
                a, b = b, a + b
            return b  
    n=0 
    while True:
        if f(n) * f(n+1) == _prod:
            return [f(n), f(n+1), True]
        elif f(n) * f(n+1) > _prod:
            return [f(n), f(n+1), False]
        # Increment n to check the next pair
        n += 1