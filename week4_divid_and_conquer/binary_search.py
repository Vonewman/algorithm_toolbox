import sys

def binary_search(a, x):
    """
    renvoie si elle existe, la position d'une occurence de x dans a
    supposé trié, et None sinon
    """
    g, d = 0, len(a)-1
    while g <= d:
        mid = (g + d) // 2
        if a[mid] == x:
            return mid
        if a[mid] < x:
            g = mid+1
        else:
            d = mid-1
    return None

a = [1, 5, 8, 12, 13]
x = int(input())
print(binary_search(a, x))
