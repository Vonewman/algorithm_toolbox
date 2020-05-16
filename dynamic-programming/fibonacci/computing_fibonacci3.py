"""Computation of the fibonacci Number using and iterative algorithm
Time Complexity: O(N) 
@AUTHOR: Abdoulaye Diallo (A.D.)"""


def fib(n):
    ''' (int) -> int
    Return the F[n] fibonacci number which is an
    
    >>> fib(5)
    5
    >>> fib(10)
    55
    '''
    
    T = [None] * (n + 1)
    T[0], T[1] = 0, 1

    for i in range(2, n+1):
        T[i] = T[i - 1] + T[i - 2]

    
    return T[n]


if __name__ == '__main__':
    import doctest
    doctest.testmod()
