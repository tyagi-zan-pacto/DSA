def fact(n):
    if n == 0:
        return 1
    else:
        return n * fact(n-1)

store = fact(4)
another_store = store
rev = 0
count = 0
while(another_store>0):
    if (another_store%10 == 0):
        
        another_store//=10
        count+=1
    else:
        break
print(count)

