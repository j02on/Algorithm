n,k = map(int, input().split())
count = 0

for i in range(1, n + 1) :
    if(n % i == 0) :
        count = count + 1
    else:
        continue
    if count == k :
        print(i)
        exit()
        
print(0)