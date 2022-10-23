tc = int(input())

for t in range(tc):
    x, y = map(int,input().split())
    
    if x<y:
        print("FIRST")
    elif x==y:
        print("ANY")
    else:
        print("SECOND")
