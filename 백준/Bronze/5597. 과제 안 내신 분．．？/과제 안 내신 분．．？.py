numFakeList = []
numList = []

for i in range(1,31) :
    numFakeList.append(i)
    
    
for h in range(28) :
    num = int(input())
    numList.append(num)
    
for j in numFakeList :
    if j not in numList :
        print(j)