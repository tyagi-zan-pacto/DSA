i = 0
# agr name[i] = typed[j] nahi toh pkka
# vo variable long presses ho rha hoga 
# isliye hmne elif me condition lgaya
# type[j]!=type[j-1] agr yeh satisfy ho 
# jata mtlb error aa jata
for j in range(len(typed)):
    if i<len(name) and name[i] = typed[j]:
        i+=1
    elif j==0 or typed[j] !=typed[j-1]:
        return false

return i==len(name)