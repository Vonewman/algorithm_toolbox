def lcm_naive(a, b):
    for l in range(1, a*b+1):
        if l % a == 0 and l % b == 0:
            return l

    return a*b

def gcd(a, b):
    if (b == 0):
        return a

    a_prime = a%b
    return gcd(b, a_prime)

def lcm(a, b):
    return (a*b)/gcd(a,b)

a = int(input())
b = int(input())

print(lcm(a, b))
