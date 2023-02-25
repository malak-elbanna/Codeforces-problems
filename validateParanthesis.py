def validate(s):
    for i in range(len(s)):
        for p in s:
            if s[0][i] == p[0]:
                return True
            return False


print(validate('(]'))
