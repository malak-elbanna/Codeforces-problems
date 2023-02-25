a = int(input())
for i in range(a):
    n = int(input())
    a1 = [int(i) for i in range(len(input().split()))]
    sum = 0
    flag = True
    for j in range(len(a1)):
        for k in range(j):
            sum += a1[k]
        if sum == a1[j]:
            flag = True
        else:
            flag = False

if flag:
    print("Ugly")
else:
    print("Good")