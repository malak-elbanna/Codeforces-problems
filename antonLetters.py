anton = input()
anton = anton.replace("{", "").replace("}", "").replace(",", "").replace(" ", "")
antonLetters = set()
for i in anton:
    antonLetters.add(i)
print(len(antonLetters))