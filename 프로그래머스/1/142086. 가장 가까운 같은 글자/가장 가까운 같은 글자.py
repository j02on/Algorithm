def solution(s):
    answer = []
    last_index = {}

    for i in range(len(s)):
        char = s[i]
        if char not in last_index:
            answer.append(-1)
        else:
            answer.append(i - last_index[char])
        last_index[char] = i

    return answer
