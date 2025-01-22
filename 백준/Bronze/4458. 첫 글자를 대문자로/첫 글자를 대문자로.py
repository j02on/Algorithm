num = int(input())

for i in range(num) :
    strList = list(input())
    strList[0] = strList[0].capitalize()
    print(''.join(strList))
    