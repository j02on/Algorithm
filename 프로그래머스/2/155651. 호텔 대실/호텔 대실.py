import heapq

def solution(book_time):
    def time_to_minutes(t):
        h, m = map(int, t.split(":"))
        return h * 60 + m
    
    times = [[time_to_minutes(start), time_to_minutes(end)] for start, end in book_time]
    times.sort(key=lambda x: x[0])
    
    heap = []
    
    for start, end in times:
        if heap and heap[0] + 10 <= start:
            heapq.heappop(heap) 
        heapq.heappush(heap, end)
    
    return len(heap)
