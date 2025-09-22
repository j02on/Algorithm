from collections import Counter

def solution(k, tangerine):
    answer = 0
    
    counts = Counter(tangerine)
        
    countArr = sorted(counts.values(), reverse=True)
    
    for i in countArr :
        if k <= 0 :
            break;
        
        k -= i
        answer = answer + 1

    return answer