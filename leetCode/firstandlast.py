nums = [5,7,7,8,8,10]

target = 8

first = 0
last = len(nums)-1

while(first<=last):
    mid = int((first+last)/2)
    if nums[mid]==target:
        break