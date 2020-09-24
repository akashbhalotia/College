# Write a program to find the Nth fibonacci number.

def fibo(N):
    if N == 1:
        return 0
    if N == 2:
        return 1

    a, b, c = 0, 1, 0

    for i in range(3, N+1):
        c = a + b
        a, b = b, c

    return c


val = 10
print(fibo(val))
