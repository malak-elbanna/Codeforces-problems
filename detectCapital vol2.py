def isPuncatuted(word):
    capitalLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    wordBools = [word[i] in capitalLetters for i in range(len(word))]
    if all(wordBools):
        return True
    else:
        status = True
        for i in range(len(wordBools)):
            if wordBools[i] and i == 0:
                pass
            elif wordBools[i]:
                return False
        return status


print(isPuncatuted("FlaG"))
