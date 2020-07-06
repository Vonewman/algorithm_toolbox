from sys import stdin

def pisano_period(m):
    """
    This function gives you the length of the pisano period
    of any number
    """
    a, b = 0, 1
    c = a + b

    for i in range(0, m*m):
        c = (a + b) % m
        a = b
        b = c
        if ((a == 0) and (b == 1)):
            return i + 1

    return c

def fibonacci_huge(n, m):
    """
    This function compute the F(n) modulo m
    """
    remainder = n % pisano_period(m)
    first = 0
    second = 1

    res = remainder

    for i in range(1, remainder):
        res = (first + second) % m
        first = second
        second = res

    return res % m


def get_fibonacci_huge(n, m):
    if n <= 1:
        return n

    last1, last2, length_count, f = 0, 1, 0, [0, 1]
    for _ in range(2, (m * m) + 1):
        last3 = (last1 + last2) % m
        f.append(last3)
        last1, last2 = last2, last3
        length_count += 1
        if (last3 == 1) and (last1 == 0): break
    
    f_remainder = n % length_count
    return f[f_remainder]


if __name__ == '__main__':
    input = stdin.readline()
    n, m = map(int, input.split())
    print(get_fibonacci_huge(n, m))
