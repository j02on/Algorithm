num = int(input())

for i in range(num) :
    pwd = input()
    len_pwd = len(pwd)
    if 6 <= len_pwd and len_pwd <= 9 :
        print("yes")
    else : 
        print("no")
