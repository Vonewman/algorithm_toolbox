# Optimized Python 3 Program to find last
# Digit of fibonacci number.
# Time Complexity O(1)

# Finds nth fibonacci number
def fib(f, n):
    # 0th and list number of
    # the series are 0 and 1

    for i in range(2, n+1):
        f[i] = (f[i-1] + f[i-2]) % 10

    return f


def findLastDigit(n):
    f = [0] * 61

    f = fib(f, 60)

    return f[n % 60]


    
