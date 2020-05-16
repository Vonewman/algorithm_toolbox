"""An Implementation of the fibonacci number using an iterative algorithm
that use less space than the previous one on computing_fibonacci3.py
Time Complexity: O(N)
@AUTHOR: Abdoulaye Diallo (A.D.)"""


def fib(n):
    ''' (int) -> int
    Return the nth-fibonacci number
    >>> fib(5)
    5
    >>> fib(10)
    55
    '''
    if n <= 1:
        return n

    previous, current = 0, 1
    for _ in range(n - 1):
        new_current = previous + current
        previous, current = current, new_current

    return current


if __name__ == '__main__':
    n = int(input())
    print(fib(n))
    import doctest
    doctest.testmod()
