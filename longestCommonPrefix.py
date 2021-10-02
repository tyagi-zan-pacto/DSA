strs = ["flower","flow","flight"]
j = 0
for i in range(1, len(strs)):
    # print(strs[i])
    if strs[i][j]==strs[i-1][j]:
        count+=1
    print(count)
