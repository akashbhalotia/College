# WAP to print all negative numbers in a range.

def printNeg(start, end):
    for i in range(start, end+1):
        if i < 0:
            print(i)


printNeg(-10, -5)
