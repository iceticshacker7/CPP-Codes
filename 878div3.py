num_tests = int(input())

while num_tests > 0:
    n, k, q = map(int, input().split())
    
    sequence = []
    count = 0
    
    for i in range(n):
        element = int(input())
        if element <= q:
            count += 1
            if i == n - 1:
                sequence.append(count)
        else:
            sequence.append(count)
            count = 0
    
    total_ways = 0
    
    for cons in sequence:
        for j in range(1, cons + 1):
            plus = j + k - 1
            if plus <= cons:
                ways = cons - plus + 1
                total_ways += ways
    
    print(total_ways)
    num_tests -= 1
