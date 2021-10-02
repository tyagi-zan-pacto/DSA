found = False
length = len(num)
Largest = 0
for i in range(length)[::1]:
    if (int(num[i])%2 != 0):
        Largest = i
        found = True
        break
if found == True:
    return (num[:Largest+1])
return ""