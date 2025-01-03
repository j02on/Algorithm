count = int(input())
time = list(map(int, input().split()))

y = 0
m = 0

for i in range(count) :
    y = y + ( time[i] // 30 ) * 10 + 10
    m = m + ( time[i] // 60) * 15 + 15

if(m < y) :
    print(f'M {m}')
elif(m == y) :
    print(f'Y M {m}')
else :
    print(f'Y {y}')    