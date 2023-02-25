n_levels = int(input())
level_x = [int(i) for i in input().split()]
level_y = [int(i) for i in input().split()]
level_x.extend(level_y)
a = [i for i in range(1, n_levels+1)]

if a == [i for i in set(level_x)]:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")