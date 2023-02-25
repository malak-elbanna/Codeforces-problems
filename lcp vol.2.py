def longestCommonPrefix(strs):
    strsLens = [len(word) for word in strs]
    maxPrefixLen = min(strsLens)
    prefix = []
    for i in range(maxPrefixLen):
        counter = 0
        for word in strs:
            if strs[0][i] == word[i]:
                counter += 1
            else:
                return "".join(prefix)
            if counter == len(strs):
                prefix.append(strs[0][i])
                counter = 0
    return "".join(prefix)


print(longestCommonPrefix(["flower","flow","flight"]))
