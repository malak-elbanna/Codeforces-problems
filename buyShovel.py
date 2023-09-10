polycarp = list(map(int, input().split()))
k = polycarp[0]
r = polycarp[1]
counter = 1

while ((k * counter - r) % 10 != 0 and (k * counter) % 10 != 0):
    counter += 1

print(counter)