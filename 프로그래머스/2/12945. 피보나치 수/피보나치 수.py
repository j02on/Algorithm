def solution(n):
    answer = 0
    arr = []
    
    for i in range(n + 1):
        if (i == 0) :
            arr.append(0)
        elif(i == 1) :
            arr.append(1)
        else :
            arr.append(arr[i - 2] + arr[i - 1])
            
    answer = arr[n] % 1234567
    
    return answer