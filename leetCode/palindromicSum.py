s = "babad"
string_variable = ''
for i in s:
    string_variable = string_variable+i
    if string_variable == string_variable[::-1]:
        continue
    string_variable = ''
print(string_variable)
