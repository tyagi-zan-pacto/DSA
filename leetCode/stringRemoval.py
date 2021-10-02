s = "abbaca"
new_list = []
count = 1
while(count<len(s)):
    new_list.append(count)
    if s[count] == s[count-1]:
        count+=1
print(new_list)