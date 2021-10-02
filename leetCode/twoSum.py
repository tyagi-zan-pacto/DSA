def function(arr,n):

      for i in arr:
            for j in arr:
                  if i+j==4 and i!=j:
                        print(i,j)                        

arr = list(map(int,input().split(" ")))
n = 4
print(function(arr, n))

for i in range(len(nums)):
            if((target-nums[i] in nums) and nums.index(target-nums[i])!=i ):
                return [i, nums.index(target-nums[i])]
				break