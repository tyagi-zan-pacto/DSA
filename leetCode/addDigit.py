# // numbers split()
# // -> add those numbers
# // number split()
# // -> add those numbers

def split(number):
    stack = []
    while(number>0):
        storing_number = number%10
        stack.append(storing_number)
        number//=10
        return add(stack)
def add(stack):
    count = 0
    for i in range(len(stack)):
        count +=stack[i]
    if count>10:
        split(count)
    return count


print(split(38))
