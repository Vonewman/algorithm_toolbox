from sys import stdin, stdout

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


if __name__ == '__main__':
    n = stdin.readline()
    a = [int(x) for x in stdin.readline().split()]

    m = stdin.readline()
    b = [int(y) for y in stdin.readline().split()]

    for i in range(m):
        print(binary_search(a, b[i]), end=" ")
    
