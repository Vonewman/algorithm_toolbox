from sys import stdin

def get_fibonacci_last_digit_naive(n):
    """
    Naive Algorithm that compute the last fibonacci number
    """
    if n <= 1:
        return n

    previous = 0
    current = 1

    for _ in range(n-1):
        previous, current = current, (previous + current) % 10

    return current

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

if __name__ == '__main__':
    input = stdin.readline()
    n = int(input)
    print(get_fibonacci_last_digit_naive(n))
