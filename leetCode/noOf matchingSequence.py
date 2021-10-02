s = "abcde"
words = ["a","bb","acd","ace"]
i = j = f = count =g=0
while i<len(words):
    while j<len(words[i]):
        if words[i][j] == s[f]:
            j+=1
            count +=1
        f+=1

    i+=1
    if count == (len(words[i])-1):
        g+=1
    print(g)
