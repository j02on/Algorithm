seven25Price, seven25G = map(int, input().split())

index = int(input())

min = (seven25Price / seven25G) * 1000

for i in range(0, index) :
    price, g = map(int, input().split())
    a = ((price / g) * 1000)
    if(a <= min) :
        min = a
print(min)