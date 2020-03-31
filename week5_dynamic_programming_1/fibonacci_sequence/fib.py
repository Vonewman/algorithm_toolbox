from sys import stdin

def F(n):
    """Efficient Algorithm that compute the Fibonacci Sequence
    T(n) = 2n + 2
    """
    memo = [int(i) for i in range(n+1)]
    memo[0], memo[1] = 0, 1
    for i in range(2, n+1):
        memo[i] = memo[i-1] + memo[i-2]
    return memo[n]

#if __name__ == "__main__":
#    n = int(stdin.readline())
#    print(F(n))


n = int(input())
print(F(n))
