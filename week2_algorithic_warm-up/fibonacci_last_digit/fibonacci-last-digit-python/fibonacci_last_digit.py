import sys

def last_digit_naive(n):
    """
    Naive Algorithm that compute the last fibonacci number
    """
    if n <= 1:
        return n

    previous = 0
    current = 1

    for _ in range(n-1):
        previous, current = current, previous + current

    return current % 10
def last_digit_fast(n):
    """
    Efficient algorithm that compute the last Fibonacci
    """
    F = [int(i) for i in range(n+1)]
    F[0] = 0
    F[1] = 1
    for i in range(2, n+1):
        F[i] = (F[i-1] + F[i-2]) % 10

    return F[n]


n = int(input())
print(last_digit_fast(n))
