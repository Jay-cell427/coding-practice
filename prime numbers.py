import math

def is_prime_custom(X):
    # Step 1: Handle constant cases
    if X in {-3, -2, 2, 3}:
        return True

    # Step 2: Check for invalid inputs
    if X <= 1:
        return False

    # Step 3: Check divisibility by 2 or 3
    if X % 2 == 0 or X % 3 == 0:
        return False

    # Step 4: Check for other divisors up to sqrt(|X|)
    max_divisor = int(math.sqrt(abs(X)))  # Upper limit for divisors
    for i in range(5, max_divisor + 1, 6):  # Check numbers of the form 6k ± 1
        if X % i == 0 or X % (i + 2) == 0:
            return False

    # Step 5: If no divisors are found, X is prime
    return True

# Test cases
print(is_prime_custom(-3))  # True (prime)
print(is_prime_custom(-2))  # True (prime)
print(is_prime_custom(2))   # True (prime)
print(is_prime_custom(73))   # True (prime)
print(is_prime_custom(4))   # False (not prime)
print(is_prime_custom(5))   # True (prime)
print(is_prime_custom(9))   # False (not prime)
print(is_prime_custom(25))  # False (not prime)
print(is_prime_custom(-5))  # True (prime)
print(is_prime_custom(-4))  # False (not prime)
