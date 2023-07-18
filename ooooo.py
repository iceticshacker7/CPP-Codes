for _ in range(int(input())):
    b, c, d = map(int, input().split())
    print(c * d if c * d - (((d + 1) // 2) - 1) * b < 0 else c * d - ((((c * d - (((d + 1) // 2) - 1) * b + d - 1) // d) * d)))
