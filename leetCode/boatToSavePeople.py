people = [1, 2]
limit = 3
left = boatnumber = 0
right = len(people)-1
while(left<= right):
      if left == right:
            boatnumber+=1
            break
      if (people[left]+people[right])<= limit:            
            left+=left
      right-=1
      boatnumber+=1
print(boatnumber)

      