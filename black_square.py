acalories = list(map(int, input().split()))
s = input()
wasted_calories = 0
for i in s:
    i = int(i)
    wasted_calories += acalories[i-1]
    
print(wasted_calories)