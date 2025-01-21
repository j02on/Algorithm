max_score = 0
for i in range(1, 6) :
    score1,score2,score3,score4 = map(int, input().split())
    score = score1 + score2 + score3 + score4 
    
    if(max_score < score) :
        max_score = score
        win = i
print(f'{win} {max_score}')