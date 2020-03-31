def change(m):
    coins = [1, 5, 10]
    ans = []
    n = len(coins)
    for i in range(n):
        while m >= coins[i]:
            m = m-coins[i]
            ans.append(coins[i])
    string = ''.join(str(e) for e in ans)

    return string

m = int(input())
print("{}".format(change(m)))
