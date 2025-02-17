def product_fib(_prod):
    def f(n):
        if n==0:
            return 0
        elif n==1:
            return 1
        else:
            return f(n-1) + f(n-2)
    n=0
    while True:
        if f(n) * f(n+1) == _prod:
           return [f(n), f(n+1), True]
        elif f(n) * f(n+1) > _prod:
            return [f(n), f(n+1), False]
        n += 1       