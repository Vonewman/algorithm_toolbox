from sys import stdin, stdout

def count(a, left, right, element):
    count = 0
    for i in range(left, right):
        if a[i] == element:
            count = count + 1

    return count

def majorityElement(a, left, right):
    if left > right:
        return None
    if left == right:
        return a[left]

    mid = left + (right - left) / 2
    leftCount = majorityElement(a, left, mid)
    rightCount = majorityElement(a, mid + 1, right)

    if leftCount == -1 and rightCount != -1:
        num = count(a, left, right, rightCount)
        if num > (right - left + 1) / 2:
            return rightCount
        else:
            return None
    elif rightCount == -1 and rightCount != -1:
        num = count(a, left, right, leftCount)
        if (num > (right - left + 1) / 2):
            return leftCount
        else:
            return None

    elif leftCount != -1 and rightCount != -1:
        leftNum = count(a, left, right, leftCount)
        rightNUm = count(a, left, right, rightCount)
        if (leftNum > (right - left + 1) / 2):
            return leftCount
        elif rightNUm > (right - left + 1)/2:
            return rightCount
        else:
            return None

    else:
        return None

if __name__ == '__main__':
    n = stdin.readline()
    arr = [int(x) for x in stdin.readline().split()]
    print(majorityElement(arr, 0, len(arr) - 1))
    