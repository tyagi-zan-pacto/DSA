number = ['2', '3', '4', '5', '6', '7', '8', '9']
alphabet = ['abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']

# for i in alphabet[1]:
#     print(i)
n = m = []
digits = input("")
for i in digits:
    if not n:
        n = alphabet[int(i)]
    else:
        m = alphabet[int(i)]
print(m)
print(n)

for i in m:
    for j in n:
        print("{},{}".format(i, j), end='')