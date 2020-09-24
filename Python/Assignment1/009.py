# WAP to find uncommon words in two strings.

ans1 = set()
ans2 = set()


def findUncommon(str1, str2):
    words1 = str1.split()
    words2 = str2.split()
    set1 = set()
    set2 = set()

    for w in words1:
        set1.add(w)
    for w in words2:
        set2.add(w)

    for w in words1:
        if w not in set2:
            ans1.add(w)
    for w in words2:
        if w not in set1:
            ans2.add(w)


inputStr1 = 'hi hello bye ok world sky bye'
inputStr2 = 'hi world sky boomer hello hello bye'

findUncommon(inputStr1, inputStr2)
print('Uncommon words in string1:', ans1)
print('Uncommon words in string2:', ans2)
