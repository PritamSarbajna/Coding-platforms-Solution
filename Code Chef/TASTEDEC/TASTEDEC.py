t = int(input())

for i in range(t):
    a,b=map(int,input().split(" "))
    
    if a*2 == b*5:
        print('Either')
    elif a*2 > b*5:
        print('Chocolate')
    else:
        print('Candy')
