a = "11"
b = "1"
first , second , count , s = len(a)-1, len(b)-1, 0, ''
while first >= 0 or second>=0 or count:
    if first >= 0:
        count += int(a[first])
        first -= 1
    if second >= 0:
        count += int(b[second])
        second -= 1
    s = str(count%2)+ s
    count = count//2

print(s)
