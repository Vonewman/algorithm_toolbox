def find_max(a):
    b = []
    while len(a) != 0:
        b.append(max(a))
        a.remove(max(a))

    string = ''.join(str(e) for e in b)
    return string


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

if __name__ == "__main__":
    arr = [3, 9, 5, 9, 7, 1]
    print("Given array is", end="\n")
    printList(arr)

    print("The largest number will be: ")
    print("{}".format(find_max(arr)))
