def calc_fib(n):
    """
    Naiv algorithm that compute the fibonacci Number
    T(n) = T(n-1) + T(n-2) + 3
    """
    if (n <= 1):
        return n

    return calc_fib(n - 1) + calc_fib(n - 2)

def calc_fib_fast(n):
    """
    Efficient Algorithm that compute the fibonacci Number
    T(n) = 2n + 2
    """
    F = [int(i) for i in range(n+1)]
    F[0] = 0
    F[1] = 1
    for i in range(2, n+1):
        F[i] = F[i - 1] + F[i - 2]
    return F[n]

def calc_fib_faster(n):
    if n <= 1:
        return n

    previous = 0
    current = 1

    for _ in range(n - 1):
        previous, current = current, previous + current

    return current

if __name__ == '__main__':
    n = int(input())
    print(calc_fib_faster(n))
