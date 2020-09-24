# WAP to find the the Kth non-repeating character in a string.
# Use List Comprehension and OrderedDict

# Refer to: https://www.geeksforgeeks.org/kth-non-repeating-character-python-using-list-comprehension-ordereddict/
# Instead of iteritems, use items, as iteritems was removed in python3

# OrderedDict orders the items according to position of it's first
# occurrence in the input list.

from collections import OrderedDict


def kthNon(str1, k):
    myDict = OrderedDict.fromkeys(str1, 0)

    for ch in str1:
        myDict[ch] += 1

    nonRepeatDict = [key for (key, value) in \
                     myDict.items() if value == 1]

    if len(nonRepeatDict) < k:
        return 'Less than k non-repeating characters in input.'
    else:
        return nonRepeatDict[k - 1]


inputStr = "akashbhalotia"
inputK = 3
print(kthNon(inputStr, inputK))
