import sys
input = sys.stdin.readline

N, M = map(int, input().split())
money = []

for _ in range(N):
    money.append(int(input()))

start = max(money)
end = sum(money)

while start <= end:
    mid = (start + end)//2 # mid == 인출금액
    
    charge = mid
    cnt = 1
    
    for i in money:
        
        if charge - i <0:
            cnt += 1
            charge = mid
        charge -= i 
                
    if cnt > M:
        start = mid+1
    else:
        end = mid-1
print(mid)
    
    

