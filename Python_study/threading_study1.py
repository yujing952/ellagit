import math


def is_perfect_square(n):
    sqrt = math.isqrt(n)
    return sqrt * sqrt == n

print(is_perfect_square(9))