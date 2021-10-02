x = 8
l = 0
r = x
target = 8
while (l<=r):
    mid = (l+r)//2
    if mid*mid == target:
        print(mid)
        break
    elif (mid*mid)>target:
        r = mid-1
    else:
        l = mid+1

print(r)

