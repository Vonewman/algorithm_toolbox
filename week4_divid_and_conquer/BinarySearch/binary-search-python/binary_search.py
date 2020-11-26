from sys import stdin, stdout

def binary_search_rec(A, left, right, key):
    # test for empty list
    if left > right:
        return -1

    # compare with middle element
    mid = (right + left) // 2

    if key == A[mid]:
        return mid
    elif key < A[mid]:
        # recursively search the lower half
        return binary_search_rec(A, left, mid-1, key)
    else:
        # recursively search the upper half
        return binary_search_rec(A, left, mid+1, key)

def binary_search(A, key):
    # Call recursive helper function
    return binary_search_rec(A, 0, len(A)-1, key)


if __name__ == '__main__':
    input = stdin.readline()
    data = list(map(int, input.split()))
    n = data[0]
    m = data[n + 1]
    a = data[1 : n+1]
    
    for x in data[n + 2:]:
        print(binary_search(a, x), end=" ")
    print()
