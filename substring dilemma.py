from itertools import count


def longestString(string):
    longest = string[0]
    cl = 0
    for x in longest:
        cl += 1

    for i in string:
        c = 0
        for j in i:
            c += 1
            if c > cl:
                longest = i
                for n in list(count(longest)):
                    if n > 1:
                        return -1
                    else:
                        return longest


string = input("Enter string: ").split()
print(longestString(string))
