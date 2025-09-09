def solution(ingredient):
    answer = 0
    seq = [2,3,1]
    i = 0

    while i <= len(ingredient) - 4:
        if ingredient[i] == 1 and ingredient[i+1:i+4] == seq:
            answer += 1
            del ingredient[i:i+4]
            i = max(i - 3, 0)
        else:
            i += 1

    return answer
