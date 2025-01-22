totalPrice = int(input())
count = 0

for i in range(9) :
    price = int(input())
    count = count + price
     
print(totalPrice - count)