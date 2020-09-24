# WAP to perform Quicksort.
# Here, I've taken the first element as the pivot.

def partition(list1, l, r):
    cur = l + 1
    pivot = list1[l]

    for i in range(l + 1, r + 1):
        if list1[i] <= pivot:
            list1[cur], list1[i] = list1[i], list1[cur]
            cur = cur + 1
    list1[l], list1[cur-1] = list1[cur-1], list1[l]
    return cur-1


def sort(list1, l, r):
    if l < r:
        pos = partition(list1, l, r)
        sort(list1, l, pos-1)
        sort(list1, pos+1, r)


inputList = [5, 1, 8, 2, 5, 2, 1, 0, 2, 9, 11, 18, 3]
print('Input list:', inputList)

sort(inputList, 0, len(inputList)-1)
print('Sorted:', inputList)
