t = int(input())

for i in range(t):
    n,x,y = map(int, input().split(" "))
    
    if y%x == 0:
        print('YES')
    else:
        print('NO')
    
