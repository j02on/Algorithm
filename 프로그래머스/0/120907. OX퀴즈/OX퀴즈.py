def solution(quiz):
    results = []
    for i in quiz : 
        value = i.split('=')[0].strip()
        result = i.split('=')[1].strip()
        if eval(value) == int(result):
            results += "O"
        else : 
            results += "X"
            
    return results