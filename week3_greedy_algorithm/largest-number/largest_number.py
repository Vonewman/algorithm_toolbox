def find_max(a):
    b = []
    while len(a) != 0:
        b.append(max(a))
        a.remove(max(a))

    return b

def convert(list):
    
    s = [str(i) for i in list]

    res = int("".join(s))

    return (res)


list = [5, 9, 3, 7, 1, 9]
print(convert())
