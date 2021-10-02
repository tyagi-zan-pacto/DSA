s = "111000"
list1 = []
list2 = []
count = 0
for i in s:
    if i == "1":
        count +=1
    else:
        list1.append(count)
        count = 0
    list1.append(count)

count = 0
for i in s:
    if i == "0":
        count +=1
    else:
        list2.append(count)
        count = 0
    list2.append(count)

print(max(list1))
print(max(list2))
if max(list2)<=max(list1):
    print("True")
else:
    print("False")

# class Solution:
#     def checkZeroOnes(self, s: str) -> bool:
#         best_one, best_zero, current_one, current_zero = 0, 0, 0, 0
#
#         for i in s:
#             if i == "1":
#                 current_zero = 0
#                 current_one += 1
#             else:
#                 current_zero += 1
#                 current_one = 0
#
#             best_one = max(best_one, current_one)
#             best_zero = max(best_zero, current_zero)
#
#         return best_one > best_zero
# Fn + F5
