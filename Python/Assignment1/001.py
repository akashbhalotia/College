# WAP to find all close matches of an input string, in a list.
# Refer https://www.geeksforgeeks.org/python-find-close-matches-input-string-list/

from difflib import get_close_matches


def closeMatches(patterns, word):
    print(get_close_matches(word, patterns))


inputWord = 'appel'
list1 = ['ape', 'apple', 'peach', 'puppy']
closeMatches(list1, inputWord)
