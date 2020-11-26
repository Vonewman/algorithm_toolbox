import sys

def get_change(m):
    """
    The goal in this problem is to find the minimum
    number of coins needed to change the input
    (an integer) into with denominations 1, 5 and 10

    -- Input Format: a single integer m.
    -- Output Format: the minimum number of coins
                      with denominations 1, 5, 10
                      that changes m.
    """
    # write your code here

    change = (m//10) + ((m%10)//5) + (m%5)
    
    return change

if __name__ == '__main__':
    m = int(sys.stdin.readline())
    print(get_change(m))
