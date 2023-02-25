def detectCapital(w):
    t = []
    c = w.upper()
    for i in w:
        for j in c:
            if i == j:
                t.append(True)
            else:
                t.append(False)

    if all(t):
        return True
    else:
        for i in range(len(t)):
            if t[i] and i == 0:
                pass
            elif t[i]:
                return False
        return True


print(detectCapital('FlaG'))
