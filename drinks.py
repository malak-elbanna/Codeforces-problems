n = int(input())
drinks = [int(i) for i in input().split()]
avg = sum(drinks) / len(drinks)
print('%0.12f'% avg)