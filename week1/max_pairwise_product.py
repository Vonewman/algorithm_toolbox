def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first+1, n):
            max_product = max(max_product, numbers[first] * numbers[second])

    return max_product

def max_pairwise_product_fast(numbers):
    n = len(numbers)
    index1 = 1
    for i in range(2, n+1):
        if numbers[i] > numbers[index1]:
            index1 = i

    if index1 == 1:
        index2 = 2
    else:
        index2 = 1

    for i in range(1, n+1):
        if numbers[i] != numbers[index1] and numbers[i] > numbers[index2]:
            index2 = i

    return numbers[index1]*numbers[index2]


n = int(input())
numbers = [

if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product_fast(input_numbers))
