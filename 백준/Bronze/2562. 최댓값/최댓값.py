max = 0
count = 0
for i in range(1,10) :
    num = int(input())
    if(num > max) :
        count = i
        max = num
print(max)
print(count)