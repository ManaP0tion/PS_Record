n = int(input())

for _ in range(n):
    input()
    board= []
    cnt = 0

    r, c = map(int, input().split())
    for _ in range(r):
        board.append(list(input()))

    for i in range(r-2):
        for j in range(c):
            if board[i][j] == 'v' and board[i+1][j] == 'o' and board[i+2][j] == '^':
                cnt += 1
            
    for i in range(r):
        for j in range(c-2):
            if board[i][j] == '>' and board[i][j+1] == 'o' and board[i][j+2] == '<':
                cnt += 1

    print(cnt)
