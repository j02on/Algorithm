def solution(order):
    order_str = str(order)
    count = 0
    for i in order_str:
        listNum = ['3','6','9']
        if i in listNum :
            count = count + 1
    
    return count;