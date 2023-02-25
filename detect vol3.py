def detectCapital(w):
    t = []
    c = w.upper()
    for i in w:
        for j in c:
            if i == j:
                t.append(True)
            else:
                t.append(False)

    if all(t) or not all(t):
        return True
    elif t[0] and all(t.remove(t[0])):
        return False


print(detectCapital('FlaG'))
