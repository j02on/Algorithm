def solution(left, right):
    answer = 0
    def getCount (n):
        count = 0
        for i in range(1, n+1):
            if n % i == 0 :
                count = count + 1
        return count
    
    for i in range(left, right + 1) :
        num = getCount(i)
        if num % 2 == 0:
            answer = answer + i
        else :
            answer = answer - i
    return answer