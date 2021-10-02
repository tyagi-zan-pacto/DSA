# s = "hello"
# list1 = list2 = []
# count = 0
# for i in s:
#       for j in s:
#             if i!= j:
#                   list1 = list1 +[i]
#       count+=1
#       list2 = list2 + [count]
# print(list2)

def lengthOfLongestSubstring(s):
        seen = dict()
        i = 0
        maxLen = 0
        for j, char in enumerate(s):
            if char in seen:
                i = max(i, seen[char])
                print(seen[char],i)
            seen[char] = j + 1
            maxLen = max(maxLen, j - i + 1)
            print(maxLen)
            print(seen)
        return maxLen

print(lengthOfLongestSubstring("abcbbace"))