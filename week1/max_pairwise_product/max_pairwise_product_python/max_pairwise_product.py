from sys import stdin, stdout

def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first+1, n):
            max_product = max(max_product, numbers[first] * numbers[second])

    return max_product

def max_pairwise_product_fast(numbers):
    n = len(numbers)
    index1 = 0
    for i in range(1, n):
        if numbers[i] > numbers[index1]:
            index1 = i
    if index1 == 0:
        index2 = 1
    else:
        index2 = 0
    for i in range(n):
        if numbers[i] != numbers[index1] and numbers[i]>numbers[index2]:
            index2 = i

    return numbers[index1]*numbers[index2]


def max_pairwise_product_much_faster(numbers):
    n = len(numbers)
    index = 0
    for i in range(1, n):
        if numbers[i] > numbers[index]:
            index = i
    # swap numbers[index] and numbers[n-1]
    numbers[index], numbers[n-1] = numbers[n-1], numbers[index]

    index = 0
    for i in range(1, n-1):
        if numbers[i] > numbers[index]:
            index = i
    # swap numbers[index] and numbers[n-2]
    numbers[index], numbers[n-2] = numbers[n-2], numbers[index]

    return numbers[n-2]*numbers[n-1]

    
# A other way of solving the max_pairwise problem
# Complexity O(nlgn)
def max_pairwise_product_fast_by_sorting(numbers):
    n = len(numbers)
    sorted(numbers)
    return numbers[n-2]*numbers[n-1]

if __name__ == '__main__':
    n = stdin.readline()
    numbers = [int(x) for x in stdin.readline().split()]
    print(max_pairwise_product_much_faster(numbers))
