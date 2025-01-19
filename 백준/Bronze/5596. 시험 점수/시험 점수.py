for i in range(2) :
    num1, num2, num3, num4 = map(int, input().split())
    if(i == 1) :
        if(num1 + num2 + num3 + num4 > allNum) :
            print(num1 + num2 + num3 + num4)
            exit()
        else : 
            print(allNum)
            exit()
    allNum = num1 + num2 + num3 + num4