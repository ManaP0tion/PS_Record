n = int(input())
for i in range(n):
    num = int(input())
    flag = False
    for j in range(2, 65):
        li = []
        temp = num
        
        while temp != 0:
            li.append(temp%j) 
            temp = temp // j

        
        li2 = list(reversed(li))
        if (li == li2):
            flag = True
            break
        
    if flag:
        print(1)
    else:
        print(0)