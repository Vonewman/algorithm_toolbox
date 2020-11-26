from sys import stdin

def f(n):
    F = [int(i) for i in range(n+1)]
    F[0] = 0
    F[1] = 1
    for i in range(2, n+1):
        F[i] = F[i-1] + F[i-2]
    return F[n]

def fibonacci_partial_sum(m, n):
    if m <= 0:
        return 0
    fib = [int(i) for i in range(n+1)]

    fib[0] = 0
    fib[1] = 1

    sum = fib[0] + fib[1]
    
    for i in range(m, n+1):
        fib[i] = fib[i-1] + fib[i-2]
        sum += fib[i]

    if (m == n):
        return f(n)
    return sum % 10


if __name__ == '__main__':
    input = stdin.readline()
    m, n = map(int, input.split())
    print(fibonacci_partial_sum(m, n))
