from fractions import Fraction

yw = list(map(int, input().split()))

maximum = max(yw)
a = 1
for i in range(maximum, 6):
    a += 1

fraction = Fraction(a, 6)
output = str(fraction.numerator) + "/" + str(fraction.denominator)
print(output)