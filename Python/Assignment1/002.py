# WAP to swap commas and dots in a string
# Remember that strings in python are immutable.

def swap(str1):
    newStr = ''

    for ch in str1:
        if ch == ',':
            newStr += '.'
        elif ch == '.':
            newStr += ','
        else:
            newStr += ch
    return newStr


text = 'Hi, I am Akash. Nice to meet you. Hey, are you alright?'
print("Original text:\n"+text)

print("\nAfter modification:")
print(swap(text))
