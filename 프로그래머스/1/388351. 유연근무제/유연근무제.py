def solution(schedules, timelogs, startday):
    answer = 0
    n = len(schedules)
    
    
    for i in range(n):
        count = 0
        day = startday
        for j in range(7):
            if day <= 5:
                # 시각 계산
                target = schedules[i]
                hour = target // 100
                minute = target % 100
                minute += 10
                if minute >= 60:
                    hour += 1
                    minute -= 60
                allowed_time = hour * 100 + minute
                
                if timelogs[i][j] <= allowed_time:
                    count += 1

            day += 1
            if day > 7:
                day = 1

        if count >= 5:
            answer += 1
    return answer
