while True :
    name, age, weight = input().split()
    weight = int(weight)
    age = int(age)

    if(name == "#" and age == 0 and weight == 0) :
        exit()
    if(17 < age or 80 <= weight) :
        print(f'{name} Senior')
    else :
        print(f'{name} Junior')