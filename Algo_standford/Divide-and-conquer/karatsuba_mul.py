def karatsuba(x, y):
    """
    The Karatsuba Integer Multiplication ALgorithm.
    """

    # base case
    if len(str(x)) == 1 or len(str(y)) == 1:
        return x * y
    else:
        n = max(len(str(x)), len(str(y)))
        n_half = n//2
        
        a, b = divmod(x, 10 ** n_half)
        c, d = divmod(y, 10 ** n_half)
        
        p = a + b
        q = c + d

        # Recursively compute ac, bd and pq
        ac = karatsuba(a, c)
        bd = karatsuba(b, d)
        pq = karatsuba(p, q)

        # compute abcd = pq - ac - bd
        abcd = pq - ac - bd

        product = 10 ** (2 * n_half) * (ac) + 10 ** (n_half) * (abcd) + bd

        return product



def main():
    print(karatsuba(15463, 23489))

if __name__ == "__main__":
    main()

