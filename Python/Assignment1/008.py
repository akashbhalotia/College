# WAP to find the sum of squares of first N natural numbers.
# Can also use the formula: N(N+1)(2N+1)/6

def sumOfSquares(N):
    s = 0

    for i in range(1, N + 1):
        s += i * i

    return s


val = 4
print(sumOfSquares(val))
