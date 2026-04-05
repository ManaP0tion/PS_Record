for testcase in range(1, 11):
    N = int(input())
    building = list(map(int, input().split()))
    result = 0
    
    # 문제의 조건: 맨 앞과 맨뒤에는 건물이 안지어짐
    for i in range(2, N-2):
        leftside = max(building[i-2], building[i-1])
        rightside = max(building[i+2], building[i+1])
        highest = max(leftside, rightside)
        
        if building[i] > highest:
            result += building[i] - highest
    print(f'#{testcase} {result}')