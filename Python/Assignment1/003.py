# WAP to find the N largest elements of a list.

def k_largest(list1, K):
    list1.sort(reverse=True)
    newList = []

    for i in range(K):
        newList.append(list1[i])

    return newList


inputList = [4, 9, 1, 5, 10, 30, 27, 3, 8]
print('Input list:')
print(inputList)

outputList = k_largest(inputList, 5)
print('\nN largest elements:')
print(outputList)
