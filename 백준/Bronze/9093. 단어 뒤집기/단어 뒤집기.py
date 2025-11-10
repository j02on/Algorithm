count = int(input())

for _ in range(count):
    message = input()
    words = message.split()
    reversed_words = []

    for word in words:
        stack = []
        for ch in word:
            stack.append(ch)
        
        reversed_word = ""
        while stack:
            reversed_word += stack.pop()
        
        reversed_words.append(reversed_word)
    
    print(" ".join(reversed_words))
