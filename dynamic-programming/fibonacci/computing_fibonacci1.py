"""A naive Implementation of the fibonacci algorithm using 
   Brute force.
@author: Abdoulaye Diallo.
"""


def fib(n):
    """
    Running Time O(Fn)
    """
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)


if __name__ == '__main__':
    n = int(input())
    print(fib(n))
    import doctest
    doctest.testmod()
