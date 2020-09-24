# WAP to print all negative numbers in a range.
# end is a parameter inside print function.
# It tells print what character to print, after printing the given ones.
# By default, it's value is '\n', i.e., new line character.

def printNeg(l, r):
    for i in range(l, r + 1):
        if i < 0:
            print(i, end=" ")


printNeg(-10, -5)
