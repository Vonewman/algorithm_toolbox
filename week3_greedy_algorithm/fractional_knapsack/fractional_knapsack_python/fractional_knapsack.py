def knapsack(capacity, weights, values):
    n = len(weights)
    A = [0 for i in range(n)]
    value = 0
    cost = [(values[i]/weights[i]) for i in range(n)]
    w_cost = sorted(cost)
    for i in range(n):
        if capacity == 0:
            return value
        a = min(weights[i], capacity)
        
