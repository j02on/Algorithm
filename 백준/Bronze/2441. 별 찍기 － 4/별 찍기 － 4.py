num = int(input())

for i in range(num, 0, -1):
    for h in range(num - i) :
        print(" ", end="")
    for j in range(i, 0, -1) :
        print("*", end="")
    print()
    