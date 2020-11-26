from sys import stdin

def gcd(a, b):
    while True:
        remainder = a % b
        if (remainder == 0):
            return b
        else:
            a, b = b, remainder


def gcd_fast(a, b):
    if (b == 0):
        return a

    a_prime = a % b;
    return gcd_fast(b, a_prime)

if __name__ == '__main__':
    input = stdin.readline()
    a, b = map(int, input.split())
    print("{}".format(gcd(a, b)))  
