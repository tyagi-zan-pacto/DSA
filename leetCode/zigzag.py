string = ''
for i in s:
    L[index] +=i
    if index == 0:
        step =1
    elif index == numRows-1:
        step=-1
    index+=step
return ''.join(L)

