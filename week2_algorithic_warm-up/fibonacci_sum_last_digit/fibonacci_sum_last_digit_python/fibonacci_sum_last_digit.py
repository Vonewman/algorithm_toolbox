from sys import stdin

def fibonacci_sum_last_digit(n):
    if n <= 0:
        return 0

    fib = [int(i) for i in range(n+1)]

    fib[0] = 0
    fib[1] = 1

    sum = fib[0] + fib[1]

    for i in range(2, n+1):
        fib[i] = fib[i-1] + fib[i-2]
        sum += fib[i]

    return sum % 10


n = int(input())
print(fibonacci_sum_last_digit(n))
