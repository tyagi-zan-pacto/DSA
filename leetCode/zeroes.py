arr = [1, 2,0, 1, 2, 1, 1, 1, 0]
result = [i for i in arr if i == 0] + [i for i in arr if i == 1] + [i for i in arr if i == 2]  
print(result)