arr = [4,5,6,7,0,1,2]
target = 0

l = 0
r = len(arr)-1

# # while(f<=l):
# #     mid = (f+l)//2
# #     if arr[mid] ==  target:
# #         print(mid)
# #         break
    
# #     elif arr[mid] < target:
# #         f = mid+1
# #     elif arr[mid] > target:
# #         l = mid -1
# #     else:
# #         print('-1')
# #         break

while(l<=r):
    mid = (l+r)//2
    comparator = arr[mid]
    if ((target< arr[0] and arr[mid]<arr[0]) or (target>arr[0] and arr[mid]>arr[0])):
        comparator = arr[mid]
    else:
        if target < arr[0]:
            comparator = -9999999999999
        else:
            comparator = 999999999999999
    if target == comparator:
        print(mid)
        break
    if target > comparator:
        l = mid+1
    else:
        r = mid -1

print('-1')


# class Solution {
# public:
#     int search(vector<int>& nums, int target) {
#         int l = 0, r = nums.size()-1;
#         while(l <= r)
#         {
#             int mid = (r - l)/2 + l;
#             int comparator = nums[mid];
#             // Checking if both target and nums[mid] are on same side.
#             if((target < nums[0]) && (nums[mid] < nums[0]) || (target >= nums[0]) && (nums[mid] >= nums[0]))
#                 comparator = nums[mid];
#             else
#             {
#                     // Trying to figure out where nums[mid] is and making comparator as -INF or INF
#                 if(target <nums[0])
#                     comparator = -INFINITY;
#                 else 
#                     comparator = INFINITY;

#             }
#             if(target == comparator) return mid;
#             if(target > comparator)            
#                 l = mid+1;            
#             else
#                 r = mid-1;

#         }
#         return -1;
#     }
# };
