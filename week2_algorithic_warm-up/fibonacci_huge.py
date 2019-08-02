import sys

def pisano_period(m):
    """
    This function gives you the length of the pisano period
    of any number
    """
    a, b = 0, 1
    c = a + b

    for i in range(0, m*m):
        c = (a + b) % m
        a = b
        b = c
        if ((a == 0) and (b == 1)):
            return i + 1

    return c

def fibonacci_huge(n, m):
    """
    This function compute the F(n) modulo m
    """
    remainder = n % pisano_period(m)
    first = 0
    second = 1

    res = remainder

    for i in range(1, remainder):
        res = (first + second) % m
        first = second
        second = res

    return res % m



n = int(input())
m = int(input())
print(fibonacci_huge(n, m))
