# recursion.
# # base case n == 1:
# # return True
# recursion n//2

def fun(a):
    if a == 1:
        return True
    else:
        return fun(int(a))