# WAP to count the number of even and odd numbers in a list.
# Python does not have ++ or --

def countEven(list1):
    count = 0

    for i in list1:
        if i % 2 == 0:
            count = count + 1

    return count


inputList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
print('Input List:')
print(inputList)

ec = countEven(inputList)
print('\nNumber of even numbers:', ec)
print('Number of odd numbers:', len(inputList)-ec)
