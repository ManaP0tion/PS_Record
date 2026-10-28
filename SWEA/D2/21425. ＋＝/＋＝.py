T = int(input())

for testcase in range(1, T+1):
    A, B, N = map(int, input().split())

    # 조건 : x 나 y 둘 중 하나 이상에 저장된 값이 N 초과되게 끔
    # A = 현재 x에 저장된 값 / B = 현재 y에 저장된 값
    # 그냥 두개 받자마자 작은쪽 += 큰쪽 하면 됨

    # 맨첨에는 B를 작은쪽으로 설정
    if A > B:
        A, B = B, A



    cnt = 0
    while True:
        # 종료조건
        if max(A, B) > N:
            print(cnt)
            break

        cnt += 1
        #홀수일때
        if cnt % 2 == 1:
            A += B
        #짝수일때
        else:
            B += A


