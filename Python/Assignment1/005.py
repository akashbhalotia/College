# WAP to print duplicates from a list of integers
# {} declares an empty dictionary, not set
# To declare an empty set, use set()

def findDuplicates(list1):
    store = set()
    duplicates = set()

    for i in list1:
        if i not in store:
            store.add(i)
        else:
            duplicates.add(i)

    return duplicates


inputList = [1, 5, 2, 8, 2, 1, 9, 3, 10, 5, 1]
print('Input list:')
print(inputList)

dupl = findDuplicates(inputList)
print('\nDuplicates:')
print(dupl)
