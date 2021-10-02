arr = [0, 2, 3, 1]
count = 1
for i in range(1, len(arr)):
    if arr[i]<arr[i-1]:
        # print(arr[i])
        count+=1
    
if count==0 and count==(len(arr)):
    print('False')

for i in range(count, len(arr)):
    if arr[i]<arr[i+1]:
        count+=1
if count == len(arr):
    print('True')
    
# print('hello')