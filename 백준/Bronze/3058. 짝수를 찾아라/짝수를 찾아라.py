num = int(input())

for i in range(num) :
    numberList = list(map(int, input().split()))
    count = 0;
    evenList = []
    for j in numberList :
        if(j % 2 == 0) :
            count = count + j
            evenList.append(j)
    print(f'{count} {min(evenList)}')