# WAP to convert a list of tuples into a dictionary.

def convert(list1):
    return dict(list1)


inputList = [("Akash", 1), ("Light", 0), ("L", 4), ("Mello", 2), ("Near", 2)]
print("Input List:", inputList)

print("Dictionary:", convert(inputList))


#################################################
# Alternatively:

def convert(list1):
    myDict = {}
    for a, b in list1:
        myDict[a] = b
    return myDict
