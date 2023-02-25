def lcp(l):
    str = ''
    for i in l[0]:
        for j in l[1]:
            for k in l[2]:
                if i == j == k:
                    str += i
    return str


print(lcp(["flower","flow","flight"]))
