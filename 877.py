import sys

t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())
    mn = float('inf')
    mx = float('-inf')
    b = True

    while n > 0:
        k = int(sys.stdin.readline())
        if k < 0:
            b = False
            mn = min(mn, k)
        else:
            mx = max(mx, k)

        n -= 1

    if not b:
        print(mn)
    else:
        print(mx)
