# WAP to sort a list of tuples by second item.
# list1.sort() modifies list1
# sorted(list1) would have not modified it, but returned a sorted list.

def second(ele):
    return ele[1]


def sortTuples(list1):
    list1.sort(key=second)


inputList = [(1, 2), (1, 3), (3, 3), (0, 3), (3, 5), (7, 2), (5, 5)]
print('Input List:', inputList)

sortTuples(inputList)
print('\nSorted:', inputList)


###########################################################################
# Another way to do it:

def sortTuples(list1):
    list1.sort(key=lambda x: x[1])
