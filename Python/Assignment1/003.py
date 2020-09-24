# WAP to find the N largest elements of a list.

def n_largest(list1, N):
    list1.sort(reverse=True)
    newList = []

    for i in range(N):
        newList.append(list1[i])

    return newList


inputList = [4, 9, 1, 5, 10, 30, 27, 3, 8]
print('Input list:')
print(inputList)

outputList = n_largest(inputList, 5)
print('\nN largest elements:')
print(outputList)
