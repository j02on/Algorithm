l, p = map(int,input().split())

listPer = list(map(int, input().split()))

for i in range(len(listPer)) :
    print(f'{listPer[i] - (l * p)} ', end="")