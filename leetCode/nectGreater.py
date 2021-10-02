nums1 = [4,1,2]
nums2 = [1,3,4,2]

def findNumber(n):
    count = 0
    for i in nums2:
        if i == n:
            return count
        count+=1
# print(findNumber(3)+1)

for x in nums1:
    d = (findNumber(x))

