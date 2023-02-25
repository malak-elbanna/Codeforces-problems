a, b = [int(x) for x in input().split()]
counter = 0
for i in range(0, 10):
    if a <= b:
        a = a*3
        b = b*2
        counter += 1
        if a > b:
            print(counter)
            break
        else:
            continue

