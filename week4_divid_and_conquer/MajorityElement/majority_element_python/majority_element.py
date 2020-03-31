def majGuess(A, n, part = True):
    """ returns the majority element of A if one exists
    could return anything if no majority element exists
    parameter ''part'' is a boolean which is true
    if A[n] has less ''weight'' than the other elements."""

    if n == 0:
        return None     # there is no majority element
    if n == 1:
        return A[0]     # it is the majority element

    i = 0       # place in A[]
    j = 0       # first empty position in new array

    while i<(n-2):
        if A[i] == A[i+1]:
            B[j] = A[i]   # find matching pairs, through out unmatched pairs
            j = j+1
            i = i+2

    if i == n-1:
        B[j] = A[n-1]
        part = True
    else:
        if part:
            B[j] = A[n-2]
        elif A[n-2] == A[n-1]:
            B[j] = A[n-2]
        else:
            j = j-1

    return majGuess(B, j, part)


# Test
Arr = [2, 3, 9, 2, 2]
n = len(Arr)
print("{}".format(majGuess(Arr, n, False)))
