x = 10
n = x
dig = 0
rev = 0
while(n>0):
    dig = n%10
    rev = dig+ rev*10
    n=n//10
print(rev)