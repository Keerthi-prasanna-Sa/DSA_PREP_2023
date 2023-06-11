import random
c = random.randint(0, 2)
u = int(input("Enter 0 for rock, 1 for paper and 2 for scissor: "))

result = "Draw" if c==u else "Computer won" if c==0 and u==2 or c==1 and u==0 or c==2 and u==1 else "User won"

print(result)