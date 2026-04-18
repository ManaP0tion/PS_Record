
T = int(input())

for testcase in range(1, T+1):
    N = int(input())
    arr = list(map(int, input().split())) # 배열 입력을 받는다
    
    sellPrice = 0    
    ans = 0
    
    for val in arr[::-1]: # 거꾸로 순회하면서
        if val >= sellPrice: # 해당가격이 sellPrice보다 크다면
            sellPrice = val  # 가격 업데이트한다
        ans += sellPrice - val # 현재값에 구매해서 최대값에 판매
        
    print(f"#{testcase} {ans}")
            