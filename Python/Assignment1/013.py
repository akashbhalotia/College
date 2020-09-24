# WAP to perform Bubble Sort.

def sort(list1):
    N = len(list1)

    for i in range(0, N):
        flag = False
        for j in range(0, N - i - 1):
            if list1[j] > list1[j + 1]:
                list1[j], list1[j + 1] = list1[j + 1], list1[j]
                flag = True
        if not flag:
            break


inputList = [5, 1, 8, 2, 5, 2, 1, 0, 2, 9, 11, 18, 3]
print('Input list:', inputList)

sort(inputList)
print('Sorted:', inputList)
