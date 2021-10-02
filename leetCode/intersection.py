# nums1 = [1, 1, 2, 2]
# nums2 = [2, 2]

nums1 = [4, 5, 9]
nums2 = [4, 4, 8, 9, 9]
nums1.sort()
nums2.sort()
l = 0
r = 0
ans = []
while(l< len(nums1) and r<len(nums2)):
    if nums1[l]<nums2[r]:
        l+=1

    elif nums2[r]<nums1[l]:
        r+=1
    elif nums1[l] == nums2[r]:
        # print(nums1[l])
        ans.append(nums1[l])
        l+=1
        r+=1

print(ans)