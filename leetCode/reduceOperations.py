nums = nums1 = [5,1,3]
max = count = 0

target = list(set(nums))


while (len(target)>1):
    for i in nums:
        if i>max:
            max = i
    nums_modified = list(set(nums))
    second_highest = nums_modified[-2]

    for i in range(len(nums)):
        if nums[i]==max:
            count+=1
            nums1[i] = second_highest
    max = second_highest
    target = list(set(nums))

    print(second_highest)
    print(nums)
    print(nums1)
    print(count)
ans = val = 0
nums.sort()
for i in range(1, len(nums)):
    if nums[i-1] < nums[i]: val += 1
    ans += val
print(ans)
