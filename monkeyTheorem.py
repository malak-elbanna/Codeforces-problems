import random


def generate():
    alphabet = "abcdefghijklmnopqrstuvwxyz "
    string = ""
    for i in range(35):
        string += alphabet[random.randrange(27)]

    return string


def similarityScore(goal, string):
    numSame = 0
    for i in range(len(goal)):
        if goal[i] == string[i]:
            numSame += 1

    similarity = numSame / len(goal)
    return similarity


def main():
    goal = "a computer science portal for geeks"
    newString = generate()
    bestMatch = 0
    newScore = similarityScore(goal, newString)
    while newScore < 1:
        if newScore > bestMatch:
            print(newString)

        newString = generate()
        newScore = similarityScore(goal, newString)


main()

