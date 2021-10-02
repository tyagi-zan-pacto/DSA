string_input = "1234"
target = 5
shifting =''
string_obtain = string_input+str(target)
list(string_obtain)

count = 0
#

# for i in range(len(string_obtain)):
#
#     print(string_obtain)

for i in range(len(string_obtain)):
    string_obtain = string_obtain[:count] + string_obtain[i] + string_obtain[count:]
    print(string_obtain)
